#include<stdio.h>  
#include<stdlib.h>  
#include<ctype.h>  
#include<math.h>  
#include<string.h>  

void display(int *a){
	int i = 0;
	for(i = 0;i<10;i++) {
		if(i == 9) {
			printf("%d",a[i]);
		}else{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

void reverse(int *a){
	int tmp[10],i = 0;
	for(i = 0;i<10;i++) {
		tmp[i] = a[10-i-1];
	}
	display(tmp);
}

int main(){
	int a[10],i = 0;
	for(i = 0;i<10;i++) {
		scanf("%d",&a[i]);
	}
    reverse(a);
}
