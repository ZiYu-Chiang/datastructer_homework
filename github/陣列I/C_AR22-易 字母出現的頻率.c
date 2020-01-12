#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char line[1024];
	int a = 0,i = 0,len = 0,cnt[26];
	fgets(line,1024,stdin);
	len = strlen(line);
	for(i = 0;i<26;i++) {
		cnt[i] = 0;
	}
	for(i = 0;i<len;i++) {
		if(isalpha(line[i])) {
			
			if((line[i] <= 'z')&&(line[i] >='a')) {	//小寫字母
				a = line[i]-97;
				//printf("%d %c\n",a,line[i]);
				cnt[a] = cnt[a] +1;
			}else if((line[i]<= 'Z')&&(line[i] >='A')){	 //大小字母
				a = line[i]-65;
				//printf("%d %c\n",a,line[i]);
				cnt[a] = cnt[a] +1;
			}
		}
	}
	for(i = 0;i<26;i++) {
		if(i!=25) {
			printf("%d ",cnt[i]);
		}else{
			printf("%d",cnt[i]);
		}
	}
	printf("\n");
}


	
