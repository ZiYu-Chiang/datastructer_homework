#include<stdio.h>

int count(int a,int b){
	if(b == 0) { //所有的零次方值都為1
		return 1;
	}else if(b == 1){ //所有數的1次方為其本身
		return a;
	}else{ //乘該數本身，並將次方數少1
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
	
