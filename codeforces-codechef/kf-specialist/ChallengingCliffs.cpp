#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ios ios_base::sync_with_stdio(false), cin.tie(NULL)
#define pb push_back
#define po pop_back()
#define umap unordered_map
#define uset unordered_set
#define mod 1000000007
#define pi 3.141592653589793238
#define maxe *max_element
#define mine *min_element
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, k, n) for (int i = k; i < n; i++)
#define p0(x) cout << x << " "
#define p1(x) cout << x << "\n"
#define p2(x, y) cout << x << " " << y << endl
#define p3(x, y, z) cout << x << " " << y << " " << z << endl
#define ip pair<int, int>
#define pll pair<ll, ll>
#define mem(x, y) memset(x, y, sizeof(x))
ll gcd(ll x, ll y)
{
    return y ? gcd(y, x % y) : x;
}
ll lcm(ll x, ll y)
{
    return x / gcd(x, y) * y;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> h(n);
    f(i, n)
    {
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    if (n == 2)
    {
        cout << h[0] << " " << h[1] << "\n";
        return;
    }
    ll diff = abs(h[1] - h[0]);
    int idx = 1;
    f1(i, 2, n)
    {
        if (diff > abs(h[i] - h[i - 1]))
        {
            idx = i;
            diff = abs(h[i] - h[i - 1]);
        }
    }
    cout << h[idx] << " ";
    f1(i, idx + 1, n)
    {
        cout << h[i] << " ";
    }
    f(i, idx)
    {
        cout << h[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}