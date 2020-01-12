#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
	int a  =0,b = 0,i = 0;
	int cnt[26],c;
	char word[3];
	scanf("%d",&b);
	for(i = 0;i<26;i++) {
		cnt[i] = 0;
	}
	for(i = 0;i<b;i++) { //換行'\n'會被讀入會被算到所以預防多一倍
		scanf("%s",word);
		c = word[0];
		if(islower(c)) {
			a = c -97;
			cnt[a] = cnt[a]+1;
		}
	}
	for(i = 0;i<26;i++) {
		if(cnt[i] != 0) {
			printf("%c %d\n",i+97,cnt[i]);
		}
	}
}
	
