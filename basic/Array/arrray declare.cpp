#include <iostream>
using namespace std;

void printArray(){

}

int main() {

  //declare

  int number[15];

// accessing array
  cout<< "value at 20 index : " << number [20] << endl;

  int sec[4] = {1, 2,10,5};

  cout << " value at 2 index: " << sec[2] << endl;

  cout<< endl << "Everything is fine" << endl << endl;
  

  int sum[15] = {2,14};

  //print the array//---------------------
  int n=15;

  cout<< " printing array " << endl;
  for (int i=0; i<n ; i++ ){
    cout << sum[i] << " "; 
  }

  int gigi[10] = {1}; // declare array

  int g=10;
  cout<<endl<<  "printing array"<< endl;
//print array
  for(int i =0; i<g; i++){
    cout<< gigi[i] << " ";

  }
  
  return 0;
}
