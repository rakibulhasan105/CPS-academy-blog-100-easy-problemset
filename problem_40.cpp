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
    ll l,r;
    cin >> l >> r;
    bool flagM = false;
    for(int i = l;i<=r;i++)
    {
        bool flag = true;
        int j = i;
        while (j!=0)
        {
            int temp = j%10;
            if(temp!=4 && temp!= 7)
            {
                flag = false;
                break;
            }
            j/=10;
        }
        if(flag) cout << i << " ";
        if(flag) flagM = true;
        
    }
    if(!flagM) cout << -1 << endl;

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