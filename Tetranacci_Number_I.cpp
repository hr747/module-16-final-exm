#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long
int dp[10005];

 int fib(int n)
 {
    if(n==0)
    return 0;
    if(n==1||n==2)
    return 1;
    if(n==3)
    return 2;
    if(dp[n]!=-1)
    return dp[n];

    dp[n]= fib(n-1)+fib(n-2)+fib(n-3)+fib(n-4);
    return dp[n];
 }

 int main()

{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    

    return 0;
}