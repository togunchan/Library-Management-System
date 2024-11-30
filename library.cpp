#include "library.hpp"
#include <iostream>
#include <vector>

void Library::addBook(const Book &book)
{
    books.push_back(book);
    std::cout << "Book \"" << book.getTitle() << "\" has been added to the library." << std::endl;
}

void Library::listBooks() const
{
    if (books.empty())
    {
        std::cout << "No books in the library." << std::endl;
        return;
    }
    std::cout << "Books in the library:" << std::endl;
    for (const Book &book : books)
    {
        book.displayInfo();
        std::cout << "-------------------------" << std::endl;
    }
}

void Library::addUser(const User &user)
{
    users.push_back(user);
    std::cout << "User \"" << user.getUserName() << "\" has been added to the library system." << std::endl;
}

void Library::listUsers() const
{
    if (users.empty())
    {
        std::cout << "No users in the library system." << std::endl;
        return;
    }
    std::cout << "Users in the library system:" << std::endl;
    for (const User user : users)
    {
        user.displayInfo();
        std::cout << "-------------------------" << std::endl;
    }
}

void Library::borrowBook(const std::string &userID, const std::string &isbn)
{
    // Find the first user in the 'users' vector whose UserID matches the given 'userID' using a lambda expression
    std::vector<User>::iterator userIt = std::find_if(users.begin(), users.end(), [&userID](const User &user)
                                                      { return user.getUserID() == userID; });
    if (userIt == users.end())
    {
        std::cout << "User with ID " << userID << " not found." << std::endl;
        return;
    }

    std::vector<Book>::iterator bookIt = std::find_if(books.begin(), books.end(), [&isbn](const Book &book)
                                                      { return book.getISBN() == isbn; });
    if (bookIt == books.end())
    {
        std::cout << "Book with ISBN " << isbn << " not found." << std::endl;
        return;
    }

    // Is the book already borrowed?
    if (!bookIt->getAvailability())
    {
        std::cout << "Book \"" << bookIt->getTitle() << "\" is already borrowed." << std::endl;
        return;
    }

    // borrow the book
    bookIt->setAvailability(false);
    userIt->borrowBook(isbn);
    std::cout << "Book \"" << bookIt->getTitle() << "\" has been borrowed by " << userIt->getUserName() << "." << std::endl;
}

void Library::returnBook(const std::string &userID, const std::string &isbn)
{
    std::vector<User>::iterator userIt = std::find_if(users.begin(), users.end(), [&userID](const User &user)
                                                      { return user.getUserID() == userID; });
    if (userIt == users.end())
    {
        std::cout << "User with ID " << userID << " not found." << std::endl;
        return;
    }

    std::vector<Book>::iterator bookIt = std::find_if(books.begin(), books.end(), [&isbn](const Book &book)
                                                      { return book.getISBN() == isbn; });
    if (bookIt == books.end())
    {
        std::cout << "Book with ISBN " << isbn << " not found." << std::endl;
        return;
    }

    bookIt->setAvailability(true);
    userIt->returnBook(isbn);
    std::cout << "Book \"" << bookIt->getTitle() << "\" has been returned by " << userIt->getUserName() << "." << std::endl;
}