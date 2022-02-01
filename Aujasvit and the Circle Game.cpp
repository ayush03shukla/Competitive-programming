#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, x;
        ll z;
        cin >> m >> x;
        m = m - 1;
        ll array[x];
        array[0] = {1};
        for (ll i = 1; i < x; i++)
        {
            z = (m % (i + 1));
            z++;
            if (array[i - 1] < z)
            {
                array[i] = array[i - 1];
            }
            else
            {
                array[i] = array[i - 1] + 1;
            }
        }
        for (ll i = 0; i < x; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}