#include <stdio.h>
int main() {
int n=500,i,num,rem,sum;
for(i=1;i<=n;i++){
num=i;sum=0;
for(;num>0;num/=10){rem=num%10;sum+=rem*rem*rem;}
if(sum==i)printf("%d ",i);
}}
