#include <stdio.h>
int main() {
int n=50,i,j,c;
for(i=2;i<=n;i++){
c=0;
for(j=1;j<=i;j++)if(i%j==0)c++;
if(c==2)printf("%d ",i);
}}
