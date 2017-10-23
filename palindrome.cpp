#include <iostream>
#include <cstring>
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

int main()
{
  string str;
  cout << "Please give a string to check if its a palindrome: ";
  cin >> str;
  cin.ignore();

  string cpy = str;
  str = reverse(str);

  if (str == cpy) {
    cout << "The string is a palindrome.";
  } else {
    cout << "The string is not a palindrome.";
  }
  cout << endl;
}
