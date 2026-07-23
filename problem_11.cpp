/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
const double PI = 3.14;

void phobia()
{
   double x1,x2,y1,y2;
   cin >> x1 >> y1 >> x2 >> y2;
   double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   //printf("%.2f\n",distance);
   cout << fixed << setprecision(2) << distance << endl;
    
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