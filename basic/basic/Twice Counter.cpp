//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
            unordered_map<string, int>mp; 
           for(int i =0; i < n; i++)
                mp[list[i]]++;
            int counter = 0; 
            for(auto x : mp)
            {
                if(x.second == 2)
                    counter++; 
            }
            return counter; 
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
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
