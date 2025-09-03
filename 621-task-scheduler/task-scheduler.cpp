class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        for(char c:tasks)
            freq[c-'A']++;
        int MaxF=*max_element(freq.begin(),freq.end());
        int CntMax=count(freq.begin(),freq.end(),MaxF);

        int res=(MaxF-1)*(n+1)+CntMax;
        return max((int)tasks.size(),res);

    }
};