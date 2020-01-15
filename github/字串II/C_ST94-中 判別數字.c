#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char line[1024];
	int a = 0,i = 0,tmp = 0,len = 0,j = 0;
			fgets(line,1024,stdin);
			len = strlen(line);
			for(i = 0;i<len;i++) {
				if(isalpha(line[i])) {
						a++;
				}
				if(isdigit(line[i])) {
						j++;
				}
			}
			printf("%d,%d\n",a,j);
}


