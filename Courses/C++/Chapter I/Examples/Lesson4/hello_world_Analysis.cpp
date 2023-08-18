
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
