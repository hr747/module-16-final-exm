#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.length() != s2.length()) {
            cout << "NO" << endl;
            continue;}
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}