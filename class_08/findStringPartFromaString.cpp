#include<bits/stdc++.h>
using namespace std;
#define BASE 129
#define MOD 1000000007
#define MAX_S 100000

long long h[MAX_S + 5], po[MAX_S + 5];
void generatePrefixHash(string &s)
{
    h[0] = s[0] - 'a'+1; // 'c' -'a' + 1 = 3
    for(int i =  1; i < s.size(); i++)
    {
        h[i] = (h[i - 1] * BASE) + (s[i] - 'a' + 1) % MOD;
    }
    po[0] =  1; //po[x] = 10^x
    for(int i = 1; i <= s.size(); i++)
    {
        po[i] = (po[i - 1] * BASE) % MOD;
    }
    //for(int i = 0; i < s.size(); i++)
    //{
    //    cout << h[i] << "\n";
    //}
}

long long generateHash(string &s)
{
    long long H = 0;
    for(auto c : s)
    {
        H = ((H*BASE) + (c - 'a' + 1)) % MOD;
    }
    return H;
}

long long getHash(int L, int R)// hash(s[L..R] -> "aabcd" -->getHas(2, 3)
{
    if(L == 0) return h[R];
    return (h[R] - (h[L - 1] * po[R - L + 1] % MOD)+MOD) % MOD;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    generatePrefixHash(s1);
    long long hashOfs2 = generateHash(s2);
    //cout << hashOfs2 << "\n";
    //return 0;

    for(int i = 0; i + s2.size() <= s1.size(); i++)
    {
        if(getHash(i, i + s2.size() - 1) == hashOfs2)
        {
            cout << i << "\n";
        }
    }

    //main();

    return 0;

}
