#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
int start=arr[0];
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i])
            return arr[i];
    }
}
