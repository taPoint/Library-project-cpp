#include "../include/EnterSystem.h"
#include "../include/BaseOperations.h"
#include "../include/Book.h"
#include "../include/User.h"

using namespace BaseOps;

void User::ShowControlMenu() {
    Print("► 1. Посмотреть список книг\n");
    Print("► 2. Посмотреть список взятых книг\n"); 
    Print("► 3. Посмотреть штрафы за просрочку\n");
    Print("► 4. Выйти\n\n");
    Print("▷ Введите номер действия:\n");
}

void User::TakeBook(Book book) {
    list_of_books_.push_back(book);
    book.taken_by_ = this;
    book.date_of_take_ = 28072025;
    book.usage_time_ = 6; 
}

void User::ReturnBook(Book book) {
    list_of_books_.erase(book);
    book.taken_by_ = nullptr;
    book.date_of_take_ = 0;
    book.usage_time_ = 0; 
}