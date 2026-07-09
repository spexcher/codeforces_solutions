/*
 *                                                 888
 *                                                 888
 *                                                 888
 *    .d8888b  88888b.   .d88b.  888  888  .d8888b 88888b.   .d88b.  888d888
 *    88K      888 "88b d8P  Y8b `Y8bd8P' d88P"    888 "88b d8P  Y8b 888P"
 *    "Y8888b. 888  888 88888888   X88K   888      888  888 88888888 888
 *         X88 888 d88P Y8b.     .d8""8b. Y88b.    888  888 Y8b.     888
 *     88888P' 88888P"   "Y8888  888  888  "Y8888P 888  888  "Y8888  888
 *             888
 *             888
 *             888
 */
//  ------------------------------------------------------
//  Author    : spexcher | Gourab Modak
//  Contact   : spexcher@gmail.com
//  Linktree  : https://linktr.ee/spexcher/
//  Github    : https://github.com/spexcher/
//  LinkedIn  : https://www.linkedin.com/in/gourabmodak/
//  -------------------------------------------------------
 
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
using ld = long double;
using i64 = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
 
// 2D Vectors
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvb = vector<vb>;
using vvc = vector<vc>;
using vpii = vector<pii>;
using vpll = vector<pll>;
 
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
#define setbits(n) __builtin_popcountll(n)
#define counttz(n) __builtin_ctzll(n)
#define countlz(n) __builtin_clzll(n)
#define print(x) cout << x << "
"
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define sum(v) accumulate(all(v), 0ll)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())
 
// Constants
#define PI 3.1415926535897932384626
#define linf 1e18
#define inf INT_MAX
#define EPS = 1e-9
 
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
 
// Debug Template Input and Output overloads
#define debarr(a, n)            \
    cout << #a << " : ";        \
    for (int i = 0; i < n; i++) \
        cerr << a[i] << " ";    \
    cerr << endl;
#define debmat(mat, row, col)         \
    cout << #mat << " :
";           \
    for (int i = 0; i < row; i++)     \
    {                                 \
        for (int j = 0; j < col; j++) \
            cerr << mat[i][j] << " "; \
        cerr << endl;                 \
    }
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <typename T, typename U>
istream &operator>>(istream &in, pair<T, U> &p) { return in >> p.ff >> p.ss; }
template <typename T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}
template <class S, class T>
ostream &operator<<(ostream &os, const pair<S, T> &p) { return os << "(" << p.first << ", " << p.second << ")"; }
template <class T>
ostream &operator<<(ostream &os, const vector<T> &p)
{
    // os << "[ ";
    for (auto &it : p)
        os << it << ' ';
    // os << " ]";
    return os;
}
template <class T>
ostream &operator<<(ostream &os, const unordered_set<T> &p)
{
    os << "[ ";
    for (auto &it : p)
        os << it << " ";
    return os << "]";
}
template <class S, class T>
ostream &operator<<(ostream &os, const unordered_map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p)
        os << it << " ";
    return os << "]";
}
template <class T>
ostream &operator<<(ostream &os, const set<T> &p)
{
    os << "[ ";
    for (auto &it : p)
        os << it << " ";
    return os << "]";
}
template <class T>
ostream &operator<<(ostream &os, const multiset<T> &p)
{
    os << "[ ";
    for (auto &it : p)
        os << it << " ";
    return os << "]";
}
template <class S, class T>
ostream &operator<<(ostream &os, const map<S, T> &p)
{
    os << "[ ";
    for (auto &it : p)
        os << it << " ";
    return os << "]";
}
template <class T>
void dbs(string str, T t) { cerr << str << " : " << t << "
"; }
template <class T, class... S>
void dbs(string str, T t, S... s)
{
    int idx = str.find(',');
    cerr << str.substr(0, idx) << " : " << t << ",";
    dbs(str.substr(idx + 1), s...);
}
template <class T>
void prc(T a, T b)
{
    cerr << "[";
    for (T i = a; i != b; ++i)
    {
        if (i != a)
            cerr << ", ";
        cerr << *i;
    }
    cerr << "]
";
}
 
//--------------Snippet area-------------
 
namespace number_theory
{
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
 
//--------------End Snippet area---------
// #define int long long
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
    int n, q;
    cin >> n >> q;
    vll arr(n);
    cin >> arr;
    vll difference(n, 0);
    // a%m === b%m => a-b(mod m) = 0
    ff(i, 0, n - 2) difference[i] = abs(arr[i + 1] - arr[i]);
    pr(arr);
    vector<int> gcd_segtree(4 * n);
    auto build = [&](int index, int l, int r, auto &&self) -> void
    {
        if (l == r)
        {
            gcd_segtree[index] = difference[l];
            return;
        }
        int mid = (l + r) / 2;
        self(2 * index + 1, l, mid, self);
        self(2 * index + 2, mid + 1, r, self);
        gcd_segtree[index] = gcd(gcd_segtree[2 * index + 1], gcd_segtree[2 * index + 2]); // combine logic
    };
    auto update = [&](int index, int l, int r, int pos, int val, auto &&self) -> void
    {
        if (l == r)
        {
            gcd_segtree[index] = val;
            return;
        }
        int mid = (l + r) / 2;
        if (pos <= mid)
            self(2 * index + 1, l, mid, pos, val, self);
        else
            self(2 * index + 2, mid + 1, r, pos, val, self);
        
        gcd_segtree[index] = gcd(gcd_segtree[2 * index + 1], gcd_segtree[2 * index + 2]); // combine logic                                                                                      // apply logic
    };
    auto query = [&](int index, int l, int r, int lq, int rq, auto &&self) -> int
    {
        if (lq > r || rq < l)
        {
            // No overlap
            return 0; // or appropriate identity value (e.g., INT_MAX for min, 0 for sum,gcd,INT_MAX for max)
        }
        if (lq <= l && rq >= r)
        {
            // Total overlap
            return gcd_segtree[index];
        }
        int mid = (l + r) / 2;
        int ans = 0;
        int left = self(2 * index + 1, l, mid, lq, rq, self);
        int right = self(2 * index + 2, mid + 1, r, lq, rq, self);
        return gcd(left, right);
    };
    build(0, 0, n - 1, build);
    pr(gcd_segtree);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l, --r;
        pr(arr[l], arr[r]);
        int gcd = query(0, 0, n - 1, l, r - 1, query);
        cout << gcd << sp;
    }
    pl;
}