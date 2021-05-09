class Solution {
public:
    int integerReplacement(int n,int ct=0) {
       
        if(n==1)
            return ct;
         if (n == INT_MAX)
            return 32;
        if(n%2==0)
            return integerReplacement(n/2,ct+1);
        else
            return min(integerReplacement(n+1,ct+1),integerReplacement(n-1,ct+1));
    }
};