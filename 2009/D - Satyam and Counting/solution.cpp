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
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#define eprintf(...)                  \
    {                                 \
        fprintf(stderr, __VA_ARGS__); \
        fflush(stderr);               \
    }
#else
#define eprintf(...) 42
#define debug(x)
#endif
 
void _print(ll t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
 
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
constexpr T power(T a, i64 b)
{
    T res{1};
    for (; b; b /= 2, a *= a)
    {
        if (b % 2)
        {
            res *= a;
        }
    }
    return res;
}
constexpr i64 mul(i64 a, i64 b, i64 p)
{
    i64 res = a * b - i64(1.L * a * b / p) * p;
    res %= p;
    if (res < 0)
    {
        res += p;
    }
    return res;
}
template <i64 P>
struct MInt
{
    i64 x;
    constexpr MInt() : x{0} {}
    constexpr MInt(i64 x) : x{norm(x % getMod())} {}
 
    static i64 Mod;
    constexpr static i64 getMod()
    {
        if (P > 0)
        {
            return P;
        }
        else
        {
            return Mod;
        }
    }
    constexpr static void setMod(i64 Mod_)
    {
        Mod = Mod_;
    }
    constexpr i64 norm(i64 x) const
    {
        if (x < 0)
        {
            x += getMod();
        }
        if (x >= getMod())
        {
            x -= getMod();
        }
        return x;
    }
    constexpr i64 val() const
    {
        return x;
    }
    constexpr MInt operator-() const
    {
        MInt res;
        res.x = norm(getMod() - x);
        return res;
    }
    constexpr MInt inv() const
    {
        return power(*this, getMod() - 2);
    }
    constexpr MInt &operator*=(MInt rhs) &
    {
        if (getMod() < (1ULL << 31))
        {
            x = x * rhs.x % int(getMod());
        }
        else
        {
            x = mul(x, rhs.x, getMod());
        }
        return *this;
    }
    constexpr MInt &operator+=(MInt rhs) &
    {
        x = norm(x + rhs.x);
        return *this;
    }
    constexpr MInt &operator-=(MInt rhs) &
    {
        x = norm(x - rhs.x);
        return *this;
    }
    constexpr MInt &operator/=(MInt rhs) &
    {
        return *this *= rhs.inv();
    }
    friend constexpr MInt operator*(MInt lhs, MInt rhs)
    {
        MInt res = lhs;
        res *= rhs;
        return res;
    }
    friend constexpr MInt operator+(MInt lhs, MInt rhs)
    {
        MInt res = lhs;
        res += rhs;
        return res;
    }
    friend constexpr MInt operator-(MInt lhs, MInt rhs)
    {
        MInt res = lhs;
        res -= rhs;
        return res;
    }
    friend constexpr MInt operator/(MInt lhs, MInt rhs)
    {
        MInt res = lhs;
        res /= rhs;
        return res;
    }
    friend constexpr std::istream &operator>>(std::istream &is, MInt &a)
    {
        i64 v;
        is >> v;
        a = MInt(v);
        return is;
    }
    friend constexpr std::ostream &operator<<(std::ostream &os, const MInt &a)
    {
        return os << a.val();
    }
    friend constexpr bool operator==(MInt lhs, MInt rhs)
    {
        return lhs.val() == rhs.val();
    }
    friend constexpr bool operator!=(MInt lhs, MInt rhs)
    {
        return lhs.val() != rhs.val();
    }
    friend constexpr bool operator<(MInt lhs, MInt rhs)
    {
        return lhs.val() < rhs.val();
    }
};
 
// template <>
// i64 MInt<0>::Mod = 1000000007; // 1000000009 998244353 2147483647
// using Z = MInt<0>;
 
// template <>
// i64 MInt<1>::Mod = 998244353; // 1000000009 998244353 2147483647
// using W = MInt<1>;
 
// Z is modular data type with mod value of 1000000007
// Another way to Make Z
constexpr int P = 1000000007; // 1000000009 998244353 2147483647
using Z = MInt<P>;
 
struct Comb
{
    int n;
    std::vector<Z> _fac;
    std::vector<Z> _invfac;
    std::vector<Z> _inv;
 
    Comb() : n{0}, _fac{1}, _invfac{1}, _inv{0} {}
    Comb(int n) : Comb()
    {
        init(n);
    }
 
    void init(int m)
    {
        m = std::min<i64>(m, Z::getMod() - 1);
        if (m <= n)
            return;
        _fac.resize(m + 1);
        _invfac.resize(m + 1);
        _inv.resize(m + 1);
 
        for (int i = n + 1; i <= m; i++)
        {
            _fac[i] = _fac[i - 1] * i;
        }
        _invfac[m] = _fac[m].inv();
        for (int i = m; i > n; i--)
        {
            _invfac[i - 1] = _invfac[i] * i;
            _inv[i] = _invfac[i] * _fac[i - 1];
        }
        n = m;
    }
 
    Z fac(int m)
    {
        if (m > n)
            init(2 * m);
        return _fac[m];
    }
    Z invfac(int m)
    {
        if (m > n)
            init(2 * m);
        return _invfac[m];
    }
    Z inv(int m)
    {
        if (m > n)
            init(2 * m);
        return _inv[m];
    }
    Z binom(int n, int m)
    {
        // if (m > n)
        //   swap(n, m);
        if (n < m || m < 0)
            return 0;
        return fac(n) * invfac(m) * invfac(n - m);
    }
};
//---------------------------------------------End Snippet area-----------------------------------------------
#define int long long
void solve();
signed main()
{
    fast_io;
    int t = 1;
    cin >> t;
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
Comb comb(1e5);
void solve()
{
    int n;
    cin >> n;
    vpll v(n);
    cin >> v;
    si x;
    si y;
    for (auto [a, b] : v)
    {
        if (b == 1)
            x.insert(a);
        else
            y.insert(a);
    }
    // debug(x);
    // debug(y);
    vi a(all(x));
    vi b(all(y));
    debug(a);
    debug(b);
    int res = 0;
    for (int it : a)
    {
        if (y.find(it + 1) != end(y) and y.find(it - 1) != end(y))
        {
            debug("toto");
            res++;
        }
        int u = lower_bound(all(b), it) - b.begin();
 
        if (y.find(it) != end(y))
        {
            debug(u);
            res += sz(b) - 1;
        }
    }
    debug(res);
    for (int it : b)
    {
        if (x.find(it + 1) != end(x) and x.find(it - 1) != end(x))
            res++;
        int u = lower_bound(all(a), it) - a.begin();
        debug(u);
        if (x.find(it) != end(x))
            res += sz(a) - 1;
    }
    print(res);
}