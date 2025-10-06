#include <stdio.h>
int main() {
int n=500,i,num,rem,f,sum,k;
for(i=1;i<=n;i++){
num=i;sum=0;
for(;num>0;num/=10){
rem=num%10;f=1;
for(k=1;k<=rem;k++)f*=k;
sum+=f;}
if(sum==i)printf("%d ",i);
}}


