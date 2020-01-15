#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(){
  int count = 0, i = 0,a = 0,j = 0,b = 0;
  int list[100];
	scanf("%d",&a);
			for(i = 1;i<a+1;i++) {
					for(j = 0;j<a-i;j++) { //前面有幾個空白
							printf(" ");
					}
					for(j = 0;j<i;j++) {
							printf("*");
					}
					printf("\n");
			}
}
