#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long
int dp[10005];

 int fib(int st,int n)
 {
    if(st==n)
    return 1;
    if(st>n||st <= 0)
    return 0;
    
    if(dp[st]!=-1)
    return dp[st];
    int op1=fib(st+3,n);
    int op2=fib(st*2,n);

    
    return dp[st]=(op1||op2);
 }

 int main()

{
   
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
         memset(dp,-1,sizeof(dp));
       
       if(fib(1,n)) cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
    
    
    

    return 0;
}