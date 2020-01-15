#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char line[1024];
	int a = 0,i = 0,tmp = 0,len = 0,cnt[26],max = 0,j = 0,max_index = 0;
	scanf("%d",&a);
	fgets(line,1024,stdin);		  //scanf會流換行符號再讀取欄，因此先fgets一次把換行讀取掉再讀取測資內容
	for(j = 0;j<a;j++) {
			max = 0;
			fgets(line,1024,stdin);
			len = strlen(line);
			for(i = 0;i<26;i++) {
				cnt[i] = 0;
			}
			for(i = 0;i<len;i++) {
				if(isalpha(line[i])) {
						if((line[i] <= 'z')&&(line[i] >='a')) {	//小寫處理
						tmp = line[i]-97;
						//printf("%d %c\n",a,line[i]);
						cnt[tmp] = cnt[tmp] +1;
					}
				}
			}
			for(i = 0;i<26;i++) {
					if(max < cnt[i]) {
							max = cnt[i];
							max_index = i;
					}
			}
			printf("%c %d\n",max_index+97,max);
	}
}


