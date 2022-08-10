#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    vector<int> count;
    int c=1,i=0,j=1;
    sort(arr.begin(),arr.end());
    while(j<n){
     if(arr[j]-arr[i]==1){
         c++;
         i=j;
         j++;
     }
     else if(arr[j]==arr[i])
         j++;
     else{
         count.push_back(c);
         i=j;
         j++;
         c=1;
     }
    }
    if(j==n)
        if(c==1)
            count.push_back(1);
    else
count.push_back(c);
    
    int max=count[0];
    
for(int i=1;i<count.size();i++){
        if(max<count[i])
            max=count[i];
        
} 
return max;
}
