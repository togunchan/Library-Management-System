#include "book.hpp"
#include <iostream>

int main()
{
    Book myBook("1234567890", "C++ Programming", "Bjarne Stroustrup", "Addison-Wesley", 912);

    std::cout << "Book Details:" << std::endl;
    myBook.displayInfo();
}