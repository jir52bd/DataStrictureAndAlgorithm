#include<bits/stdc++.h>
using namespace std;

int thiNestN, thiNestH = 330;
int oneSqrBoxN, OneSqrBoxP = 160;
int twoPotSqrBoxN, twoPotSqrBoxP = 260;
int threePotSqrBoxN, threePotSqrBoxP = 350;

int invoiceOfthiNest(int n, int p)
{
    cin >> n;
    return n*p;

}

int invoiceOfOneSqrBox(int n, int p)
{
    cin >> n;
    return n*p;
}

int invoiceOfTwoPotSqrBox(int n, int p)
{
    cin >> n;
    return n*p;

}

int invoiceOfThreepotSqrBox(int n, int p)
{
    cin >> n;
    return n*p;

}

int main()
{

    int invoiceTotalOfThiNest = invoiceOfthiNest(thiNestN, thiNestH);
    cout << "\nThai Nest Total: " << invoiceTotalOfThiNest <<"\n";

    int invoiceTotalOfOneSqrBox = invoiceOfOneSqrBox(oneSqrBoxN, OneSqrBoxP);
    cout << "\nOne Pot Square Box: " << invoiceTotalOfOneSqrBox <<"\n";

    int invoiceTotalOfTwoPotSqrBox = invoiceOfTwoPotSqrBox(twoPotSqrBoxN, twoPotSqrBoxP);
    cout << "\nTwo Pot Square Box: " << invoiceTotalOfTwoPotSqrBox <<"\n";

    int invoiceTotalOfThreePotBox = invoiceOfThreepotSqrBox(threePotSqrBoxN, threePotSqrBoxP);
    cout << "\nThree pot square Box: " << invoiceTotalOfThreePotBox << "\n";

    int Total = invoiceTotalOfThiNest + invoiceTotalOfOneSqrBox + invoiceTotalOfTwoPotSqrBox + invoiceTotalOfThreePotBox;
    cout << "\nTotal: " << Total << "\n";

    //cout << 10160 - Total << "\n";

    int exTN, exON; // 8 // 5
    cin >> exTN >> exON;
    int exThiNest = exTN*thiNestH;
    int exOnePot = exON*OneSqrBoxP;
    int exTotal = exThiNest+exOnePot;
    cout << "\nExtra Entry :" << exTotal << "\n";

    cout << "\nFinal Total : " << exTotal+ Total << "\n";

    int transport;

    cin >> transport;

    cout << "Transport : "<< transport << "\n";

    cout << "Total Amount: " << transport+exTotal+Total << "\n";

    return 0;

}
