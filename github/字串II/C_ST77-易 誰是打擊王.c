#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char line[1024];
	int a = 0,i = 0,j = 0,max_index = 0;
	int score[1000][5];
	float rate = 0,max = 0;
	while(scanf("%d",&a)!=EOF){
			if(a == 0) {
			    break;
			}
			max = 0;
			max_index = 0;
			for(j = 0;j<a;j++) {
					scanf("%d %d %d",&score[j][0],&score[j][1],&score[j][2]);
			}
			for(i = 0;i<a;i++) {
					rate = 	(float)score[i][2] / score[i][1];
					if(max < rate && score[i][1] >= 50) {			 //大於rate且打數超過50
							max = rate;
							max_index = i;
						}else if(max == rate){
								if(score[i][2] > score[max_index][2]) {	 //rate相同比較安打數
							 			max = rate;
										max_index = i;
								}
						}
						
					}
			if(max == 0) {			//max值沒換過，大嘉君不符合條件
							printf("NULL\n");
			}else{
							printf("%d\n",score[max_index][0]);
			}
	}
}



