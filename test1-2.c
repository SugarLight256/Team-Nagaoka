#include <stdio.h>

int main(void){

	int n;
	
	while(1){
		
		scanf("%d",&n);
		
		if(n > 50){
			printf("入力された数値は50よりも大きいです\n");
		}else if(n < 50){
			printf("入力された数値は50よりも小さいです\n");
		}else{
			break;
		}
	}
	return 0;
}