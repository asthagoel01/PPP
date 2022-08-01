#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> P;
   int i=0,j=arr.size()-1; sort(arr.begin(),arr.end());
    while(i<j){
    if(arr[i]+arr[j]>s)
            j--;
    else if(arr[i]+arr[j]<s)
            i++;
    else{
          vector<int> q;
          q.push_back(arr[i]);
          q.push_back(arr[j]);
          P.push_back(q);
          q.clear();
  int c1=1,c2=1;  
while(i<j &&(arr[i]==arr[i+1] || arr[j]==arr[j-1]))   { 
   if(arr[i]==arr[i+1] && arr[j]==arr[j-1]){
       if(i+1==j+1){
           c1++;}
       else{
       c1++;
       c2++;
           }
       i++;
       j--;
   }
  else if(arr[i]==arr[i+1]){
      c1++;
      i++;
      }
   else if (arr[j]==arr[j-1]){
    c2++;
    j--;
    } 
}                           
   int l;
        if(c1!=0 && c2==0)
            c2=1;
        if(c2!=0 && c1==0)
            c1=1;
        
      
        if(i==j && arr[i-1]==arr[j+1] && arr[i]==arr[i-1])
            l=((c1+c2-2)*(c1+c2-1))/2;
        else
            l=c1*c2;
            
    for(int c=1;c<l;c++){
        q.push_back(arr[i]);
        q.push_back(arr[j]);
        P.push_back(q);
        q.clear();
    }
        i++;
        j--;
    }
    }
    return P;          
}
