#include <stdio.h>

int main(){
	int in, s, i;
	
	printf("�п�J�P�_��:");
	scanf("%d", &in);
	
	for(i=in;i>0;i--){
		if(in%i==0){
			s = s + 1;
		}
	}
	
	if(s>2 || s==1 || s==0){
		printf("���O���\n");
	}else {
		printf("�O���\n");
	}
	
	return 0;                 //�ܼƴ���� ��X�|�����D 
}
