class Solution {
public:
    int mySqrt(int x) {
        long int sqrt=0;
        while(sqrt*sqrt<=x){
            sqrt++;
        }
        return sqrt-1;
    }
};