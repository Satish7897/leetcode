class Solution {
public:
    string intToRoman(int n) {
      vector<int>tmp,ans;
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        int i=0;string fans;
        while(n)
        {
            if(n-val[i]>=0)
            {
                n-=val[i];
                fans+=sym[i];
            }
            else
                i++;
        }
        return fans;
    }
};