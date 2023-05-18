//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int facDigits(int n){
        //code here
        if (n < 0)
    return 0;
    
    // base case
    if (n <= 1)
    return 1;
    
 
    double digits = 0;
    for (int i=2; i<=n; i++)
    digits += log10(i);
    
    return floor(digits) + 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.facDigits(n)<<"\n";
       
        
    }
    return 0;
}
// } Driver Code Ends
