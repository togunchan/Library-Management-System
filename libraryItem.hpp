#ifndef LIBRARYITEM_HPP
#define LIBRARYITEM_HPP

#include <string>

class LibraryItem
{
protected:
    std::string title;
    std::string publisher;

public:
    LibraryItem(const std::string &title, const std::string &publisher);
    virtual ~LibraryItem() = default;
    virtual void displayInfo() const = 0;
};

#endif