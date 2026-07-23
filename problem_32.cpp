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
    cout << n << " * " << 1 << " = " << n*1 << endl;
    cout << n << " * " << 2 << " = " << n*2 << endl;
    cout << n << " * " << 3 << " = " << n*3 << endl;
    cout << n << " * " << 4 << " = " << n*4 << endl;
    cout << n << " * " << 5 << " = " << n*5 << endl;
    cout << n << " * " << 6 << " = " << n*6 << endl;
    cout << n << " * " << 7 << " = " << n*7 << endl;
    cout << n << " * " << 8 << " = " << n*8 << endl;
    cout << n << " * " << 9 << " = " << n*9 << endl;
    cout << n << " * " << 10<< " = " << n*10<< endl;
    cout << n << " * " << 11<< " = " << n*11<< endl;
    cout << n << " * " << 12<< " = " << n*12<< endl;
    
    
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