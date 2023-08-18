
📋 **Table Of Contents:**

- [🌇 Lesson 4: Hello World; Main Function; Syntax EssentialsLesson 3: Hello World, Main Function, Syntax Essentials of C++.md](#-lesson-4-hello-world-main-function-syntax-essentialslesson-3-hello-world-main-function-syntax-essentials-of-cmd)
    - [📖 Brief:](#-brief)
- [📖 **Covered Topics:**](#-covered-topics)
  - [Hello World](#hello-world)
    - [Analysis:](#analysis)
  - [Fundamental Types (Brief)](#fundamental-types-brief)
  - [Comments](#comments)

# 🌇 Lesson 4: Hello World; Main Function; Syntax EssentialsLesson 3: Hello World, Main Function, Syntax Essentials of C++.md

*Author of tutorial: Dawid Jakubowski (Codedemens The Compiler)*

*This tutorial is written in markdown, uses emoji, and is under MIT License.*

---

 - ⬅️ Previous: [🌇 *Lesson 3:* **Compilation Process**](./Lesson%203:%20Compilation%20Process.md)
 - ➡️ Next: [🌇 *Lesson 5:* ***Fundamental-Type Data & STL Strings & Input-Output***](./Lesson%205:%20Fundamental-Type%20Data%20&%20STL%20Strings%20&%20Input-Output.md)

---

### 📖 Brief: 

In this episode, we'll learn how to build our first program - YHello World. We're also going to learn some basics of C++ Syntax, and Main Function characteristics. We're also going to share some thoughts on how std::coiut (console out) works, as well as c-string style literals, and single & multiline comments.

# 📖 **Covered Topics:**
- 📄 First application ("Hello World")
- 📄 What is Main Function & its characteristics
- 📄 C++ Syntax Essentials, such as:
  - 📄 Fundamental Types' Variables
  - 📄 Fundamental-Type Literals
  - 📄 std::cout (Console input-output); << operator of std::cout
  - 📄 Singleline & Multiline Comments
- 📄 How to compile hello world using GNU GCC, 
  - `-o` flag (output)

---

🗂 *Provided* **Course Resources:**
- 📁 main function (cppreference)
- 📁 std::cout & related (cppreference)
- 📁 Fundamental-Types (cppreference)
- 📁 GNU GCC Compiler
- 📁 Cheatsheets on Compilation Process

---

## Hello World

Let's create a file - hello_world.cpp. Use your favorite Code Editor (IDE) for that purpose, and open that file. Now, copy and paste this example:

📄 [Examples/Lesson4/hello_world.cpp](Examples/Lesson4/hello_world.cpp) (📒 Source File)
```cpp

#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;

  return 0;
}
```

This program will output "Hello World" to the command prompt. To use it, we have to use a compiler and pass this source file to it to build the application. We're going to use ***GNU GCC***. Open Terminal, go to the folder containing the example (hello_world.cpp), and run this command:

```bash
g++ hello_world.cpp -o hello_world
```

_

```g++``` is the name of the compiler (GNU GCC - G++ *Compiler for C++*)

```hello_world.`cpp` is the name of the source file

```-o ``` is GNU GCC flag, after which you type in name of the application - ```hello_world```

_

Now, let's run our program.:

```bash
hello_world
```

The result:

```bash
Hello World!
```

 > 💡 *On linux, applications have no extensions, that's why you'll see Lesson3Hello, not Lesson3Hello.exe. The latter has the .exe extension which **is characteristic of Windows Executable** *

 > 💡 In order to compile this application on Windows using g++, you can use MinGW which provides ported version of GNU GCC for this OS.

### Analysis:

 > 💡 *Lines that start with // are comments, they are ignored by the compiler. [More about comments in this tutorial](#comments)


📄 [Examples/Lesson4/hello_world.cpp](Examples/Lesson4/hello_world_Analysis.cpp) (📒 Source File)
```cpp

#include <iostream> // (1)

// (1) This part includes <iostream> header, which in turns allows this source file (hello_world_Analysis.cpp) to use the std::cout object.

int main() { // (2)
  std::cout << "Hello World!" << std::endl; // (3)

  return 0; // (4)
} // (5)


// (2) This is the declaration and definition of main function. It has its return value (int), label (must be - main), and brackets in which there is no arguments provided. The body (definition) starts with {, and ends with the } (see. (5))

// (3) Output of the "Hello World!", using std::cout object, arguments "Hello World!", and std::endl (end line marker) provided by << operator, overrided for std::cout object. Instruction must be ended with the semicolon (;)

// (4) return 0; returns the no error code for the main function. Return is required for each function; including main function. The exception to this rule is a function with a 'void' return value (no return value)

// (5) Function Body End.

```

 > 📋 **(1)** - ```#include <iostream>``` Includes elements of iostream - in order to use std::cout you have to include the definition of it. In other words: 
 > 
 > 🛑 Don't use std::cout, std::cin, and other iostream objects, if you are not including their definitions, that come from <iostream> header.
 >
 > 📋 **(2)** - ```int main() {``` is the head, and beginning of the main function body. 
 >
 > Main function is required to build any application in C++. It is basically the start of the application. For now, remember just two things: 
 > 
 > 1. You need to have main function in your application, otherwise 🛑 you'll receive linking error
 > 2. Simpler version of main function requires you definition header - `int main()`, and body brackets - `{`, `}`.
 > 
 > 📋 **(3)** ```std::cout << "Hello World!" << std::endl;``` is the instruction that runs the console output - it prints "Hello World" in console. 
 >
 > ```cpp 
 >      std::cout
 >   ``` 
 > is the symbol of **STL Standard Library**; object that you can use to output data. In this example, it is provided as **literal** (_).
 > 
 > ```cpp
 >    std::cout <<
 > ``` 
 > ```<<``` is operator that provides the std::cout appropriate data. Before the << operator you use std::cout, and after this operator you provide data. Provided data can be literal (this example), data (i.e. local variables, references), or even expressions (i.e. ```2 + 5 * pi```; given pi is defined) 
 >
 > `"Hello World!"` is String Literal. 
 >
 > ```cpp
 >    << std::endl;  
 > ```
 > is providing additional data for std::cout (again, after << operator), which is std::endl - special, predefined by STL Library object for ending the text line (endline).
 >
 > 🛑 Instruction must have semicolon, otherwise it will return compilation error.
 >
 > 📋 **(4)** 
 > ```cpp
 > return 0; 
 > ```
 > Returns default value for main function. 0 represents success error-code (in other words, application ran without any complications). You can return any integer you want. 
 >
 > 📋 **(5)** The body starts with { bracket, and ends with } bracket 

## Fundamental Types (Brief)

In the source code there are various ways you can pass the data through the std::cout. One of the simplest is through **fundamental-type variables**. In this example, we are going to create **local** variables with the four commonly used fundamental types:

 - Integers
   - Represent Even Numbers,
   - `int` is a commonly used keyword to specify the integer type.
 - Booleans
   - Represent Boolean (Logical) values - `true`, and `false`
   - `bool` is a keyword to declare a boolean type.
 - Characters
   - Represent Characters;
   - `char` is a commonly used keyword to declare ASCII Code character.
 - Floating-Points
   - Represent Floating-Point Precision Numbers
   - `float` is a commonly used keyword to declare floating point number.

 > 💡 *(1) Signed for integer means: Integer can have positive, negative (under 0), and 0 values.*

📄 [Examples/Lesson4/fundamental_types.cpp](Examples/Lesson4/fundamental_types.cpp) (📒 Source File)
```cpp
#include <iostream>

int main() {
  int favorite_number = 7;

  std::cout << "My favorite number: " << favorite_number << std::endl;

  bool do_i_like_tea = true;

  std::cout << std::boolalpha;

  std::cout << "Do I like tea? " << do_i_like_tea << std::endl;

  char first_name_letter = 'D';

  std::cout << "First letter of my name: " << first_name_letter << std::endl;

  float one_and_a_half = 1.0f + 0.5f;

  std::cout << "1 + 0.5f = " << one_and_a_half << std::endl;

  return 0;
}
```



## Comments

***There are two types of comments:***

 - **Singleline comments**. They start with **//**. Everything in the line after // is a comment.
 - **Multiline comments**. They start with /* and end with */ bracket.

Comments in C++ are ignored during compilation process, and therefore they are not treated as a syntax in C++. You can use comments to create labels for yourself as you work with the source code, or even disable parts of source code.

📄 [Examples/Lesson4/comments.cpp](Examples/Lesson4/comments.cpp) (📒 Source File)
```cpp

// This is a singleline comment

/* This 
is a multiline comment */

#include <iostream>

int main() {
    //Code Disable:
    //std::cout << "Hello World!" << std::endl;

    //Code Disable 2 (using multiline comment)
    // "My name is ..." << is commented out; therefore,
    // It is not passed through to std::cout object.

    std::cout << "Hello World!" << /* " My name is ..." << */ std::endl;

    return 0;
}
```

 > 🧭 *Comments can also be used to document (create reference for) source code, mark important information about application (source code), write about technical details, create TODO Tasks, and disable source code parts.*

 > 💡 *Comments are used in Doxygen to create dynamic documentation.*

