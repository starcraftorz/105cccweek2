#include <stdio.h>

int main(){
	int in, s, i;
	
	printf("請輸入判斷數:");
	scanf("%d", &in);
	
	for(i=in;i>0;i--){
		if(in%i==0){
			s = s + 1;
		}
	}
	
	if(s>2 || s==1 || s==0){
		printf("不是質數\n");
	}else {
		printf("是質數\n");
	}
	
	return 0;                 //變數換位時 輸出會有問題 
}
