#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <fstream>


using std::vector;
using std::string;
using std::cout;
using std::pair;
using std::cin;
using std::getline;




void setupUsername() {
  cout << "What do you want your username to be? " << '\n';
}

void setupPassword() {
  cout << "What do you want your password to be? " << '\n';
}




bool checkUsername(string actualUsername, string userInputtedUsername) {
  if (actualUsername == userInputtedUsername) {
    cout << "That is the correct username" << '\n';
    return true;
  }
  else {
    cout << "That username does not match" << '\n';
    return false;
  }
}

bool checkPassword(string actualpassword, string userInputtedPassword) {
  if (actualpassword == userInputtedPassword) {
    cout << "That is the correct password" << '\n';
    return true;
  }
  else {
    cout << "That password does not match" << '\n';
    return false;
  }
}

int main() {
  bool shouldContinue = true;

  string username;
  string password;

  FILE* usernameFile1 = fopen("username.txt", "r");
  char buffer1[255];

  if (usernameFile1 != NULL) {
    while (fgets(buffer1, 255, usernameFile1) != NULL) {}
    fclose(usernameFile1);

    string tempUsername;

    cout << "What is your username? ";
    cin >> tempUsername;

    if (!checkUsername(buffer1, tempUsername)) {
      return 0;
    }

  }


  FILE* passwordFile1 = fopen("password.txt", "r");
  char buffer2[255];

  if (passwordFile1 != NULL) {
    while (fgets(buffer2, 255, passwordFile1)) {

    }

    fclose(passwordFile1);

    string tempPassword;

    cout << "What is your password? ";
    cin >> tempPassword;

    if (!checkPassword(buffer2, tempPassword)) {
      return 0;
    }

    shouldContinue = false;
  }

  if (shouldContinue) {
    setupUsername();
    cin >> username;
    FILE* usernameFile2 = fopen("username.txt", "w");
    fprintf(usernameFile2, username.data());
    fclose(usernameFile2);

    setupPassword();
    cin >> password;
    FILE* passwordFile2 = fopen("password.txt", "w");
    fprintf(passwordFile2, password.data());
    fclose(passwordFile2);
  }

  return 0;
}
