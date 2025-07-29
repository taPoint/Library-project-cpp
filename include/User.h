// Класс аккаунта пользователя

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
  std::string GetPassword() { return password_; }
  std::string GetEmail() { return email_; }
  void setEmail(const std::string email) { email_ = email; }
  void setPassword(const std::string password) { password_ = password; }

  static void ShowControlMenu();
};

#endif