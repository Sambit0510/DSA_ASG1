#include <stdio.h> 
#include<string.h>


int  main (){

 int n,m,k=0;

 scanf("%d",&n);
 scanf("%d",&m);

int a[n][m],b[n*m];

 for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
       scanf("%d",&a[i][j]);
        b[k]=a[i][j];
        k++;
    }
 }
 for (int i=0;i<k;i++){
    printf("%d ",b[i]);
 }
 return 0;
}

