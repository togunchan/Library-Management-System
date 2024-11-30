#include <iostream>
#include "library.hpp"

int main()
{
    Library library;

    // Kitap ve kullanıcı ekleme
    library.addBook(Book("1234567890", "C++ Programming", "Bjarne Stroustrup", "Addison-Wesley", 912));
    library.addBook(Book("9876543210", "Effective Modern C++", "Scott Meyers", "O'Reilly", 334));
    library.addUser(User("U001", "Alice", "alice@example.com"));
    library.addUser(User("U002", "Bob", "bob@example.com"));

    std::cout << "\n--- Library Books ---" << std::endl;
    library.listBooks();
    std::cout << "\n--- Library Users ---" << std::endl;
    library.listUsers();

    std::cout << "\n--- Borrowing a Book ---" << std::endl;
    library.borrowBook("U001", "1234567890");

    std::cout << "\n--- After Borrowing ---" << std::endl;
    library.listBooks();

    std::cout << "\n--- Returning a Book ---" << std::endl;
    library.returnBook("U001", "1234567890");

    std::cout << "\n--- After Returning ---" << std::endl;
    library.listBooks();

    return 0;
}