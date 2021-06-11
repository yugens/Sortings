//Best , worst and average time complexity of selection sort is o(n^2)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for(int j = i + 1 ; j < n ; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
    for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";
    return 0;
}
