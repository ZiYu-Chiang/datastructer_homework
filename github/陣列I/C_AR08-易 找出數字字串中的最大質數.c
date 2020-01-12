#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
 int a = 0,b = 1,i = 0,cnt = 0,g = 0,t = 0,j = 0,c = 0,index = 0,z = 0,e = 0;
 char word[10],tmp[10];
 scanf("%d",&a);
 sprintf(word,"%d",a);	   //轉成字串
 b = strlen(word);
 for(e = 0;e<b;e++) {	   // 頭的位置
	 tmp[0] = '\0';
	 
	 for(z = 0;z<b;z++) {	//每次的字串長度
			for(g = 0;g<z+1;g++) {	//字串複製
				tmp[g] = word[e + g];
				tmp[g+1] = '\0';
			}
			 t = atoi(tmp);	   //轉為整數
			 if(t == 2) {
				 cnt = 2;
			 }else{
				for(j = 2;j<((t/2)+1);j++) {//判斷是否為值數
					if(t % j == 0) {
						 break;
					 }
				 }
				 if(j == ((t/2)+1)) {
					 cnt = t;
					 if(cnt > index) {
						 index = cnt;
					 }
	  
				 }
			 }
	
	 }
 }
 if(index == 0) {
	 printf("No prime found\n");
 }else{
	 printf("%d\n",index);
 }
 return 0;
}			
