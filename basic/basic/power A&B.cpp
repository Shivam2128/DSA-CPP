#include <iostream>
using namespace std;

int main() {
  //  power of a and b
  int a;
  int b;
  cin>> a>> b;
  int ans=1;
  for(int i=1; i<=b;i++){
    ans=ans*a;
  }
  cout<<"The answer is :"<< ans << endl;
}


12
5
  The answer is :248832
