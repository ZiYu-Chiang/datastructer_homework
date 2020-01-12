#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(){
	int i = 0,len = 0,j = 0,a = 0;
	char line[1024];
	scanf("%s",line);
	for(i = 0;i<5;i++) {
		if(i<4) {
			printf("%c   ",line[i]);
		}else{
			printf("%c\n",line[i]);
		}
	}
}