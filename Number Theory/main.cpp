#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long int sum = 0;
        int i, r;
        for (i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                sum += n / i;
            }
        }
        r = sqrt(n);
        if (r * r == n)
        {
            sum -= r;
        }
        cout<<sum-n<<endl;
    }
    return 0;
}