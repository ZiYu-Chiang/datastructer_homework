#include<stdio.h>

int main(void){
 int c[100], i = 0;
 for(i = 0;i<6;i++) {
   scanf("%d",&c[i]);
 }
 for(i = 5;i>=0;i--) {
   printf("%d",c[i]);
   if(i>0) {
	   printf(" ");
   }
 }
 printf("\n");
 return 0;
}
