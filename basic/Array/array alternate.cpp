#include <iostream>
using namespace std;


void printarray (int arr[] , int n){
  for (int i=0;i<n; i++) {
    cout << arr[i] << " ";

  }cout << endl;
}

void swapalternate (int arr[] , int size) {
  for (int i=0 ; i< size ; i+=2){
    swap (arr[i] , arr[i+1]);
  }
}

int main() {
  int even[4] = {1,4,-9,7};
  int odd[3] ={1,7,34};

  swapalternate(even ,4 );
  printarray(even , 4);

  swapalternate 
  (odd , 3);
  printarray(odd , 3);


}
