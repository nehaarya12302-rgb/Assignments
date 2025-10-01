#include <stdio.h>
int main (){
int n = 5, f =1, i = 1;
while(i <= n){
	f = f * i;
	i++;
}
printf("%d", f);
}
