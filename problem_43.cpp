/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long
 
bool isPrime(long long n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(long long i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

void phobia(int t)
{
    long long n;
    cin >> n;
    if(isPrime(n)) cout << "YES" << endl;
    else cout << "NO" << endl; 
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