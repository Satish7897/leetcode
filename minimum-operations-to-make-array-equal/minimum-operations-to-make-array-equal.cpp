class Solution {
    int getAns(int st,int n)
    {
        return n*(st+n-1);
    }
public:
    int minOperations(int n) {                                                         if(n%2==0)
        return getAns(1,n/2);
      return getAns(2,n/2);
    }
};