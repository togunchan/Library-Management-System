Library System Project

This project is a simple console application developed for a library management system using Object-Oriented Programming (OOP) principles. The project is written in C++ and provides basic functionality for managing library materials.

Project Overview

In this project, a LibraryItem class is created to represent common properties for different library materials, and classes like Book inherit from it. This project serves as a good example for understanding and applying fundamental OOP concepts, especially inheritance and polymorphism.

Object-Oriented Programming Concepts Used

1. Inheritance

In the project, the LibraryItem class is created as a base class to represent common properties and behaviors for all library materials. The Book class inherits from this class, extending it with specific properties for books.
	•The LibraryItem class includes shared properties such as title and publisher for all materials, while subclasses extend this to add specific attributes for each material type.

2. Polymorphism

In the project, the displayInfo method is defined as a pure virtual method in the LibraryItem class. This allows derived classes to implement their own custom behavior for displaying information.
	•The Book class overrides the displayInfo method to display specific information about books. Other materials can do the same, ensuring each material type can display its own unique information.

This approach takes advantage of polymorphism and ensures that new material types can be easily added in the future, each implementing its own version of the displayInfo method.

Classes and Their Features

LibraryItem (Base Class)

	•title: Represents the title of the material.
	•publisher: Represents the publisher of the material.
	•displayInfo(): A pure virtual method, which must be overridden by derived classes.

Book (Derived Class)

	•isbn: Represents the ISBN number of the book.
	•author: Represents the author of the book.
	•pageCount: Represents the number of pages in the book.
	•isAvailable: Indicates whether the book is available in the library.
	•displayInfo(): Displays book-specific information.

Usage

To compile the project, open the terminal or command prompt in the directory where all the files are located and use the following command:

g++ -o library_system main.cpp LibraryItem.cpp Book.cpp

Then, run the program with:

./library_system

Additional Notes

	•The LibraryItem class is a base class, and new classes for different materials can be added, such as Magazine or DVD. These subclasses will override the displayInfo method to display their own unique information.
	•This project is designed to demonstrate and apply the basic concepts of Object-Oriented Programming (OOP), including inheritance and polymorphism.

Conclusion

This project is an example of an Object-Oriented application in C++ that utilizes inheritance and polymorphism. The LibraryItem class provides common properties for books and other materials, while the derived classes display specific information related to each material type. This structure ensures that the code is maintainable and easily extendable.