#include <iostream>
using namespace std;

int main() {
  short int input;
  cout << "Please enter a number" << endl;
  cin >> input;
  input++;
  if (input > 0) {
    cout << "Not Yet!" << endl;
  } else {
    cout << "Success!!!" << endl;
  }
}

