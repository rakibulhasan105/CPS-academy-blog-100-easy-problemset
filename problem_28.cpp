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
    ll day1,month1,year1,day2,month2,year2;
    cin >> day1 >> month1 >> year1 >> day2 >> month2 >> year2;
    if(year1<year2)
    {
        cout << 1;
    }
    else if(year1>year2)
    {
        cout << 2;
    }
    else if(month1<month2)
    {
        cout << 1;
    }else if(month1>month2)
    {
        cout << 2;
    }
    else if(day1<day2)
    {
        cout << 1;
    }
    else cout << 2;

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