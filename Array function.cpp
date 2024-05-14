#include <iostream>
using namespace std;

void printArray(int arr[], int size){

  cout << "printing array" << endl;
  //print the array
  for(int i=0; i<size ; i++){
    cout << arr[i] << " ";
  }

  cout<<endl<< "printing done " << endl;

}

int main() {

  //declare

  // int number[15];

  // accessing array
  // cout<< "value at 20 index : " << number [20] << endl;

  // int sec[4] = {1, 2,10,5};

  // cout << " value at 2 index: " << sec[2] << endl;

  
  

  int sum[15] = {2,14};

  //print the array//---------------------
  int n=15;
  cin>>n;
  // printArray (sum,15);

  int sumSize = sizeof(sum)/sizeof(int);
  cout<< "Size of sum is :" << sumSize << endl;

  int gigi[10] = {1}; // declare array

  int g=10;
  cin>>g;
  // printArray(gigi,10);

  int gigiSize = sizeof (gigi)/sizeof(int);

  cout<<" Size of gigi is : " << gigiSize << endl;

  char ch[5] ={'w','r','t', 'u', 'i'  };

  cout << ch[3]<< endl;

  for (int i;i<5 ;i++){
    cout << ch[i] << " ";
  }
  cout << " print Done "  << endl;


cout<< endl << "Everything is fine" << endl << endl;
  
  
  return 0;
}
