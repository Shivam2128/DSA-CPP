#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter the value of a: " <<endl;
  cin>>a;
  cout << "Enter the value of b :" <<endl;
  cin >> b;
   char op;
   cout <<"Enter the operation you want to perform :"<<endl;
  //  cout << "answer is :" >> op << endl;
   cin >> op;
    switch (op) {

    case '+': cout << (a+b) << endl;
    break;

    case '-': cout << (a-b) << endl;
    break;
    case '*': cout << (a*b) << endl;
    break;
    case '/' : cout << (a/b) << endl;
    break;
    case '%': cout << (a%b) << endl;
    break;

    }

    return 0;
}