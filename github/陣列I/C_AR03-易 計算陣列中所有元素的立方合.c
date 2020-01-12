#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
 int a[6],i = 0,cnt = 0;
 for(i = 0;i<6;i++) {
	 scanf("%d",&a[i]);
 }
 for(i = 0;i<6;i++) {
	 cnt = cnt + (a[i]*a[i]*a[i]);
 }
 printf("%d\n",cnt);
 return 0;
}
