#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "aabccaddxaabc";
    string s2 = "abc";

    for(int i; i+s2.size() <= s1.size(); i++)//O(N) //total time complexity O(N^2)
    {
        if(s1.substr(i, s2.size()) == s2) //O(N)
        {
            cout << i <<"\n";
        }
    }

    return 0;
}
