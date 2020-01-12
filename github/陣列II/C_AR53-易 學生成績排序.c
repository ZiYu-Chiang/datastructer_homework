#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int cmp(const void *a, const void *b)//這函式是 qsort 所需的比較函式  
{  
      return ( *(int*)a - *(int*)b );                         //傳回  1 代表 a>b  
}

int main(){
	int a  =0,b = 0,i = 0;
	int *score;
	scanf("%d",&b);
	score = (int*) malloc(sizeof(int)* b);
	for(i = 0;i<b;i++) {
		scanf("%d",&score[i]);
	}
	qsort(score,b,sizeof(int),cmp);  
	for(i = 0;i<b;i++) {
		printf("%d\n",score[i]);
	}
}
	
