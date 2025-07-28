#include "../include/BaseOperations.h"
#include <iostream>

void BaseOps::Print(const std::string text) {
    std::cout << text;
}

void BaseOps::Print(const std::string text, const std::string color) {
  std::cout << color << text << RESET;
}
