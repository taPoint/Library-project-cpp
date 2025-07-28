#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Book.h"

class User {
 private:
  std::string email_;
  std::string password_;
  std::vector<Book> list_of_books_;
 public:
  static void ShowControlMenu();
};

#endif