#include "include/BaseOperations.h"
#include "include/EnterSystem.h"
#include "include/User.h"

#include <iostream>
#include <string>

using namespace BaseOps;

void test() {
  EnterSystem::Reg();
}


void Greeting() {
  Print("Введите номер действия:\n");
  Print("1. Посмотреть список книг");
  Print("2. Посмотреть список взятых книг"); 
  Print("3. Посмотреть штрафы за просрочку");
  Print("4. Выйти");
}

void Program() {
  Print("┌──────────────────────────────┐\n", GREEN);
  Print("│Приветствуем вас в библиотеке!│\n", GREEN);
  Print("└──────────────────────────────┘\n", GREEN);
  test();
  // EnterSystem::Auth();
}

int main() {
  Program();
  return 0;
}