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
   ll a,b,c;
   cin >> a >> b >> c;
//    if(a > b && a > c)
//    {
//      if(b>c)
//      {
//         cout << c << " ";
//      }else cout << b << " ";
//      cout << a;
//    }
//    else if(b > a && b > c)
//    {
     
//      if(a>c)
//      {
//         cout << c << " ";
//      }else cout << a << " ";
//      cout << b;
//    }
//    else 
//    {
     
//      if(a>b) cout << b << " ";
//      else cout << a << " ";
//      cout << c ;
//    }


   int mx = max({a,b,c});
   int mm = min({a,b,c});
   cout << mm << " " << mx;
    
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