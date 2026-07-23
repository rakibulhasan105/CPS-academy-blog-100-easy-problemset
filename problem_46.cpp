/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int t)
{
    ll n;
    cin >> n;
    if(n==1){
        cout << 0;
        return;
    }    
    else if(n==2)
    {
        cout << "0 1";
        return;
    }
    int a = 0, b = 1;
    cout << "0 1 ";
    for(int i = 3; i <= n; i++)
    {
        cout << a+b << " ";
        int temp = a;
        a = b;
        b= temp + b;
    }
    return;
}
 
int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }
 
    return 0; //                Hey, it's like a phobia..
}