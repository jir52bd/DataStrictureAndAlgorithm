#include<bits/stdc++.h>
using namespace std;
#define BASE 10
#define MAX_S 10000

long long h[MAX_S];

void generatePrefixHash(string &s)
{

    h[0] = s[0] - 'a'+1; //'c' - 'a'+1 = 3
    for(int i = 1; i < s.size(); i++)
    {
        h[i] = (h[i -1]*BASE);
        h[i] += s[i] - 'a'+1;
    }

    for(int i = 0; i < s.size(); i++)
    {
        cout << h[i] << "\n";
    }
}
int main()
{
    string s1 = "abccda";
    generatePrefixHash(s1);

    return 0;
}
