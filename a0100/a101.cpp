#include <bits/stdc++.h>
using namespace std;
// C - Traveling Salesman around Lake

int main()
{
    int K, N;
    cin >> K >> N;
    int A[N] ;
    for (int i = 0; i < N ; i++)
    {
        cin >> A[i];
    }
    int m = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if (i == 0)
        {
            int tmp = A[i] + K - A[N - 1];
            m = max(m, tmp);
        }
        else
        {
            m = max(m  , A[i + 1] - A[i]);
        }
    }

    int mm = m;

    cout << K-mm << endl;
}