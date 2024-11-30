#include "book.hpp"
#include "user.hpp"
#include <iostream>

int main()
{
    Book myBook("1234567890", "C++ Programming", "Bjarne Stroustrup", "Addison-Wesley", 912);

    std::cout << "Book Details:" << std::endl;
    myBook.displayInfo();

    // *********************************************************************

    User user("12345", "John Doe", "john.doe@example.com");

    user.displayInfo();

    user.borrowBook("978-0131103627");
    user.borrowBook("978-0262033848");

    std::cout << "\nAfter borrowing books:" << std::endl;
    user.displayInfo();

    user.returnBook("978-0131103627");

    std::cout << "\nAfter returning a book:" << std::endl;
    user.displayInfo();

    return 0;
}