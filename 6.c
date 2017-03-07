#include <stdio.h>

int main(){
	int one[2][2] = {1,2,3,4};
	int two[2][2] = {1,1,1,1};
	int sum[2][2];
	int i, j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = one[i][j] + two[i][j];
			printf("sum[%d][%d] = %d\n", i, j, sum[i][j]);
		}
	}
	
	return 0;
}
