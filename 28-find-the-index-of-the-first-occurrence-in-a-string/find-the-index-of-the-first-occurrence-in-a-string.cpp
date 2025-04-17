class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int l=needle.length();
        for(int i=0;i<=n-l;i++)
        {   int j;
            for(j=0;j<l;j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
            }
                if(j==l)
                    return i;
            
        }
        return -1;
    }
};