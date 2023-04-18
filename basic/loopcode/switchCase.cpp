#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout<< "Enter the number of a  :"<< endl;
  cin>>a;
  cout<< "Enter the number of  b :"<< endl;
  cin>>b;
  char op;
  cout<< "Enter the operation you want to perform :"<< endl;
  cin>>op;
  switch (op){
    case '+': cout<<(a+b)<<endl;
    break;
    case '-': cout<<(a-b)<<endl;
    break;
    case '*': cout<<(a*b)<<endl;
    break;
    case '/': cout<<(a/b)<< endl;
    break;
    case '%': cout<<(a%b)<<endl;
    break;
    default : cout<<"please enter the vaild operation"<< endl;
  }



}
