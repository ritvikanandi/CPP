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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    f(i, n) cin >> a[i];
    f(i, n) cin >> b[i];
    vector<int> inc;
    vector<int> dec;
    int sum = 0;
    int flag = 0;
    int m = 0;
    int m1 = 0;
    f(i, n)
    {
        sum += b[i] - a[i];
        if (b[i] < a[i])
        {
            for (int j = 0; j < a[i] - b[i]; j++)
                dec.push_back(i + 1);
        }
        if (b[i] > a[i])
        {
            for (int j = 0; j < b[i] - a[i]; j++)
                inc.push_back(i + 1);
        }
        if (a[i] != b[i])
            flag = 1;
    }
    if (sum != 0)
    {
        p1(-1);
        return;
    }
    if (flag == 0)
    {
        p1(0);
        return;
    }
    p1(inc.size());
    int s = inc.size();
    f(i, s)
    {
        p2(dec[i], inc[i]);
    }
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