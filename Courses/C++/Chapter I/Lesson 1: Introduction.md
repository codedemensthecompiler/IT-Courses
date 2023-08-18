
📋 **Table Of Contents:**

- [🌇 Lesson 0: Introduction](#-lesson-0-introduction)
    - [📖 Brief:](#-brief)
- [📖 **Covered Topics:**](#-covered-topics)
  - [Introduction to this course \& C++ Programming Language](#introduction-to-this-course--c-programming-language)
    - [My background in C++](#my-background-in-c)
    - [The possibilities of C++](#the-possibilities-of-c)
    - [How can I start my journey?](#how-can-i-start-my-journey)
      - [Source Code Editor (or IDE)](#source-code-editor-or-ide)
      - [C++ Compiler](#c-compiler)
      - [Debugger](#debugger)
      - [Compilation Setup](#compilation-setup)

# 🌇 Lesson 0: Introduction

*Author of tutorial: Dawid Jakubowski (Codedemens The Compiler)*

*This tutorial is written in markdown, uses emoji, and is under MIT License.*

---

### 📖 Brief: 

> 💡 *In this starting lesson you'll be introducted to this course, you'll learn the most essential things - how to use this course, what you'll learn from it, what you can potentialy supplement during studying & practice, and some other tips*
 
# 📖 **Covered Topics:**
 - 📄 What is *programming*, *software development*, *programming language*, *software programmer*
 - 📄 Worthwhile principles when studying & practicing C++ (How to study & code)
 - 📄 Practices you can use to enhance the practice & study.
 - 📄 *The contents of the course* 
 - 📄 *Worthy resources*

---

## Introduction to this course & C++ Programming Language

Hello! My name is Dawid Jakubowski (also known as Codedemens The Compiler) and I'm happy to be here, to walk you through the journey of programming in C++. 

### My background in C++
I have been practicing & studying C++ since I was 16, and I was training it to this day. I've learned many techniques on how to write code in C++ just by myself. I studied independently Software Engineering, Software Development, C++ and C++ STL (Standard Library of C++) several C++ Libraries (I focused on Game Development back then). I also became fluent in writing my own software.

I'm also expanding my understanding of C++ by writing my own software in it. On my Github you'll find many instances of it.

My personal experience with starting to learn C++ and software programming in general (*I started with ActionScript 3 when I was 13*), is that at first, it might feel like a hardship. I remember taking one day of learning just one very small aspect of the language. I've also noticed that over years, the more you learn software programming and languages, the more fluent you'll become in learning new features & concepts. In another words: 

The more you practice programming in general (not a specific language), the more you'll become fluent in various aspects of it, and the quicker you'll learn new things.

---

### The possibilities of C++

C++ is a programming language where you can create various applications, ranging from... very minor application pieces; such as, for instance: console application writing simple 'Hello World' to your black command prompt, to

Operating Systems, AAA Video Games, Scientific Tools...

You can create virtually anything, and C++ is constructed in a way that allows you to create software at various levels, using multiple (selected by devs) technologies to achieve the goal.

C++ is oriented towards High-Level of Abstraction, which gives you the possibility to create open-to-change (expandable) software,

Ability to write in many ways, which is manifested in various in-built paradigms.

It has many library pieces which allow you to extend the functionality of what you're working on.

---

### How can I start my journey? 

Prepare a long-term environment, and prepare yourself. I've prepared specific sections where you can gather information on how to start your journey.

🧭 Prepare **something where you can create notes** (i.e. notepad), and **start by small steps**. **Don't pressure yourself** to **learn everything** but also **don't give up easily**. Just dedicate every day to this goal. It will be hard, but will be worth it.

To use C++ you'll need these:
 - ⚪️ ***Source Code Editor*** or **IDE**, an application where you can write your code
 - ⚪️ ***C++ Compiler***, an application that you will use to compile your C++ software piece.

Alongside the required pieces, I also highly recommend having:
 - ⚪️ ***Debugger*** (such as GDB)
 - ⚪️ ***A framework for compilation process setup*** (such as Make, CMake)

---

#### Source Code Editor (or IDE)
In order to start writing your code, you simply need a notepad. Files that contain C++ source code are stored inside source code files, *that are in the form of simple text files, meaning* that you can open them using numerous text editors. 

It is also a very good idea to use **IDE** (*Integrated Development Environment*) has not only the text editor, but a high amount of tools to help you develop your software pieces. One of the most popular recently became **Visual Studio Code** (known as simply **Visual Code**).

IDE can help you *inspect your code*, create *unit tests*, *run a debugger inside the IDE*, some can effectively *check compilation errors on the run* (without running the compiler implicitly which takes time). Many, including Visual Code allow you to use extensions to extend the possibility within its IDE scope.

 > 💡 *I highly recommend **Visual Code as the IDE of choice.***

---

#### C++ Compiler

C++ Compiler is a special program that is responsible for changing your source files (containing code of C++) to a result, in the form of an application piece (program), or library.

Without C++ Compiler you cannot create your own software in C++, since you cannot run the compilation process that is necessary to create your own software.

 > 💡 *In reality, C++ Compiler has in-built syntax translation rules which resembles the C++ syntax rules defined by ISO. The most covered compiler in that regards is in my estimate **GNU GCC Compiler Set**, which is my most recommended option for this entire course.*

We will briefly discuss the compilation process in Lesson 1, but also in other lessons in this course, in detail.

---

#### Debugger

Debugger allows you to inspect your code during execution time. It can switch from various source code places, for instance - from starting point - main function, to some other function. It can also see the execution of C++ STL, such as when it runs classic std::cout.

 > 💡 *GDB is widely recommended debugger for C++*

 > 💡 *Debugger is optional (you don't need debugger to functionally create an app in C++), but it is highly recommended, as it allows you to inspect the C++ code*


---

#### Compilation Setup

Tools such as CMake allow you to create special scripts which can automate the compilation process. They can run the compiler (*such as GCC*) to build your software from the configuration presets. It is very helpful as it allows you to setup the compilation process, and never worry about lengthy command lines.

 > 💡 *In this course we'll discuss CMake briefly, but I have also created a CMake course specifically.*