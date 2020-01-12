#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(){
	int a = 0,i = 0,len = 0,j = 0;
	char line[1024];
	scanf("%d",&a);
	for(i = 0;i<a;i++) {
	 scanf("%s",line);
	 len = strlen(line);
	 for(j = len-1;j>=0;j--) {//把字串倒著輸出
		 printf("%c",line[j]);
	 }
	 printf("\n");
	}
}
