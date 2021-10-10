#include<stdio.h>
#include<string.h>
#define int long long
const int MOD=1e9+7;



int main (){
   char s[100];
   gets(s);
   if (s[0]=='.' || s[s.length()-1]=='.')
     print("Invalid");
   else
    print("Valid");
   return 0;
}
