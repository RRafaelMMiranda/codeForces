#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int N =0;
    cin >> N;
    int exatamentezero = (N-2) * (N-2) * (N-2);
    int umaface = pow((N-2),2) * 6;
    int duasfaces = (N-2)*12;
    int tresfaces = 8;

    cout << exatamentezero << endl << umaface << endl << duasfaces << endl << tresfaces << endl;
}