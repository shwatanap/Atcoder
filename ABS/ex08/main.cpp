#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N - i; j++)
        {
            for (int k = 0; k <= N - i - j; k++)
            {
                int sum = 10000 * i + 5000 * j + 1000 * k;
                if (sum == Y)
                {
                    cout << i << " " << j << " " << k << endl;
                    exit(0);
                }
                if (sum > Y)
                    break;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}
