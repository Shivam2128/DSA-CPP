//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int num =1;
      
      // Outer loop for the number of rows.
      for(int i=1;i<=n;i++){
          
          // Inner loop will loop for i times and
          // print numbers increasing by 1 each time.
          for(int j=1;j<=i;j++){
              cout<<num<<" ";
              num =num+1;
           }
           cout<<endl;
          
        }
    }
};
//pattren
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
 

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
