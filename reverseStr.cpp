#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
  string fullStr = "";
  if (argc < 2) {
    cout << "Usage: "<< argv[0] << " <string>\n";
    return 1;
  } else if ( argc > 2 ) {
    for (int i = 1; i < argc; i++ ) {
      string str(argv[i]);
      fullStr = fullStr + str + " ";
    }
  }

  int len = fullStr.length() - 1;
  string cpy = fullStr;
  for (int i = 0; i <= len; i++) {
    fullStr[len - i] = cpy[i];
  }

  cout << fullStr << endl;
}
