#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char line[1024];
	int a = 0,i = 0,tmp = 0,len = 0,j = 0;
			fgets(line,1024,stdin);
			len = strlen(line);
			if(line[len-1] == '\n') {
					line[len-1] = '\0';
			}
			for(i = 0;i<len;i++) {
					if(line[i] == '/') {
						if(line[i+1] == 'n' || line[i+1] == 'a'|| line[i+1] == 'b'|| line[i+1] == '/'||line[i+1] == 't') {
								a++;
								if(line[i+1] == '/') {
										i++;
								}
						}
					}
			}
			printf("%d\n",a);
}


