#include <stdio.h>

int main(){
	int i, j, k, l, s;
	int a[6] = {1,2,4,5,6,7};
	
	printf("�п�J���J��:");
	scanf("%d", &i);
	a[6] = i;
	
	for(j=6;j>=0;j--){
		for(k=j-1;k>=0;k--){
			if(a[j]<a[k]){
				s = a[k];
				a[k] = a[j];
				a[j] = s;
			}
		}
	}
	
	for(l=0;l<7;l++){
		printf("a[%d] = %d\n", l, a[l]);
	}
	return 0;                       //�w�j�ƧǪk ���� 
} 
