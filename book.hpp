#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "libraryItem.hpp"

class Book : public LibraryItem
{
private:
    std::string ISBN;
    std::string author;
    int pageCount;
    bool isAvailable;

public:
    // Constructor
    Book(std::string isbn, std::string title, std::string author, std::string publisher, int pageCount);

    // Getters
    std::string getISBN() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getPublisher() const;
    int getPageCount() const;
    bool getAvailability() const;

    // Setter
    void setAvailability(bool availability);

    void displayInfo() const override;
};

#endif