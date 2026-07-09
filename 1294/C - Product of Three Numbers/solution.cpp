#pragma region r1;
/*----------------------------------------------------------------
AUTHOR: sepxcher
Name: Gourab Modak
email: sepxcher@gmail.com
Institution: Indian Institute of Technology Madras(BS Data Science 4 year) + Jalpaiguri Government Engineering College (Btech CSE 4 year)
Github: https://github.com/gauravthedeveloper/
linkedin : https://www.linkedin.com/in/gourabmodak/
codeforces : https://codeforces.com/profile/spexcher/
codechef : https://www.codechef.com/users/spexcher/
leetcode : https://leetcode.com/spexcher/
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <iomanip>
using namespace std;
#ifndef ONLINE_JUDGE
#define eprintf(...)                  \
    {                                 \
        fprintf(stderr, __VA_ARGS__); \
        fflush(stderr);               \
    }
#else
#define eprintf(...) 42
#endif
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template <typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
#define eb emplace_back
#define int long long
#define vi vector<ll>
#define lb lower_bound
#define ub upper_bound
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define sp(x) cout << fixed << setprecision(x)
#define PI 3.1415926535897932384626
#define py cout << "YES
"
#define pm cout << "-1
"
#define pn cout << "NO
"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n - 1; i >= 0; i--)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
clock_t startTime;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
ll myRand(ll B)
{
    return (ull)rng() % B;
}
// Check
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
 
// Bits
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
// Utility functions
template <typename T>
void inputvec(vector<T> &v)
{
    ll n = v.size();
    fo(i, n) cin >> v[i];
}
template <typename T>
void printvec(vector<T> v)
{
    ll n = v.size();
    fo(i, n) cout << v[i] << " ";
    cout << "
";
}
template <typename T>
ll sumvec(vector<T> v)
{
    ll n = v.size();
    ll s = 0;
    fo(i, n) s += v[i];
    return s;
}
// conversions
ll str_to_num(string s)
{
    return stoi(s);
}
string num_to_str(ll num)
{
    return to_string(num);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma endregion r1;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------------------------------------------------------------------------
 
#define MOD 1000000007
//
//--------------------------------------------------------------------------------------------------------------------
 
void solve()
{
    int n;
    cin >> n;
    int a, b, c;
    a = b = c = 1;
    b = MOD;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            a = i;
            break;
        }
    }
    n /= a;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && i != a)
        {
            if (i != a)
            {
                b = min(b, i);
            }
            else if ((n / i) != i && (n / i != a))
            {
                b = min(b, (n / i));
            }
        }
    }
    c = n / b;
    if (a != b && b != c && c != 1 && b != MOD)
    {
        py;
        cout << a << " " << b << " " << c << "
";
    }
    else
        pn;
}
 
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
        eprintf("--- Case #%d start ---
", i);
        // eprintf("Case #%d: ", i);
 
        solve();
        eprintf("--- Case #%d end ---
", i);
        eprintf("time = %.5lf
", getCurrentTime());
        eprintf("++++++++++++++++++++
");
    }
 
    return 0;
}