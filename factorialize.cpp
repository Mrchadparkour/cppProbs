#include <iostream>

using namespace std;

int main()
{
  int num;
  int prod = 1;
  cout << "Please give a number to factorialize: ";
  cin >> num;
  cout << endl;

  for (int i = num; i > 0; i--) {
    cout << i;
    if (i != 1) {
      cout << " * ";
    }
    prod *= i;
  }

  cout << " = " << prod << endl;
}
