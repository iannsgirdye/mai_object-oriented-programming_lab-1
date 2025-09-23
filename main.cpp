#include "function.h"
#include <iostream>


int main() {
  std::string comment;
  std::getline(std::cin, comment);

  std::cout << modifyComment(comment) << std::endl;

  return 0;
}
