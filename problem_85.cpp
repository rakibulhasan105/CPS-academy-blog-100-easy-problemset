/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia()
{ 
    int n;
    cin >> n;
    string first, second;
    cin >> first >> second;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int a = first[i] - '0';
        int b = second[i] - '0';
        count+= min(abs(a-b), 10-abs(a-b));
    }
    cout << count << "\n";  
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
