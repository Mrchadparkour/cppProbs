#include <iostream>
#include <string>

using namespace std;

struct word {
  int length;
  string word;
};

int main()
{
  string str;
  cout << "Please give a sentence to find the longest string: ";
  getline(cin, str);

  string split[20];
  int counter = 0;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      counter++;
    } else {
      split[counter] += str[i];
    }
  }

  word big;
  big.length = 0;

  for (int i = 0; i <= counter; i++) {
    if (split[i].length() > big.length) {
      big.length = split[i].length();
      big.word = split[i];
    }
  }

  cout << "The longest word is "<< big.word << endl;

}
