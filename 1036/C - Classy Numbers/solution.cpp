// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 16.07.2026 at 01:54:16
//  Contact      : spexcher@gmail.com
//  Linktree     : https://linktr.ee/spexcher/
//  GitHub       : https://github.com/spexcher/
//  LinkedIn     : https://www.linkedin.com/in/gourabmodak/
//  YouTube      : https://www.youtube.com/@spexcher
//
//  Happy Coding! Build, learn, and ship with confidence.
// ======================================================
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll dp[19][2][2][20];
ll solve(int idx, bool tight, bool lz, int nzd, const string &s)
{
    if (idx == s.size())
        return (nzd <= 3);
    if (dp[idx][tight][lz][nzd] != -1)
        return dp[idx][tight][lz][nzd];
    int lb = 0;
    int ub = (tight) ? (s[idx] - '0') : 9;
    ll res = 0;
    for (int i = lb; i <= ub; i++)
        res += solve(idx + 1, (tight and i == ub), (lz and i == 0), nzd + (i != 0), s);
    return dp[idx][tight][lz][nzd] = res;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll a, b;
        cin >> a >> b;
        memset(dp, -1, sizeof(dp));
        ll R = solve(0, 1, 1, 0, to_string(b));
        memset(dp, -1, sizeof(dp));
        ll LM1 = solve(0, 1, 1, 0, to_string(a - 1));
        cout << R - LM1 << '
';
    }
    return 0;
}