#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <vector>
#include "book.hpp"
#include "user.hpp"

class Library
{
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    void addBook(const Book &book);
    void listBooks() const;
    void addUser(const User &user);
    void listUsers() const;
    void borrowBook(const std::string &userID, const std::string &isbn);
    void returnBook(const std::string &userID, const std::string &isbn);
};

#endif