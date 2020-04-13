#include <bits/stdc++.h>
using namespace std;
// C - Replacing Integer

int main()
{
    long long N, K;
    cin >> N >> K;

    long long bn, n;
    bn = N + 1;
    n = N;

    long long rrr = N % K;

    cout << min(rrr,abs(rrr-K)) << endl;
}