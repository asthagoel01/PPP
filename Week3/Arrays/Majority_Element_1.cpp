#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	if(n==1)
        return arr[0];
    else{
    sort(arr,arr+n);
    int s=n-1,e=n-1;
    while(s!=0){
        
        if(arr[s]==arr[s-1]){
                 s--;
                 if(s==0)
                     if((e-s+1)>(n/2))
                        return arr[s];
        }
        else if((e-s+1)>(n/2))
                return arr[s];
       else{
            e=s-1;
            s=s-1;
            }
    }
        return -1;
    }
}
