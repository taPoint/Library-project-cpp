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