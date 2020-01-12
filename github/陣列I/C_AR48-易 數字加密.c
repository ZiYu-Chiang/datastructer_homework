#include<stdio.h>  
#include<stdlib.h>  
#include<ctype.h>  
#include<math.h>  
#include<string.h>  

int main(){
	char line[5];
	int a = 0,i = 0;
	int c[5];
	scanf("%s",line);
	for(i = 0;i<4;i++) {
		if(i == 0) {
			c[2] = (int)((line[i]-48+7)%10);
		}else if(i == 1){
			c[3] = (int)((line[i]-48+7)%10);
		}else if(i == 2){
			c[0] = (int)((line[i]-48+7)%10);
		}else if(i == 3){
			c[1] = (int)((line[i]-48+7)%10);
		}
	}
	for(i = 0;i<4;i++) {
		printf("%d",c[i]);
	}
	printf("\n");
}
