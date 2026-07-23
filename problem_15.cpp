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
   char ch;
   cin >> ch;
   if(ch >= 'A' && ch <= 'Z')
   {
        cout << (char)tolower(ch);
   }
   else cout << (char)toupper(ch);

    // if (ch >= 'A' && ch <= 'Z') {
    //     ch = ch + 32;
    //     cout << "Lowercase: " << ch << "\n";
    // }
    // else if (ch >= 'a' && ch <= 'z') {
    //     ch = ch - 32;
    //     cout << "Uppercase: " << ch << "\n";
    // }
    
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