#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
 int a = 0,b = 1,i = 0,cnt = 0,index = 0,count = 0;
 char word[100],tmp[1000],pr[100][100];
 fgets(word,100,stdin);
 b = strlen(word);
 if(word[b-1] == '\n') {
	 word[b-1] = '\0';
 }
 while(word[count]!='\0' && count < b) {
	 index = 0;
  while(isspace(word[count])) {
	  count++;
  }
  while(!isspace(word[count]) && count < b) {//從字串中取整數
	  tmp[index] = word[count];
	  tmp[index+1] = '\0';  
	  index++;
	  count++;
	}
	//printf("%s ",tmp);
	strcpy(pr[cnt],tmp);
	cnt++; 
 }
 for(i = cnt-1;i>=0;i--) {
	 if(i>0) {
		 printf("%s ",pr[i]);
	 }else{
		 printf("%s\n",pr[i]);
	 }
 }
}
