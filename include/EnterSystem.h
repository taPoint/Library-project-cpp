#ifndef ENTER_SYSTEM_H
#define ENTER_SYSTEM_H

#include "User.h"
#include <vector>
#include <string>

class EnterSystem {
 private:
  std::vector<User> users_db;
 public:
 void AddUserToDB();
  void EnterUser();
  static User FindEmail(const std::string email);
  static bool CheckPassword(User user, const std::string password);

  static void Login();
  static void Reg();
  static void Auth();
};

#endif