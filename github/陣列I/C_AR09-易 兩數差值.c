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
 int a = 0,b = 1,i = 0,cnt[7],z = 0;  
 char word[15],tmp[2],num1[8],num2[2];  
 fgets(word,20,stdin);  
 b = strlen(word);  
 tmp[1]='\0';  
 while(word[a]!='\n') {  
     if(isdigit(word[a])) {  //是數字轉整數存起來  
         tmp[0] = word[a];  
         cnt[i] = atoi(tmp);  
         i++;  
     }  
     a++;  
 }  
 qsort(cnt,i,sizeof(int),cmp);  
 for(z = 0;z<i;z++) {  
     sprintf(num2,"%d",cnt[z]);  
     num1[z] = num2[0];  
     num1[z+1] = '\0';  
 }  
 b = atoi(num1);  
 for(z = i-1;z>=0;z--) {  
     sprintf(num2,"%d",cnt[z]);  
     num1[i-z-1] = num2[0];  
     num1[i-z] = '\0';  
 }  
 a = atoi(num1);  
 printf("%d\n",a-b);  
  
}  
