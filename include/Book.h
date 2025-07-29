// Класс библиотеки и класс для книги
#ifndef BOOK_H
#define BOOK_H

#include "User.h"

#include <vector>
#include <string>

struct Book {
  std::string title_;
  std::string author_;
  std::string text_;
  User* taken_by_;
  int date_of_take_;
  int usage_time_;
};

class Library {
 private:
  static std::vector<Book> book_db_;
 public:
  static void ViewListOfBook();
  static void GiveBookToUser(Book book);
  static void AcceptBookFromUser(Book book);

}

#endif