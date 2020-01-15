#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(){
  int count = 0, i = 0,a = 0,j = 0,b = 0;
  int list[100];
	scanf("%d %d",&a,&b);
	if(a < b) {
			for(i = a;i<b+1;i++) {
					for(j = 0;j<i;j++) {
							printf("*");
					}
					printf("\n");
			}
	}else {
			for(i = a;i>b-1;i--) {
					for(j = 0;j<i;j++) {
							printf("*");
					}
					printf("\n");
			}
		}
}
