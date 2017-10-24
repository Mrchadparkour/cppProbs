#include <iostream>
#include <locale>
#include <string>

using namespace std;

string reverse(string str) {
  int len = str.length() - 1;
  string cpy = str;
  for (int i = 0; i <= len; i++) {
    str[len - i] = cpy[i];
  }
  return str;
}

string noSpaces(string str) {
  locale loc;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      str.erase(i, 1);
    }
    else {
      str[i] = tolower(str[i], loc);
    }
  }
  return str;
}

int main()
{
  string str;
  cout << "Please give a string to check if its a palindrome: ";
  getline(cin, str);

  str = noSpaces(str);
  string cpy = str;
  str = reverse(str);

  if (str == cpy) {
    cout << "The string is a palindrome.";
  } else {
    cout << "The string is not a palindrome.";
  }
  cout << endl;
}
