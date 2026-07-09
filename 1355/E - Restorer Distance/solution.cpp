#define MOD 1000000007
/*-------------------------------Start Snippet------------------------------------------
AUTHOR: spexcher
Name: Gourab Modak
email: spexcher@gmail.com
Institution: Indian Institute of Technology Madras(BS UG Data Science 4 year) + Jalpaiguri Government Engineering College (B. Tech UG CSE 4 year)
Linktree: https://linktr.ee/spexcher
Github: https://github.com/spexcher/
linkedin : https://www.linkedin.com/in/gourabmodak/
codeforces : https://codeforces.com/profile/spexcher/
codechef : https://www.codechef.com/users/spexcher/
leetcode : https://leetcode.com/spexcher/
------------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template <typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
#define ll long long
#define ull unsigned long long
#define lld long double
#define mod MOD
#define eb emplace_back
#define pb push_back
#define ppb pop_back
 
#define int long long
// disable this in storage constrained problems
// now int behaves as it should
// but if you need long long then use ll
#define sqrt(x) sqrtl((x))
#define ceil(x) ceill((x))
#define floor(x) floorl((x))
#define ceildiv(a, b) ((a + b - 1) / b)
#define vi vector<int>
#define vll vector<ll>
#define vvb vector<vector<bool>>
#define vvc vector<vector<char>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvb vector<vector<bool>>
#define vvpii vector<vector<pii>>
#define vvpll vector<vector<pll>>
#define vpii vector<pii>
#define vpll vector<pll>
#define si set<int>
#define sll set<ll>
#define sc set<char>
#define mii map<int, int>
#define mll map<ll, ll>
#define mci map<char, int>
#define mcll map<char, ll>
#define pqi priority_queue<int>
#define pqll priority_queue<ll>
 
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define ff first
#define ss second
#define spre(x) cout << fixed << setprecision(x)
#define PI 3.1415926535897932384626
#define py cout << "YES
"
#define pm cout << "-1
"
#define pn cout << "NO
"
#define pm cout << "-1
"
#define pl cout << "
"
#define nl "
"
#define sp " "
#define print(x) cout << x << "
"
#define deb(x) cout << #x << "=" << x << endl
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())
#define unq(v) v.resize(distance(v.begin(), unique(all(v))))
#define sum(v) accumulate(all(v), 0)
#define sz(x) (ll) x.size()
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n - 1; i >= 0; i--)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define setbits(n) __builtin_popcountll(n)
#define counttz(n) __builtin_ctzll(n)
#define countlz(n) __builtin_clzll(n)
clock_t startTime;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }
 
//-------------------- take ip/op like vector,pairs directly! -----------------------------
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
    for (auto &x : a)
        cout << x << '
';
    return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}
//----------------------END Of the input module --------------------
 
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
 
ll fpow(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1LL)
            res = (res * x) % mod;
        y = y >> 1LL;
        x = (x * x) % mod;
    }
    return res;
}
ll inv(ll a, ll p = mod) { return fpow(a, p - 2); }
void solve();
signed main()
{
    startTime = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // eprintf("--- Case #%lld start ---
", i);
        // eprintf("Case #%lld: ", i);
        // solve();
        // eprintf("--- Case #%lld end ---
", i);
        // eprintf("time = %.5lf
", getCurrentTime());
        // eprintf("++++++++++++++++++++
");
 
        solve();
    }
 
    return 0;
}
//-----------------------------End Snippet--------------------------
 
void solve()
{
    int n, a, re, m;
    cin >> n >> a >> re >> m;
    vi v(n);
    cin >> v;
    int shift = min(m, a + re);
    auto cost = [&](int x)
    {
        int p = 0;
        int q = 0;
        fo(i, n)
        {
            if (v[i] >= x)
                q += (v[i] - x);
            else
                p += (x - v[i]);
        }
        if (p >= q)
            return (q * shift + (p - q) * a);
        else
            return (p * shift + (q - p) * re);
    };
    int l = 0;
    int r = 1e9;
    while (l < r) // we use l<=r only when we directly return or break on success. (r-l)>EPS in decimal ternary search. l<r in strictly increasing or decreasing function.
    {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
        int u = cost(m1);
        int v = cost(m2);
        if (u < v)
            r = m2 - 1;
        else if (v < u)
            l = m1 + 1;
        else
            l = m1 + 1, r = m2 - 1;
    }
    int dkk = cost(l);
    print(dkk);
}