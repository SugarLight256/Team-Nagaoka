#include <stdio.h>

int main(void){

	char input[10];
	char seigyo[]="�d�q����H�w��";
	int tf;
	
	scanf("%s",&input);
	
	tf=strcmp(input,seigyo);
	
	if(tf==0){
		printf("���͂��ꂽ������͓d�q����H�w�Ȃł�");
	}else{
		printf("���͂��ꂽ������͓d�q����H�w�Ȃł͂���܂���");
	}
	
	return 0;
}
