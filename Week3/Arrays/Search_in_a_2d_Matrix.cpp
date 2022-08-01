#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int index=-1;
    for(int i=0;i<m;i++){
        if(mat[i][n-1]==target)
            return true;
        else if(mat[i][n-1]>target){
             index=i;
            break;// Write your code here.
        }
    }
    
    if(index==-1) //no greater element is found...
        return false;
    for(int i=0;i<n;i++){
        if(target==mat[index][i])
            return true; //element is found...
    }
    return false; //element is not found...
}
