#include<bits/stdc++.h>
using namespace std;

bool isSubtraction(int a, int b)
{
    return (a - b) == 0;
}

int main()
{
    int a = 11, b = 11;

    if(isSubtraction(a, b))
    {
        cout << "The two number is equal.\n";
    }

    return 0;
}
