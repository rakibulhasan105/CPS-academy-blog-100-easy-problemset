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
    double x,y;
    cin >> x >> y;
    if(x==0.0 && y==0.0) cout << "Origem";
    else if(y==0.0) cout << "Eixo X";    
    else if(x==0.0) cout << "Eixo Y";
    else if(x>0.0 && y >0.0) cout << "Q1";   
    else if(x>0.0 && y <0.0) cout << "Q4";   
    else if(x<0.0 && y >0.0) cout << "Q2";
    else cout  << "Q3";   

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