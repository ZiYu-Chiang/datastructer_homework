#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(){
  int count = 0, i = 0,a = 0,j = 0,b = 0;
  int list[100];
	scanf("%d",&a);
			for(i = 1;i<a;i++) {
					for(j = 0;j<i;j++) { //前面有幾個空白
							printf("%d",j+1);
					}
					for(j = a;j>i;j--) {
							printf("%d",j);
					}
					printf("\n");
			}
}
