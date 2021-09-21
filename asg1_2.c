/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
#include<string.h>
int  main (){


char s[50];
scanf("%s",s);
int n=strlen(s);
char s2[10]="@gmail.com";
for (int i=n-10, j=0;i<n;i++,j++){
        if (s[i]!=s2[j]){
            //cout<<"Invlaid"<<endl;
            printf("Invlid");
            return 0 ;
        }


}
//cout<<"Valid"<<endl;
printf("Valid");
return 0;
}