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
    cin >> t;
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
struct MInt
{
    using i64 = long long;
    static constexpr i64 P = 1000000009; // 1000000007 1000000009 998244353 2147483647
    int x;
    constexpr MInt() : x{} {}
    constexpr MInt(i64 x) : x{norm(x % P)} {}
 
    constexpr int norm(int x) const
    {
        if (x < 0)
        {
            x += P;
        }
        if (x >= P)
        {
            x -= P;
        }
        return x;
    }
 
    constexpr int val() const
    {
        return x;
    }
    explicit constexpr operator int() const
    {
        return x;
    }
    constexpr MInt operator-() const
    {
        MInt res;
        res.x = norm(P - x);
        return res;
    }
    friend constexpr MInt power(MInt base, i64 exp)
    {
        MInt res(1);
        while (exp)
        {
            if (exp & 1)
                res *= base;
            base *= base;
            exp >>= 1;
        }
        return res;
    }
    constexpr MInt inv() const
    {
        assert(x != 0);
        return power(*this, P - 2);
    }
    constexpr MInt &operator*=(MInt rhs)
    {
        x = 1LL * x * rhs.x % P;
        return *this;
    }
    constexpr MInt &operator+=(MInt rhs)
    {
        x = norm(x + rhs.x);
        return *this;
    }
    constexpr MInt &operator-=(MInt rhs)
    {
        x = norm(x - rhs.x);
        return *this;
    }
    constexpr MInt &operator/=(MInt rhs)
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
    friend istream &operator>>(istream &iss, MInt &a)
    {
        i64 v;
        iss >> v;
        a = MInt(v);
        return iss;
    }
    friend ostream &operator<<(ostream &os, const MInt &a)
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
};
//-----------------------------String Matching Templates --------------------------
// KMP Algorithm template --------------------------------
vector<int> computeLPS(const string &pattern)
{
    int m = pattern.size();
    vector<int> lps(m, 0);
    int len = 0;
    int i = 1;
    while (i < m)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
 
int KMP(const string &text, const string &pattern)
{
    int n = text.size();
    int m = pattern.size();
    vector<int> lps = computeLPS(pattern);
    int count = 0;
    int i = 0, j = 0;
    while (i < n)
    {
        if (pattern[j] == text[i])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            count++;
            j = lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return count;
}
 
unsigned long long computeHash(const string &str, int start, int end, unsigned long long prime, unsigned long long prevHash = 0)
{
    unsigned long long hashValue = 0;
    if (prevHash == 0)
    {
        for (int i = start; i <= end; ++i)
        {
            hashValue = (hashValue * prime + str[i]) % prime;
        }
    }
    else
    {
        unsigned long long subtrahend = (prevHash * prime) % prime;
        hashValue = (prevHash - subtrahend + str[end]) % prime;
    }
    return hashValue;
}
 
//  Rabin-Karp Template
int rabinKarp(const string &text, const string &pattern)
{
    const int prime = 31;
    const int modulo = 1e9 + 9;
    int count = 0;
 
    int n = text.size();
    int m = pattern.size();
 
    if (n < m)
        return 0;
 
    unsigned long long patternHash = computeHash(pattern, 0, m - 1, prime);
    unsigned long long textHash = computeHash(text, 0, m - 1, prime);
 
    MInt power = 1;
    for (int i = 0; i < m - 1; ++i)
    {
        power *= prime;
    }
 
    for (int i = 0; i <= n - m; ++i)
    {
        if (patternHash == textHash)
        {
            bool matched = true;
            for (int j = 0; j < m; ++j)
            {
                if (pattern[j] != text[i + j])
                {
                    matched = false;
                    break;
                }
            }
            if (matched)
            {
                count++;
            }
        }
        if (i < n - m)
        {
            textHash = computeHash(text, i + 1, i + m, prime, textHash);
            if (textHash < 0)
            {
                textHash += modulo;
            }
        }
    }
    return count;
}
//-----------------------------END String Matching Templates --------------------------
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int u = KMP(s, "map");
    int v = KMP(s, "pie");
    int dkk = KMP(s, "mapie");
    print(u + v - dkk);
}