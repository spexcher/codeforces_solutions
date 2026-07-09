// ------------------------------------------------------------------------------------
// Author: spexcher
// Name: Gourab Modak
// email: spexcher@gmail.com
// Linktree: https://linktr.ee/spexcher/
// Github: https://github.com/spexcher/
// linkedin : https://www.linkedin.com/in/gourabmodak/
// ------------------------------------------------------------------------------------
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class key, class value, class cmp = less_equal<key>>
using omap = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
using i64 = long long;
template <typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
#define ll long long
#define ull unsigned long long
#define lld long double
#define eb emplace_back
#define pb push_back
#define ppb pop_back
#define sqrt(x) sqrtl((x))
#define ceil(x) ceill((x))
#define abs(x) labs((x))
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
template <class T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <class T>
using max_heap = priority_queue<T>;
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sortall(x) sort(all(x))
#define ff first
#define ss second
#define spre(x) cout << fixed << setprecision(x)
#define PI 3.1415926535897932384626
#define infinity 1e18
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
#define nl '
'
#define sp ' '
#define print(x) cout << x << "
"
#define deb(x) cout << #x << "=" << x << endl
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())
#define unq(v) v.resize(distance(v.begin(), unique(all(v))))
#define getunique(v)                      \
    {                                     \
        sort(all(v));                     \
        v.erase(unique(all(v)), v.end()); \
    }
#define sum(v) accumulate(all(v), 0)
#define sz(x) (ll) x.size()
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define FoF(i, k, n) \
    for (int i = k; i <= n; i += 1)
#define FoR(i, k, n) \
    for (int i = k; i >= n; i -= 1)
#define FoS(i, k, n, step) \
    for (int i = k; k <= n ? i <= n : i >= n; k <= n ? i += step : i -= step)
#define setbits(n) __builtin_popcountll(n)
#define counttz(n) __builtin_ctzll(n)
#define countlz(n) __builtin_clzll(n)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
#define fast_io                        \
    startTime = clock();               \
    ios_base::sync_with_stdio(false);  \
    cin.tie(NULL);                     \
    cout.tie(NULL);                    \
    cout << fixed << setprecision(25); \
    cerr << fixed << setprecision(10)
clock_t startTime;
// i/p o/p overloads
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
template <class Fun>
class y_combinator_result
{
    Fun fun_;
 
public:
    template <class T>
    explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}
    template <class... Args>
    decltype(auto) operator()(Args &&...args) { return fun_(*this, std::forward<Args>(args)...); }
};
template <class Fun>
decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
 
//---------------------------------------------Snippet area---------------------------------------------------
namespace number_theory
{
    ll mod = 1000000007; // 1000000007 1000000009 998244353 2147483647
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
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
            return false;
        return (ceil(log2(n)) == floor(log2(n)));
    }
    ll inv(ll a, ll p = mod) { return fpow(a, p - 2); }
    bool isPerfectSquare(ll x)
    {
        if (x >= 0)
        {
            ll sr = sqrt(x);
            return (sr * sr == x);
        }
        return false;
    }
    ll gcd(ll x, ll y)
    {
        if (x == 0)
            return y;
        if (y == 0)
            return x;
        return gcd(y, x % y);
    }
}
 
using namespace number_theory;
 
//---------------------------------------------End Snippet area-----------------------------------------------
#define int long long
void solve();
signed main()
{
    fast_io;
 
    int t = 1;
    // cin >> t;
    FoF(i, 1, t)
    { // eprintf("--- Case #%lld start ---
", i);eprintf("Case #%lld: ", i);solve();eprintf("--- Case #%lld end ---
", i);eprintf("time = %.5lf
", getCurrentTime());eprintf("++++++++++++++++++++
");
        solve();
    }
    return 0;
}
const int N = 15000001;
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    cin >> v;
    vi spf(N + 1);
    FoF(i, 2, N) spf[i] = i;
    FoF(i, 2, N) if (spf[i] == i) for (int j = i * i; j <= N; j += i) if (spf[j] == j)
        spf[j] = i;
    int g1 = (int)gcd(v[0], v[1]);
    FoF(i, 2, n - 1) g1 = (int)gcd(g1 * 1ll, v[i] * 1ll);
    bool exists = false;
    for (int &x : v)
    {
        x /= g1;
        if (x > 1)
            exists = true;
    }
    if (!exists)
    {
        pm;
        return;
    }
    vi countprimefactors(N + 1);
    int res = 0;
    FoF(i, 0, n - 1)
    {
        int x = v[i];
        while (x > 1)
        {
            int p = spf[x];
            countprimefactors[p]++;
            res = max(res, countprimefactors[p]), x /= p;
            while (x % p == 0)
                x /= p;
        }
    }
    print(n - res);
}