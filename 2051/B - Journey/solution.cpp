#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c, totalDays;
        cin >> n >> a >> b >> c;
        totalDays = 0;
        totalDays += 3 * (ll)(n / (a + b + c));
        // totalDays *= 3;
        n %= (a + b + c);
        if (n <= a and n > 0)
            totalDays += 1;
        else if (n > a and n <= (a + b))
            totalDays += 2;
        else if (n != 0)
            totalDays += 3;
        cout << totalDays << endl;
    }
    return 0;
}