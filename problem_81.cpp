/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

bool isPalindrome(ll number)
{
    if (number < 0) return false;

    ll reversed = 0;
    ll original = number;
    while (number > 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return original == reversed;
}
 
void phobia()
{
    ll n, m;
    cin >> n >> m;
    ll count = 0;
    for (ll i = n; i <= m; i++)
    {
        if (isPalindrome(i))
        {
            count++;
        }
    }
    cout << count << endl;
    
 
    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia();
    }
 
    return 0; //                Hey, it's like a phobia..
}
