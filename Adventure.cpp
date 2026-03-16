#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
int wight[10005];
int valu[10005];
int dp[10005][10005];
int knapsack(int i, int w)
{
    if (i < 0 || w <= 0)
        return 0;
    if (dp[i][w] != -1)
        return dp[i][w];
    if (wight[i] <= w)
    {
        int op1 = knapsack(i - 1, w - wight[i]) + valu[i];
        int op2 = knapsack(i - 1, w);
        dp[i][w] = max(op1, op2);
        return dp[i][w];
    }
    else
    {
        dp[i][w] = knapsack(i - 1, w);
        return dp[i][w];
    }
}

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, w;
        cin >> n >> w;
        f cin>>wight[i];
        f cin>>valu[i];
       
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= w; j++)
            {
                dp[i][j] = -1;
            }
        cout << knapsack(n - 1, w) << endl;
    }

    return 0;
}