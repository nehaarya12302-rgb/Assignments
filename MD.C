#include <stdio.h>
int main() {
int n=-123,ch=4,i,s=0,r,t;
if(ch==1)printf(n%2==0?"even":"odd");
if(ch==2){for(i=1;i<=n;i++)if(n%i==0)s++;printf(s==2?"prime":"not prime");}
if(ch==3){t=n;s=0;for(;n>0;n/=10)s=s*10+n%10;printf(t==s?"palindrome":"not");}
if(ch==4)printf(n>0?"positive":n<0?"negative":"zero");
if(ch==5){for(;n>0;n/=10)printf("%d",n%10);}
if(ch==6){t=n;s=0;for(;n>0;n/=10)s+=n%10;printf("%d",s);}
}
