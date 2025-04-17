# C++ as a Superset of C
by Ahmad Salehi

**C++** is an extension of the C programming language, meaning it includes all of C's features while adding new capabilities, such as Object-Oriented Programming (OOP), templates, and exception handling.

A programming language is a structured way for humans (programmers) to communicate instructions to a computer. It consists of a set of rules, syntax, and semantics that allow programmers to write code that the computer can execute.

**Syntax** refers to the set of rules that define how programs in a language must be written. It includes keywords, symbols, punctuation, and structure that a compiler understands.

**Core library** is an essential component of C++ that form the base of the language, such as fundamental data types, operators, and control structures. In addition, **standard Library** is a collection of pre-written functions and classes, such as input/output (I/O), containers (vectors, lists), algorithms (sorting, searching), and utilities.

**Object-Oriented Programming (OOP)** is a programming paradigm based on the concept of "objects," which are instances of classes. It provides features like:
  - Encapsulation: Hiding implementation details within a class.
  - Inheritance: Creating new classes from existing ones.
  - Polymorphism: Allowing functions and methods to operate differently based on the object.

# C++ Environment:
**Dev-C++** is an Integrated Development Environment (IDE) for writing, compiling, and running C++ programs. It provides tools such as a text editor, compiler (usually MinGW), and debugger.

IDE typically includes:
  - A code editor (for writing code).
  - A compiler (to convert code into an executable).
  - A debugger (to identify and fix errors).
Popular C++ IDEs are Visual Studio, NetBeans, Eclipse, CodeLite and Clion.

![image](https://github.com/user-attachments/assets/1b52fc3c-c349-4d4d-a7cb-79f259af90fc)

Figure 1: Dev-C++ environment

You can download Dev-C++ by clicking on the following link:
https://sourceforge.net/projects/orwelldevcpp/

A highly developed C++ environment is **CLion** that is a special cross-platform IDE for C and C++. It has user-friendly environment and powerful features, especially when working on large or complex projects. It requires license; however, students can get free access to it.

![image](https://github.com/user-attachments/assets/26cf2db4-6330-4f92-aa14-947866518a38)

Figure 2: CLion environment

By clicking on this link, you can download CLion:
https://www.jetbrains.com/clion/

# Basic elements of C++
A **compile error** occurs when the C++ compiler finds incorrect syntax or missing elements in the code. Common causes include:
  - Missing semicolons (;).
  - Using undeclared variables.
  - Mismatched parentheses or brackets.
  - Incorrect function calls.

**Compilers** in C++ are a tool that converts human-readable code (C++) into machine code (executable .exe files). A compiler translates source code (.cpp) into an executable file (.exe on Windows). Example: g++ myprogram.cpp -o myprogram.exe
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

**Debugging** is the process of finding and fixing errors (bugs) in your C++ code. Debugging helps you identify logical errors, incorrect values, and crashes in your program.

**Building** a program is the process of converting C++ source code into an executable file (.exe on Windows, ./a.out on Linux/macOS).
  1.	Preprocessing: Handles #include, #define, and other preprocessor directives.
  2.	Compilation: Translates .cpp files into machine code (.o or .obj).
  3.	Linking: Combines compiled files with libraries to produce an executable (.exe, a.out).


A directory from a C++ project contains CLion-specific configuration files (Figure 3).

  - **cmake-build-debug** folder contains compiled binaries, object files, and other temporary build files.

  - **CMakelists** is an exe file that defines how the project should be built, including source files, dependencies, and compiler settings.

  - **main** file is the compiled executable of the program, generated from the source code. It can be run directly on the operating system.

![image](https://github.com/user-attachments/assets/2f56ce8a-347e-4485-806f-7981c5dc2172)

Figure 3: A directory from a C++ project

What is an **FTDI Converter**? An FTDI (Future Technology Devices International) USB to Serial Converter is a device that allows communication between a computer's USB port and a serial (UART) interface. It is commonly used for programming microcontrollers, debugging, and connecting serial devices.

![image](https://github.com/user-attachments/assets/afccda00-d1a4-4588-afdd-c624fe9074cc)

Figure: a FTDI adapter with Arduino board
