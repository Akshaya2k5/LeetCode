class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int l=s.length();
        for(int i=l-1;i>=0;i--)
        {  
            if(s[i]!=' ')
                count++;
            if(s[i]==' ' && count>0)
                break;      
        }
        return count;
    }
};