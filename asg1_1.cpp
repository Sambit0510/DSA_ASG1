#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MOD=1e9+7;



signed main (){


//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
   string s;
   cin>>s;
   //int n = strlen(s);
   if (s[0]=='.' || s[s.length()-1]=='.')
     cout<<"invlaid"<<endl;
   else
    cout<<"Valid"<<endl;
   return 0;
}
