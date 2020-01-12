#include<stdio.h>  
#include<stdlib.h>  
#include<ctype.h>  
#include<math.h>  
#include<string.h>

int main(){
	int a = 0,b[128],c[128],i = 0,false = 0;
	for(i = 0;i<128;i++) {//存出現次數
		c[i] = 0;
	}
	scanf("%d",&a);
	for(i = 0;i<a;i++) {
		scanf("%d",&b[i]);
		c[b[i]] = c[b[i]] + 1;
	}
	for(i = 0;i<a;i++) {
		if(c[i] == 2) {
			false = 1;
		}
	}
	if(false == 1) {
		printf("0\n");
	}else{
		printf("1\n");
	}
}
