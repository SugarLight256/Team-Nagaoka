#include <stdio.h>

int main(void){

	int n;
	
	while(1){
		
		scanf("%d",&n);
		
		if(n > 50){
			printf("���͂��ꂽ���l��50�����傫���ł�\n");
		}else if(n < 50){
			printf("���͂��ꂽ���l��50�����������ł�\n");
		}else{
			break;
		}
	}
	return 0;
}