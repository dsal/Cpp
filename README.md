# C++ as a Superset of C**
by Ahmad Salehi

C++ is an extension of the C programming language, meaning it includes all of C's features while adding new capabilities, such as Object-Oriented Programming (OOP), templates, and exception handling.

A programming language is a structured way for humans (programmers) to communicate instructions to a computer. It consists of a set of rules, syntax, and semantics that allow programmers to write code that the computer can execute.

# Syntax
Syntax refers to the set of rules that define how programs in a language must be written. It includes keywords, symbols, punctuation, and structure that a compiler understands.

# Core & Standard Library
Core library is an essential component of C++ that form the base of the language, such as fundamental data types, operators, and control structures. In addition, standard Library is a collection of pre-written functions and classes, such as input/output (I/O), containers (vectors, lists), algorithms (sorting, searching), and utilities.

# Object-Oriented Programming (OOP)
OOP is a programming paradigm based on the concept of "objects," which are instances of classes. It provides features like:
  - Encapsulation: Hiding implementation details within a class.
  - Inheritance: Creating new classes from existing ones.
  - Polymorphism: Allowing functions and methods to operate differently based on the object.

# Environment: Dev-C++
Dev-C++ is an Integrated Development Environment (IDE) for writing, compiling, and running C++ programs. It provides tools such as a text editor, compiler (usually MinGW), and debugger.

![image](https://github.com/user-attachments/assets/1b52fc3c-c349-4d4d-a7cb-79f259af90fc)

# Basic code elements of C++
  - #include <iostream>
    This is a preprocessor directive that includes the iostream library, which provide functionalities for input and output (e.g., cin, cout).
  - Comment: /* */ and //
    /*...*/ is used for multi-line comments.
    // is used for single-line comments.
  - Cout
    cout (Console Output) is used to print text to the screen. Example: std::cout<<"Hello, World!";
  - Semicolon (;)
    A semicolon marks the end of a statement in C++. Every executable statement must end with a semicolon.
  - endl
    endl is used to insert a newline in the output and flush the output buffer. Example:
    std::cout << "Hello" << std::endl;
    std::cout << "World!";

# Compile error
A compile error occurs when the C++ compiler finds incorrect syntax or missing elements in the code. Common causes include:
  - Missing semicolons (;).
  - Using undeclared variables.
  - Mismatched parentheses or brackets.
  - Incorrect function calls.

# IDE (Integrated Development Environment)
An IDE is a software application that provides a complete environment for writing, compiling, debugging, and running code. It typically includes:
  - A code editor (for writing code).
  - A compiler (to convert code into an executable).
  - A debugger (to identify and fix errors).
Popular C++ IDEs are Visual Studio, NetBeans, Eclipse, CodeLite and Clion.

# Compilers in C++
A compiler is a tool that converts human-readable code (C++) into machine code (executable .exe files). A compiler translates source code (.cpp) into an executable file (.exe on Windows). Example: g++ myprogram.cpp -o myprogram.exe
  - GCC (GNU Compiler Collection)
    A popular open-source compiler that supports multiple languages (C, C++, Fortran, etc.).
    Default compiler on Linux and macOS.
    Can be installed on Windows using MinGW or Cygwin.
  - G++ (GNU C++ Compiler)
    The C++ compiler from the GCC collection.
    Used to compile C++ programs specifically (while gcc is for C).
  - Visual C++ (MSVC)
    A compiler from Microsoft that comes with Visual Studio.
    Optimized for Windows development.
    Can be used from the command line via cl.exe.
  - GNU Project
    A free software movement that created GCC, G++, and other open-source tools.
    Provides compilers and libraries for programming in different languages.
  - Cpp.sh (Online C++ Compiler)
    A web-based compiler that allows users to write and run C++ code without installing anything.
    Uses G++ as the backend compiler.
    Good for quick testing and debugging.

# Debug (Debugging)
Debugging is the process of finding and fixing errors (bugs) in your C++ code. Debugging helps you identify logical errors, incorrect values, and crashes in your program.

# Build
Building a program is the process of converting C++ source code into an executable file (.exe on Windows, ./a.out on Linux/macOS).
  1.	Preprocessing: Handles #include, #define, and other preprocessor directives.
  2.	Compilation: Translates .cpp files into machine code (.o or .obj).
  3.	Linking: Combines compiled files with libraries to produce an executable (.exe, a.out).

# What is an FTDI Converter?
An FTDI (Future Technology Devices International) USB to Serial Converter is a device that allows communication between a computer's USB port and a serial (UART) interface. It is commonly used for programming microcontrollers, debugging, and connecting serial devices.

![image](https://github.com/user-attachments/assets/afccda00-d1a4-4588-afdd-c624fe9074cc)
