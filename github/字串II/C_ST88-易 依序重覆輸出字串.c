#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(){
  int count = 0, b = 0,i = 0,a = 0,j = 0,len = 0;
  char *list;
	list = (char *)malloc(sizeof(char)* 400);
			fgets(list,4000,stdin);
			len = strlen(list);
			if(list[len-1] == '\n') {
					list[len-1] = '\0';
			}
			for(i = 0;i<len;i++) {
					if(list[i]!='\0') {
							for(j = 0;j<2;j++) {
									printf("%c",list[i]);
							}
					}
			}
			printf("\n");
}
