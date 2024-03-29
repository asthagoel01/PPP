
string solve(string s,int left,int right)
{
    int n=s.length();
    while(left>=0 and right<n)
    {
        if(s[left]!=s[right])
        {
            break;
        }
        left--;
        right++;
    }
    return s.substr(left+1,right-left-1);
}

string longestPalinSubstring(string str)
{
    // Write your code here.
     string longest;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        string odd=solve(str,i,i);
        if(odd.size()>longest.size())
        {
            longest=odd;
        }
    }
    for(int i=0;i<n;i++)
    {
        string even=solve(str,i,i+1);
        if(even.size()>longest.size())
        {
            longest=even;
        }
    }
    return longest;
    
    
    
}
