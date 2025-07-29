#include "../include/EnterSystem.h"
#include "../include/BaseOperations.h"
#include "../include/Book.h"
#include "../include/User.h"

using namespace BaseOps;

std::vector<User> EnterSystem::users_db_;

User* EnterSystem::FindEmail(const std::string email) {
  for (auto& user : users_db_) {
    if (user.GetEmail() == email) {
        return &user;
    }
  }
  return nullptr;
}

bool EnterSystem::CheckPassword(User* user, const std::string password) {
  if (user->GetPassword() == password) {
    return true;
  }
  return false;
}

void EnterSystem::Login() {
    std::string email;
    std::string password;

    Print("▷ Введите email: ");
    Input(email);

    if (!EnterSystem::FindEmail(email)) {
        Print("Данный Email не найден, проверьте правильность ввода или зарегистрируйтесь.\n", RED);
        Auth();
        return;
    }
    User* user = EnterSystem::FindEmail(email);

    Print("▷ Введите пароль:\n");
    Input(password);

    bool isCorrectPassword = false;
    for (int attempt = 0; attempt < 3; attempt++) {

        if (!EnterSystem::CheckPassword(user, password)) {

            Print("⚠ Неверный пароль, попробуйте ещё раз:");
            Input(password);

        } else {
            isCorrectPassword = true;
            break;
        }

    }
    if (isCorrectPassword) {
        Print("✓ Успешная авторизация!\n");
        User::ShowControlMenu();
        return;
    }
    Print("⚠ Пожалуйста, попробуйте позже\n");    
}

void EnterSystem::Reg() {
    std::string email;
    std::string password;
    User user;

    Print("▷ Введите email: ");
    Input(email);

    Print("▷ Введите пароль: ");
    Input(password);

    user.setEmail(email);
    user.setPassword(password);
    users_db_.push_back(user);
    if (EnterSystem::FindEmail(email)) {
        Print("✓ Успешная регистрация!");
    }
}

void EnterSystem::Auth() {
    Print("► 1. Войти\n");
    Print("► 2. Зарегистрироваться\n");
    Print("► 3. Завершить программу\n\n");
    Print("▷ Введите номер действия: ");

    int answer = 0;
    Input(answer);

    if (answer == 1) {
        EnterSystem::Login();
    } else {
        EnterSystem::Reg();
    }
}
