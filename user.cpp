
#include "user.hpp"

// Constructor
User::User(std::string userID,
           std::string name,
           std::string email) : userID(userID),
                                name(name),
                                email(email) {}

// Getters
std::string User::getUserID() const { return userID; }
std::string User::getUserName() const { return name; }
std::string User::getEmail() const { return email; }
std::vector<std::string> User::getBorrowedBooks() const { return borrowedBooks; }

// Setters
void User::borrowBook(const std::string &isbn)
{
    borrowedBooks.push_back(isbn);
    std::cout << name << " has borrowed the book with ISBN: " << isbn << std::endl;
}

void User::returnBook(const std::string &isbn)
{
    for (std::vector<std::string>::iterator it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it)
    {
        if (*it == isbn)
        {
            borrowedBooks.erase(it);
            break;
        }
    }
}

void User::displayInfo() const
{
    std::cout << "User ID: " << userID << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;

    std::cout << "Borrowed Books:" << std::endl;
    if (borrowedBooks.empty())
    {
        std::cout << "  No books borrowed." << std::endl;
    }
    else
    {
        for (const std::string &isbn : borrowedBooks)
        {
            std::cout << "  ISBN: " << isbn << std::endl;
        }
    }
}
