#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(){
  int count = 0, b = 0,i = 0,a = 0,j = 0,len = 0;
  char *list;
	list = (char *)malloc(sizeof(char)* 40002);
	while(fgets(list,40002,stdin)!=NULL) {
			b = 0;
			len = strlen(list);
			if(list[0] == '0') {
					break;
			}
			for(i = 0;i<len-1;i++) {
					if(list[i] == 'a'||list[i] == 'A') {
							b = b+4;
					}else	if(list[i] == 'l'||list[i] == 'L') {
									b = b+1;
					}else	if(list[i] == 'z'||list[i] == 'Z') {
									b = b+2;
					}else	if(list[i] == 'e'||list[i] == 'E') {
									b = b+3;
					}else	if(list[i] == 's'||list[i] == 'S') {
									b = b+5;
					}else	if(list[i] == 'h'||list[i] == 'H') {
									b = b+6;
					}else	if(list[i] == 'j'||list[i] == 'J') {
									b = b+7;
					}else	if(list[i] == 'b'||list[i] == 'B') {
									b = b+8;
					}else	if(list[i] == 'g'||list[i] == 'G') {
									b = b+9;
					}else	if(list[i] == 'o'||list[i] == 'O') {
									b = b+10;
					}
			}
			printf("%d\n",b);
	}
}
