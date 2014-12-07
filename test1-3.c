#include <stdio.h>

int main(void){

	char input[10];
	char seigyo[]="電子制御工学科";
	int tf;
	
	scanf("%s",&input);
	
	tf=strcmp(input,seigyo);
	
	if(tf==0){
		printf("入力された文字列は電子制御工学科です");
	}else{
		printf("入力された文字列は電子制御工学科ではありません");
	}
	
	return 0;
}
