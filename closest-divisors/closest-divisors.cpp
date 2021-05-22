vector<int>v(2);
class Solution {
void check(int a,int b)
{
    if(abs(a-b)<abs(v[0]-v[1]))
    {
        v[0]=a;
        v[1]=b;
    }
}

void solve(int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            check(i,n/i);
            else
            {
                check(i,n/i);
                int x=n/i;
                check(x,n/x);
            }
        }
    }
}
public:
    vector<int> closestDivisors(int num) {
        v[1]=INT_MAX,v[0]=0;
        solve(num+1);
        solve(num+2);
        return v;
    }
};