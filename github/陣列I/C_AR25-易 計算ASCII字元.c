#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char line[1024];
	int a = 0,i = 0,len = 0,cnt[128];
	fgets(line,1024,stdin);
	len = strlen(line);
	for(i = 0;i<128;i++) {
		cnt[i] = 0;
	}
	for(i = 0;i<len;i++) {
		a = line[i];
		if((a>32) && (a<128)) { //範圍內就進行統計
			cnt[a] = cnt[a] +1;
		}
	}
	
	for(i = 127;i>=0;i--) {
		if(cnt[i]!=0) { //從較大的開始輸出，有出現過的再輸出
			printf("%d %d\n",i,cnt[i]);
		}	   
	}
}


	
