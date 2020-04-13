#include <bits/stdc++.h>
using namespace std;
// C - Traveling Salesman around Lake

int main()
{
    long long A, B, C, a, b, c;
    cin >> A >> B >> C;
    if (A == B && B == C)
    {
        if (A % 2 != 0 )
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }

    int count = 0;
    
    while (1)
    {
        if (A % 2 != 0 || B % 2 != 0 || C % 2 != 0)
            break;
        count++;

        a = B / 2 + C / 2;
        b = C / 2 + A / 2;
        c = A / 2 + B / 2;
        A = a;
        B = b;
        C = c;
    }

    cout << count << endl;
}