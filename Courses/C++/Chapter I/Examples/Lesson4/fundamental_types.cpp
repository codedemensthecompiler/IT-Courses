
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