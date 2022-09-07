#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n & (n - 1)) == 0;
}
int main()
{
    int totalPowerOfTwo = 0;

    for(int i = 2; i <= 10000000; i++)
    {
        if(isPowerOfTwo(i))
        {
            cout << i << "\n";
            totalPowerOfTwo++;
        }
    }

    cout << "\nTotal power of two =  " << totalPowerOfTwo - 1 << "\n";

    return 0;
}
