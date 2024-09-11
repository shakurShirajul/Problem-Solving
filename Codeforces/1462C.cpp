#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, arr[10] = {0}, sum = 0;
        cin >> n;
        if (n >= 46)
        {
            cout << -1;
        }
        else
        {
            for (ll i = 9; i >= 1; i--)
            {
                if (n >= sum + i)
                {
                    sum += i;
                    arr[i] = 1;
                }
            }
            for (ll i = 1; i < 10; i++)
            {
                if (arr[i] == 1)
                {
                    cout << i;
                }
            }
        }

        cout << endl;
    }
    return 0;
}