#include<bits/stdc++.h>
using namespace std;

int isPalindrom(int n)
{
    int temNum = 0;
    while( n != 0 )
    {
        int numMod = n % 10;
        int tem = numMod;
        temNum = temNum * 10 + tem;
        n = n/10;
    }

    return temNum;
}

int main()
{
    int num = 1234321;
    int result = isPalindrom(num);

    if(result == num )
        cout << "Palindrom\n";
    else
        cout << "Not Palindrom\n";

    return 0;
}
