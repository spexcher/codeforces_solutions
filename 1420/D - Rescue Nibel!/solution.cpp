// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 28.01.2026 at 16:40:01
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
#define print(x) cout << x << " "
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
constexpr int P = 998244353; // 1000000009 998244353 2147483647
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
 
//--------------End Snippet area---------
 
// Constants
#define PI 3.1415926535897932384626
#define linf 1e18
#define inf INT_MAX
#define EPS = 1e-9
 
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
Comb c(2e5);
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    map<ll, ll> add, remove;
    for (int i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        add[l]++;
        remove[r]++;
    }
    ll lamps = 0;
    MInt<P> res = 0;
    set<ll> times;
    for (auto &[t, _] : add)
        times.insert(t);
    for (auto &[t, _] : remove)
        times.insert(t);
    for (ll t : times)
    {
        for (int i = 0; i < add[t]; i++)
        {
            if (lamps >= k - 1)
                res += c.binom(lamps, k - 1);
            lamps++;
        }
        lamps -= remove[t];
    }
    print(res);
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