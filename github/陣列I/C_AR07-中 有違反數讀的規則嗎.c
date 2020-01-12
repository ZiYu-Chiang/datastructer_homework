#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
 int a = 0,b = 0,i = 0,g = 0,j = 0,z = 0,place = 0,block_num = 1;
 int word[9][9],tmp[10],false = 0;
 char line[12],change[3];
 change[1] ='\0';
 for(j = 0;j<9;j++) {
	fgets(line,12,stdin); //用行來讀取
	a = 0;
	for(z = 0;z<9;z++) {
		if(isdigit(line[a])) {
			change[0] = line[a];
			word[j][z] = atoi(change);
			a++;
		}
	}
	tmp[j] = 0;//標籤用
 }
 tmp[9] =0;//補標
 for(i = 0;i<9;i++) {	//判斷row的錯誤
	 for(j = 0;j<9;j++) {
		 place = word[i][j];
		 if(tmp[place] == 0 && place != 0) {
			 tmp[place] = 1;
		 }else if(tmp[place] == 1 && place != 0){
			 printf("row%d #%d\n",i+1,word[i][j]);
			 false = 1;
			 break;
		 }
	 }
	 for(z = 0;z<10;z++) {//標籤初始化
		 tmp[z] = 0;
	 }
 }
 for(j = 0;j<9;j++) {		 //判斷columne的錯誤
	 for(i = 0;i<9;i++) {
		 place = word[i][j];
		 if(tmp[place] == 0 && place != 0) {
			 tmp[place] = 1;
		 }else if(tmp[place] == 1 && place !=0){
			 printf("column%d #%d\n",j+1,word[i][j]);
			 false = 1;
			 break;
		 }
	 }
	 for(z = 0;z<10;z++) {//標籤初始化
		 tmp[z] = 0;
	 }
 }
 for(i = 0;i<7;i = i+3) {	   //block判斷
	 for(j = 0;j<7;j = j+3,block_num++) {
		 for(z = 0;z<3;z++) {
			 for(g = 0;g<3;g++) {
				 //printf("%d %d %d %d ",i,j,i+z,j+g);
				 place = word[i+z][j+g];
				 //printf("aa%d %d\n",place,tmp[place]);
				 if(tmp[place] == 0 && place != 0) {
					 tmp[place] = 1;
				 }else if(tmp[place] == 1 && place !=0){
					 printf("block%d #%d\n",block_num,place);
					 false = 1;
					 tmp[place] = 2;
					 break;
				 }
			 }
			 if(tmp[place] == 2 && place != 0) {
				 break;
			 }
		 }
		 
		 for(z = 0;z<10;z++) {//標籤初始化
		 tmp[z] = 0;
	 }
	}
 }
 if(false == 0) {
	 printf("true\n");
 }
 return 0;
}			
