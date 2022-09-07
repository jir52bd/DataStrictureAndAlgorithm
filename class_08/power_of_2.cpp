#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 1; i <=1000000; i++)
    {
        if((i & (i -1)) == 0)
        {

            cout << i <<"\n";
        }
    }

    return 0;
}
