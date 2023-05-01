int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;
    for(int i=0 ; i< size ; i++){
        ans = ans^arr[i];
    }
    return ans;

}


Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
