#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <vector>
#include <string>

class User
{
private:
    std::string userID;
    std::string name;
    std::string email;
    std::vector<std::string> borrowedBooks;

public:
    // Constructor
    User(std::string userID, std::string name, std::string email);

    // Getters
    std::string getUserID() const;
    std::string getUserName() const;
    std::string getEmail() const;
    std::vector<std::string> getBorrowedBooks() const;

    // Setters
    void borrowBook(const std::string &isbn);
    void returnBook(const std::string &isbn);

    // Display Info
    void displayInfo() const;
};

#endif // USER_HPP
