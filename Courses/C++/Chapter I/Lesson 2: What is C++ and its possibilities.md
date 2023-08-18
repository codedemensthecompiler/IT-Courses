
📋 **Table Of Contents:**

- [🌇 *Lesson 2:* ***What is C++ and its possibilities***](#-lesson-2-what-is-c-and-its-possibilities)
    - [📖 Brief:](#-brief)
- [📖 **Covered Topics:**](#-covered-topics)
  - [What is C++ exactly?](#what-is-c-exactly)
    - [High-Level Programming](#high-level-programming)
      - [Objective-Oriented Programming](#objective-oriented-programming)
      - [Generic-Oriented Programming](#generic-oriented-programming)

# 🌇 *Lesson 2:* ***What is C++ and its possibilities***

*Author of tutorial: Dawid Jakubowski (Codedemens The Compiler)*

*This tutorial is written in markdown, uses emoji, and is under MIT License.*

---

 - ⬅️ Previous: [🌇 *Lesson 1:* ***Introduction***](Lesson%201:%20Introduction.md)
 - ➡️ Next: [🌇 *Lesson 3:* ***Compilation Process***](Lesson%203:%20Compilation%20Process.md)

---
### 📖 Brief: 

 > 💡 *In this lesson we'll be diving into the depths of C++. What are the possibilities of this language, and briefly how it looks like. We'll also go through the history of programming language and its developments to this day.*

# 📖 **Covered Topics:**
 - 📄 Features of C++ programming language
 - 📄 Examples of C++ usage in professional projects
 - 📄 C++ Standard Library (STL)
 - 📄 Compilation Process & Compilers
 - 📄 Presentation of Objective; and Generic-Oriented Programming

🗂 *Provided* **Course Resources:**
 - 📁 Tools, such as **GNU GCC**, **GDB**, **Visual Code**, **CMake**.
 - 📁 C++ Reference (Documentation)
 - 📁 Where you can seek help with C++ & Programming in general.
 - 📁 Author's other courses, such as ***STL Course***, ***CMake Course***, among others.

---

## What is C++ exactly?

C++ is a high-level, general-purpose programming language that allows you to create various forms of software run directly in the form of machine code. It is a compilable language - it is required to run the source code files through the compiler to get the usable program. (or library) 

C++ is an extension of C programming language, from which the idea of "C With Classes" (the precursor of Objective-Oriented Programming) was implemented. It allows you to create various forms of software and gives you the freedom to customize details, and the abstract.

C++ has various paradigms through which programmers can write code:

 - 🌿 **Objective-Oriented Programming** - Allows to use complex (compound) class-type objects; containing data and behavior in one entity, able to influence each other, as well as other entities, including other class objects.
 - 🌿 **Generic-Oriented Programming** - Gives you the possibility to use special code-generation templates; which generate code when an instance of the template is called. By definition a template you can use any type in the given context, and customize the behavior in accordance to the template choice.
 - 🌿 **Functional Programming** - C++ programs are composed of functions - special entities containing input (variable arguments), output (return value), body (instructions; execution code), and other declaration characteristics, such as label (name of the function), and keywords (i.e. 'inline', 'virtual' [...]). Functions can call other functions; their code inside function body influences the flow of the program.

It has also elements of 🌿 *procedural*, 🌿 *imperative*, and 🌿 *modular* paradigms.

C++ is a very optimized language in that the application may run way faster in comparison to other programming languages. The result of the compilation process is in the form of machine code / assembly, meaning, the client's hardware can run the code without any form of further translation of the original source. 

The Compilation Process gives the programmer the ability to **practically hide the source code contents** due to its translation to its build target architecture assembler (low-level form), as well as **customize the build process** and exclude the dependency on the **interpreter** like it is in the case of interpreted programming languages.

 > 💡 *Compiled Programming Languages are pre-translated before user (client) uses it, Interpreted Programming Languages are translated during execution, meaning, the latter makes the access of the source code at the cost of execution time.*

---

C++ is very well-grounded support in many aspects, and many communities are supportive of others in this regard. Online forums, Github, References, and well-documented tools & libraries are some of the well-known examples.


### High-Level Programming
#### Objective-Oriented Programming

 > 🧭 *C++ allows you to build high-level abstraction software, for instance - you can use Objective-Oriented Programming to develop it. It's syntax allows you to expand on multiple levels; classes are one of the examples of it:*

📄 [Examples/Lesson1_OOP.cpp](Examples/Lesson1_OOP.cpp) (📒 Source File)
```cpp
#include <iostream>

class User {
public:
    User(const std::string& username = "Codedemens The Compiler") : username(username) {}
    virtual ~User() = default;

    inline const std::string& Username() const {
        return username;
    }
private:
    std::string username;
};
User* Codedemens() {
    return new User();
}
User* New(const std::string& username) {
    return new User(username);
}

int main() {
    return 0;
}
```

 > 🧭 *C++ is rich, and not limited to Objective-Oriented Programming, which in nature allows you to specify abstract and detail, and can hold compound types - where you store both behavior (i.e. member-functions), and data (i.e. variables).*

Objective-Oriented Programming Paradigm introduces special entities, named **classes**, which's nature in the development process allows programmers to create multi-layered composites of data and behavior; each, at each level can influence each other. 

 > 💡 In other words - you can have class objects (but not only) inside class objects... Class objects (but not only) influencing other class objects. Variables at various scopes influenced by (but not only) member functions of class objects... *Frankly speaking: Anything your software engineering spirit wants.*

---

#### Generic-Oriented Programming

 > 🧭 *Other ways high-level programming manifests in C++ is through Generic Programming, this example shows the feature of class, function, and member-function template, and fancy template parameter-pack* *(typename ... ARGS)*

📄 [Examples/Lesson1_OOP.cpp](Examples/Lesson1_Generic.cpp) (📒 Source File)
```cpp
#include <string>
#include <list>
#include <iostream>

template <typename T>
class TheBuilderClass {
public:
    TheBuilderClass() {}
    virtual ~TheBuilderClass() {}
    
    template <typename ... ARGS>
    T* New(ARGS&& ... args) {
        return new T(args ...);
    }
};

template <typename T, typename ... ARGS>
T* New(ARGS&& ... args) {
    return new T(args ...);
}
template <typename T, typename Builder, typename ... ARGS>
std::list<T*> Build(unsigned int count, ARGS&& ... args) {
    Builder b;
    std::list<T*> l;
    for (int i = 0; i <= count; ++i) {
        l.emplace_back(b.New(args ...));
    }
    return l;
}
int main() {
    int* allocated_integer = New<int>(5);
    std::list<std::string*> allocated_strings =
        Build<std::string, TheBuilderClass<std::string>, const char*>(5, "String");

    std::cout << *allocated_integer << std::endl;
    std::cout << *(*allocated_strings.begin()) << std::endl;

    return 0;
}
```

 > 🧭 *Generic-Oriented Programming expands C++ Paradigms by introducing templates to various entities. Its application is to create multichoice generation of code for the specific source code entity, such as; but not limited to - Classes. This paradigm allows you to be in full control of software development and engineering process, and C++ is really resourceful when it comes to implementation of various structures.*