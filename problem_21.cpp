/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia()
{
    double n;
    cin >> n;
    if(0 <= n && n <= 25) cout << "Interval [0,25]";
    else if(25 < n && n <= 50) cout << "Interval (25,50]";
    else if(50 <  n && n <= 75) cout << "Interval (50,75]";
    else if(75 <  n && n <= 100) cout << "Interval (75,100]";
    else cout << "Out of Intervals";
 return;
}

int32_t main()
{
    fastio;
    int tc = 1;
   // cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}