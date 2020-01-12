#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
 int a = 0,b = 0,i = 0,cnt = 0,c = 0,t = 0,d = 0,g = 0,j = 0,z = 0,max = 0,value = 0;
 int **word,*tmp;
 scanf("%d",&a);
 for(i = 0;i<a;i++) {
	max = 0;
	scanf("%d %d %d",&b,&c,&d);	  //d 運算範圍
	word = (int**)malloc(sizeof(int*) * b);
	for(j = 0;j<b;j++) {
		*(word+j) = (int*)malloc(sizeof(int) * c);
	}
	for(j = 0;j<b;j++) {
		for(z = 0;z<c;z++) {
			scanf("%d",&word[j][z]); //存成圖
		}
	}
	for(j = 0;j<b-d+1;j++) {//根據圖跟範圍去算最大值
		for(z = 0;z<c-d+1;z++) {
			value = 0;
			for(g = 0;g<d;g++) {
				for(t = 0;t<d;t++) {
					value = value + word[j+g][z+t];
				}
			}
			if(max < value) {
				max = value;
			}
		}
	}
	printf("%d\n",max);
 }
 return 0;
}			
