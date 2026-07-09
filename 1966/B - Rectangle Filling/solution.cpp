// ======================================================
//  Author       : spexcher | Gourab Modak
//  Created      : 27.01.2026 at 05:48:49
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
/* ===================== UNIVERSAL DEBUG TEMPLATE ===================== */
 
#ifndef ONLINE_JUDGE
 
// base types
template <class T>
void dbg_print(const T &x)
{
    cerr << x;
}
 
// pair
template <class A, class B>
void dbg_print(const pair<A, B> &p)
{
    cerr << "(";
    dbg_print(p.first);
    cerr << ", ";
    dbg_print(p.second);
    cerr << ")";
}
 
// vector
template <class T>
void dbg_print(const vector<T> &v)
{
    cerr << "[ ";
    for (auto &x : v)
    {
        dbg_print(x);
        cerr << " ";
    }
    cerr << "]";
}
#ifndef ONLINE_JUDGE
 
template <class T>
void dbg_print(const vector<vector<T>> &v)
{
    cerr << "[
";
    for (auto &row : v)
    {
        cerr << "  ";
        dbg_print(row);
        cerr << "
";
    }
    cerr << "]";
}
 
#endif
 
// deque
template <class T>
void dbg_print(const deque<T> &v)
{
    cerr << "[ ";
    for (auto &x : v)
    {
        dbg_print(x);
        cerr << " ";
    }
    cerr << "]";
}
 
// array
template <class T, size_t N>
void dbg_print(const array<T, N> &a)
{
    cerr << "[ ";
    for (auto &x : a)
    {
        dbg_print(x);
        cerr << " ";
    }
    cerr << "]";
}
 
// set / multiset
template <class T>
void dbg_print(const set<T> &s)
{
    cerr << "{ ";
    for (auto &x : s)
    {
        dbg_print(x);
        cerr << " ";
    }
    cerr << "}";
}
 
template <class T>
void dbg_print(const multiset<T> &s)
{
    cerr << "{ ";
    for (auto &x : s)
    {
        dbg_print(x);
        cerr << " ";
    }
    cerr << "}";
}
 
// unordered_set
template <class T>
void dbg_print(const unordered_set<T> &s)
{
    cerr << "{ ";
    for (auto &x : s)
    {
        dbg_print(x);
        cerr << " ";
    }
    cerr << "}";
}
 
// map / unordered_map
template <class K, class V>
void dbg_print(const map<K, V> &m)
{
    cerr << "{ ";
    for (auto &[k, v] : m)
    {
        cerr << "(";
        dbg_print(k);
        cerr << ": ";
        dbg_print(v);
        cerr << ") ";
    }
    cerr << "}";
}
 
template <class K, class V>
void dbg_print(const unordered_map<K, V> &m)
{
    cerr << "{ ";
    for (auto &[k, v] : m)
    {
        cerr << "(";
        dbg_print(k);
        cerr << ": ";
        dbg_print(v);
        cerr << ") ";
    }
    cerr << "}";
}
 
inline void _pr() { cerr << "
"; }
 
template <class T, class... U>
void _pr(const T &t, const U &...u)
{
    dbg_print(t);
    if constexpr (sizeof...(u))
        cerr << " | ";
    _pr(u...);
}
 
#define pr(...) \
    cerr << "[ " << #__VA_ARGS__ << " ] = ", _pr(__VA_ARGS__)
 
#else
#define pr(...)
#endif
 
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
    cin >> t;
    ff(i, 1, t)
        solve();
    return 0;
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vvc v(n, vc(m));
    cin >> v;
    set<char> b1;
    ff(i, 0, n - 1) b1.insert(v[i][0]);
    set<char> b2;
    ff(j, 0, m - 1) b2.insert(v[0][j]);
    set<char> b3;
    ff(i, 0, n - 1) b3.insert(v[i][m - 1]);
    set<char> b4;
    ff(j, 0, m - 1) b4.insert(v[n - 1][j]);
    pr(b1, b2, b3, b4);
    if (sz(b1) == 2 and sz(b2) == 2 and sz(b3) == 2 and sz(b4) == 2)
        py;
    if (sz(b1) == 1)
    {
        if (b2.find(*b1.begin()) == b2.end())
            pn;
        else if (b3.find(*b1.begin()) == b3.end())
            pn;
        else if (b4.find(*b1.begin()) == b4.end())
            pn;
        else
            py;
    }
    else if (sz(b2) == 1)
    {
        if (b1.find(*b2.begin()) == b1.end())
            pn;
        else if (b3.find(*b2.begin()) == b3.end())
            pn;
        else if (b4.find(*b2.begin()) == b4.end())
            pn;
        else
            py;
    }
    else if (sz(b3) == 1)
    {
        if (b1.find(*b3.begin()) == b1.end())
            pn;
        else if (b2.find(*b3.begin()) == b2.end())
            pn;
        else if (b4.find(*b3.begin()) == b4.end())
            pn;
        else
            py;
    }
    else if (sz(b4) == 1)
    {
        if (b1.find(*b4.begin()) == b1.end())
            pn;
        else if (b2.find(*b4.begin()) == b2.end())
            pn;
        else if (b3.find(*b4.begin()) == b3.end())
            pn;
        else
            py;
    }
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