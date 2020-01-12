#include<stdio.h>

int count(int a,int b){
	if(b == 0) {
		return 1;
	}else if(b == 1){
		return a;
	}else{
		return a*count(a,b-1);
	}
}

int main(void){
	int i = 0,c = 0,a = 0,b = 0;
	while(scanf("%d %d",&a,&b)!=EOF) {
		c = 1;
		c = count(a,b);
		printf("%d\n",c);
	}
}
	
