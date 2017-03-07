#include <stdio.h> 
int main(){ 
	int i, j; 
	int x, y; 
	int A[10][10], B[10][10]; 
	
	printf("請輸入矩陣行數=>"); 
	scanf("%d", &x); 
	printf("請輸入矩陣列數=>"); 
	
	scanf("%d", &y); 
	for(i = 0; i < x; i++) { 
		for(j = 0; j < y; j++) { 
			printf("A[%d][%d]=>", i, j); 
			scanf("%d", &A[i][j]); 
		} 
	} 
	
	for (i = 0; i < y; i++) { 
		for (j = 0; j < x; j++) { 
			B[i][j] = A[j][i];
			printf("B[%d][%d]=%d  ", i, j, B[i][j]);
		} 
		printf("\n"); 
	} 
	
	return 0;                //參考網路上 不太會 
} 

