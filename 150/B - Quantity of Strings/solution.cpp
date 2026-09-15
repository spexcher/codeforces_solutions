// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 15.09.2026 at 15:46:05
//  Contact      : spexcher@gmail.com
//  Linktree     : https://linktr.ee/spexcher/
//  GitHub       : https://github.com/spexcher/
//  LinkedIn     : https://www.linkedin.com/in/gourabmodak/
//  YouTube      : https://www.youtube.com/@spexcher
//
//  Happy Coding! Build, learn, and ship with confidence.
// ======================================================
 
// Pragmas
// #pragma GCC target("avx2")
#pragma GCC optimization("O3")
// #pragma GCC optimization ("O2")
//  #pragma GCC target("unroll-loops")
 
// Includes and namespaces
#include <bits/stdc++.h>
#include <chrono>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
// Ordered Set and Ordered Map
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class key, class value, class cmp = less_equal<key>>
using omap = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
// 1D Stuff
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using i64 = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
 
// 2D Vectors
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvb = vector<vb>;
using vvc = vector<vc>;
using vvs = vector<vs>;
using vvpii = vector<vpii>;
using vvpll = vector<vpll>;
 
// Maps
using mii = map<int, int>;
using mci = map<char, int>;
using msi = map<string, int>;
using umii = unordered_map<int, int>;
using umci = unordered_map<char, int>;
using umsi = unordered_map<string, int>;
using mll = map<ll, ll>;
using mcll = map<char, ll>;
using msll = map<string, ll>;
using umll = unordered_map<ll, ll>;
using umcll = unordered_map<char, ll>;
using umsll = unordered_map<string, ll>;
 
// Sets
using si = set<int>;
using sll = set<ll>;
using sc = set<char>;
 
// Heaps
template <class T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <class T>
using max_heap = priority_queue<T>;
 
// Shorthands
#define F first
#define S second
#define eb emplace_back
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
// Functions
#define sqrt(x) sqrtl((x))
#define ceil(x) ceill((x))
#define abs(x) labs((x))
#define floor(x) floorl((x))
#define ceildiv(a, b) ((a + b - 1) / b)
#define sz(x) (ll) x.size()
#define getunique(v) sort(all(v)), v.erase(unique(all(v)), v.end())
#define print(x) cout << x
#define printsp(x) cout << x << " "
#define println(x) cout << x << "
"
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define sum(v) accumulate(all(v), 0ll)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())
 
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);                   \
    cout << fixed << setprecision(25)
 
// Prints
#define py cout << "YES
"
#define pm cout << "-1
"
#define pn cout << "NO
"
#define pm cout << "-1
"
#define pl cout << '
'
#define nl '
'
#define sp ' '
 
// Returns
#define r0 return 0
#define r1 return 1
#define rt return true
#define rf return false
 
// Loops
#define ff(i, k, n) for (int i = k; i <= n; i++)
#define fr(i, k, n) for (int i = k; i >= n; i -= 1)
#define rep(i, k, n, s) for (int i = k; i <= n; i += s)
#define per(i, k, n, s) for (int i = k; i >= n; i -= s)
 
/* ===================== RAW INPUT OVERLOADS ===================== */
 
template <class A, class B>
istream &operator>>(istream &in, pair<A, B> &p)
{
    return in >> p.first >> p.second;
}
 
template <class T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}
 
template <class T>
istream &operator>>(istream &in, vector<vector<T>> &v)
{
    for (auto &r : v)
        for (auto &x : r)
            in >> x;
    return in;
}
 
template <class T>
istream &operator>>(istream &in, deque<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}
 
template <class T, size_t N>
istream &operator>>(istream &in, array<T, N> &a)
{
    for (auto &x : a)
        in >> x;
    return in;
}
/* ===================== RAW OUTPUT OVERLOADS ===================== */
 
template <class A, class B>
ostream &operator<<(ostream &os, const pair<A, B> &p)
{
    return os << p.first << " " << p.second;
}
 
template <class T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto &x : v)
        os << x << " ";
    return os;
}
 
template <class T>
ostream &operator<<(ostream &os, const vector<vector<T>> &v)
{
    for (auto &r : v)
    {
        for (auto &x : r)
            os << x << " ";
        os << '
';
    }
    return os;
}
 
template <class T>
ostream &operator<<(ostream &os, const deque<T> &v)
{
    for (auto &x : v)
        os << x << " ";
    return os;
}
 
template <class T, size_t N>
ostream &operator<<(ostream &os, const array<T, N> &a)
{
    for (auto &x : a)
        os << x << " ";
    return os;
}
 
//--------------Snippet area-------------
namespace number_theory
{
    ll mod = 1000000007; // 1000000007 1000000009 998244353 2147483647
    ll fpow(ll x, ll y, ll m = mod)
    {
        if (x == 0)
        {
            if (y == 0)
                return 1ll;
            else
                return 0ll;
        }
        ll res = 1LL;
        // x = x % m;
        if (x == 0LL)
            return 1LL;
        while (y > 0LL)
        {
            if (y & 1LL)
                res = (res * x) % m;
            y = y >> 1LL;
            x = (x * x) % m;
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
    bool isprime(ll n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
 
        if (n % 2 == 0 || n % 3 == 0)
            return false;
 
        for (ll i = 5; i * i <= n; i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
 
        return true;
    }
 
    bool prime[15000105];
    void sieve(int n)
    {
        for (ll i = 0; i <= n; i++)
            prime[i] = 1;
        for (ll p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (ll i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        prime[1] = prime[0] = 0;
    }
 
    vector<ll> primelist;
    bool __primes_generated__ = 0;
 
    void genprimes(int n)
    {
        __primes_generated__ = 1;
        sieve(n + 1);
        for (ll i = 2; i <= n; i++)
            if (prime[i])
                primelist.push_back(i);
    }
 
    vector<ll> factors(ll n)
    {
        if (!__primes_generated__)
        {
            cerr << "Call genprimes you dope" << endl;
            exit(1);
        }
        vector<ll> facs;
 
        for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++)
        {
            if (n % primelist[i] == 0)
            {
                while (n % primelist[i] == 0)
                {
                    n /= primelist[i];
                    facs.push_back(primelist[i]);
                }
            }
        }
        if (n > 1)
        {
            facs.push_back(n);
        }
        sort(facs.begin(), facs.end());
        return facs;
    }
 
    vector<ll> getdivs(ll n)
    {
        vector<ll> divs;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divs.push_back(i);
                divs.push_back(n / i);
            }
        }
 
        getunique(divs);
        return divs;
    }
}
 
using namespace number_theory;
struct DSU
{
    std::vector<int> f, siz;
    int components;
    DSU() {}
    DSU(int n)
    {
        init(n);
    }
 
    void init(int n)
    {
        f.resize(n);
        std::iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
        components = n;
    }
 
    int find(int x)
    {
        while (x != f[x])
        {
            x = f[x] = f[f[x]];
        }
        return x;
    }
 
    bool same(int x, int y)
    {
        return find(x) == find(y);
    }
 
    bool merge(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y)
        {
            return false;
        }
        siz[x] += siz[y];
        f[y] = x;
        components--;
        return true;
    }
 
    int size(int x)
    {
        return siz[find(x)];
    }
};
//--------------End Snippet area---------
 
// Constants
#define PI 3.1415926535897932384626
#define linf 1e18
#define inf INT_MAX
#define EPS 1e-9
 
#define int long long
 
void solve();
signed main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    ff(i, 1, t)
        solve();
    return 0;
}
 
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    DSU G(n);
    ff(i, 0, n - k) ff(j, 0, (k / 2)-1) G.merge(i + j, i + k - j - 1);
    print(fpow(m, G.components));
}
// ======================================================
//  Thank You for Viewing
//  Hope this code helped you today
//  Reminder    : It's a game - we are awarded points.
//                   First to reach 1,000 points wins a tank!
//  Inspiration : Life is beautiful (1997)
//
//  Have a great day & happy coding.
// ======================================================