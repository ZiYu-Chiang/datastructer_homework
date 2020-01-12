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
	for(i = 0;i<b;i++) {
		scanf("%s",word);//讀行進來再取頭那個char
		c = word[0];
		if(islower(c)) {
			a = c -97;   //轉成array的範圍內
			cnt[a] = cnt[a]+1;
		}
	}
	for(i = 0;i<26;i++) {
		if(cnt[i] != 0) { //輸出時再運算成收到的那個字元
			printf("%c %d\n",i+97,cnt[i]);
		}
	}
}
	
