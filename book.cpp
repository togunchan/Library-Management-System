#include "book.hpp"
#include <iostream>

// Constructor
Book::Book(std::string isbn,
           std::string title,
           std::string author,
           std::string publisher,
           int pageCount) : LibraryItem(title, publisher),
                            ISBN(isbn),
                            author(author), pageCount(pageCount), isAvailable(true) {}

// Getters
std::string Book::getISBN() const { return ISBN; }
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getPublisher() const { return publisher; }
int Book::getPageCount() const { return pageCount; }
bool Book::getAvailability() const { return isAvailable; }

// Setter
void Book::setAvailability(bool availability) { isAvailable = availability; }

void Book::displayInfo() const
{
    std::cout << "ISBN: " << ISBN << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Publisher: " << publisher << std::endl;
    std::cout << "Page Count: " << pageCount << std::endl;
    std::cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << std::endl;
}