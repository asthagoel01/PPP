#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> pi;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        v[arr[i]-1]+=1;// Write your code here 
    }
    for(int i=0;i<n;i++){
        if(v[i]==0)
             pi.first=i+1;
       else if(v[i]==2)
           pi.second=i+1;
    }
    return pi;
}
