// ------------------------------------------------------------------------------------
// Problem Name: B. Fireworks
// From Contest: Codeforces - Codeforces Round 935 (Div. 3)
// URL: https://codeforces.com/contest/1945/problem/B
// Memory Limit: 256 MB (Mega Bytes)
// Time Limit: 1000 ms (milliseconds)
// 
// Author: spexcher
// Name: Gourab Modak
// email: spexcher@gmail.com
// Institution: Indian Institute of Technology Madras(B.S. UG Data Science 4 year) 
//              + Jalpaiguri Government Engineering College (B.Tech UG CSE 4 year)
// 
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
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
#define rall(x) (x).rbegin(), (x).rend()
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
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define sum(v) accumulate(all(v), 0)
#define sz(x) (ll) x.size()
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n - 1; i >= 0; i--)
#define Fo(i, k, n) \
 for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define setbits(n) __builtin_popcountll(n)
#define counttz(n) __builtin_ctzll(n)
#define countlz(n) __builtin_clzll(n)
clock_t startTime;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// i/p o/p overloads 
template <typename typC, typename typD> istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second;}
template <typename typC> istream &operator>>(istream &cin, vector<typC> &a) { for (auto &x : a) cin >> x; return cin;}
template <typename typC, typename typD> ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second;}
template <typename typC, typename typD> ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a) { for (auto &x : a) cout << x << '
'; return cout;}
template <typename typC> ostream &operator<<(ostream &cout, const vector<typC> &a) { int n = a.size(); if (!n) return cout; cout << a[0]; for (int i = 1; i < n; i++) cout << ' ' << a[i]; return cout;}
 
//---------------------------------------------Snippet area---------------------------------------------------
#ifndef ONLINE_JUDGE
#define debug(x) [](auto&&... args){cerr<<#x<<" ",(_print(args),...),cerr<<endl;}(x)
#define eprintf(...) (fprintf(stderr, __VA_ARGS__), fflush(stderr))
#else
#define debug(x)
#define eprintf(...) 42
#endif
double getCurrentTime(){ return (double)(clock() - startTime) / CLOCKS_PER_SEC;}
template <typename T>void _print(const T &t) { cerr << t; }
template <typename T, typename... Args>void _print(const T &t, const Args &... args) { cerr << t << " "; _print(args...);}
template <class T, class V>void _print(const pair<T, V> &p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T>void _print(const vector<T> &v) { cerr << "[ "; for (const T &i : v) { _print(i); cerr << " "; } cerr << "]";}
template <class T>void _print(const set<T> &v) { cerr << "[ "; for (const T &i : v) { _print(i); cerr << " "; } cerr << "]";}
template <class T>void _print(const multiset<T> &v) { cerr << "[ "; for (const T &i : v) { _print(i); cerr << " "; } cerr << "]";}
template <class T, class V>void _print(const map<T, V> &v) { cerr << "[ "; for (const auto &i : v) { _print(i); cerr << " "; } cerr << "]";}
 
 
//---------------------------------------------End Snippet area-----------------------------------------------
#define int long long
void solve();
signed main()
{
 startTime = clock();
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t = 1;
 cin >> t;
 Fo(i,1,t+1) { eprintf("--- Case #%lld start ---
", i);eprintf("Case #%lld: ", i);solve();eprintf("--- Case #%lld end ---
", i);eprintf("time = %.5lf
", getCurrentTime());eprintf("++++++++++++++++++++
");
    //solve();
  }
 return 0;
}
 
void solve() {
  int a,b,m;
  cin>>a>>b>>m;
   print((a+m)/a+(b+m)/b);
}