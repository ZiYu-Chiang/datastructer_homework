#include<stdio.h>  
#include<stdlib.h>  
#include<ctype.h>  
#include<math.h>  
#include<string.h>  

int main(){
	char line[102],word[102];
	int a = 0,i = 0,len = 0;
	fgets(line,102,stdin);
	scanf("%d",&a);
	len = strlen(line);
	for(i = 0;i<len-1;i++) {
		if(isalpha(line[i])) { //為字母的話
			if(((line[i]+a <= 'z')&&(line[i]+a >='a')) || ((line[i]+a <= 'Z')&&(line[i]+a >='A'))) {
				word[i] = line[i]+a;
				word[i+1] = '\0';
			}else{	//超出字母範圍的話
				word[i] = line[i]+a-26;
				word[i+1] = '\0';
			}
		}else if(isdigit(line[i])){ //是數字的話做跟字一樣的運算
			if((line[i]+a <= '9')&&(line[i]+a >='1')) {
				word[i] = line[i]+a;
				word[i+1] = '\0';
			}else{
				word[i] = line[i]+a-10;
				word[i+1] = '\0';
			}
		}else{
			word[i] = line[i];
			word[i+1] = '\0';
		}
	}
	printf("%s\n",word);
}
