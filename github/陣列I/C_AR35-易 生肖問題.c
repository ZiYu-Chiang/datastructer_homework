#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
	int a  =0,b = 0,i = 0;
	scanf("%d",&b);
	a = b -2007;
	a = abs(a); 
	a  = a % 12;
	if(b < 2007) {
		a = 12 - a;
	}
	if(a == 1) {
		printf("rat\n");
	}else if(a == 2) {
		printf("ox\n");
	}else if(a == 3) {
		printf("tiger\n");
	}else if(a == 4) {
		printf("rbbit\n");
	}else if(a == 5) {
		printf("dragon\n");
	}else if(a == 6) {
		printf("snake\n");
	}else if(a == 7) {
		printf("horse\n");
	}else if(a == 8) {
		printf("sheep\n");
	}else if(a == 9) {
		printf("monkey\n");
	}else if(a == 10) {
		printf("rooster\n");
	}else if(a == 11) {
		printf("dog\n");
	}else if(a == 0) {
		printf("pig\n");
	}
}

