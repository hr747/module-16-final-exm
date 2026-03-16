#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long

 int main()

{
    int n;
    cin>>n;
  ll  int fib[n+1]; 
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    fib[3]=2;
    for(int i=4;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2]+fib[i-3]+fib[i-4];
    }
    cout<<fib[n];


    return 0;
}