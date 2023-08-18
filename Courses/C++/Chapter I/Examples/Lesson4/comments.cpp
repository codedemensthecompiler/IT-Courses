
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