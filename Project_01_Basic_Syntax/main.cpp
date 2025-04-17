#include <iostream>
int main() {
    int var3;
    std::cout << "Please enter a number: ";
    std::cin >> var3;
    std::cout << "Result: " << var3 + 2 << std::endl;
    return 0;
}

/*
Project_01_Basic_Syntax is the first and simplest training project.

- #include <iostream> is a preprocessor directive that includes the iostream library.
  It provides functionalities for input and output (e.g., cin, cout).

- main() function is the entry point of a C++ program.

- int var3 declares a variable named var3 of type int (short for integer).

- A Semicolon (;) marks the end of a statement in C++.
  Every executable statement must end with a semicolon.

- cout (Console Output) is used to print text to the screen.
  Example: std::cout<<"Hello, World!";

- cin (character input) is used to take input from the user via the keyboard.

- endl is used to insert a newline in the output and flush the output buffer.
  Example: std::cout << "Hello" << std::endl;

- return 0; tells the operating system that the program has successfully finished running.
*/