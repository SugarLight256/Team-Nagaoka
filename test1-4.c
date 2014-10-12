#include <stdio.h>

int main(void){

	int h,w;

	for(h=0;h<=5;h++){
		for(w=0;w<=h;w++){
			printf("-");
		}
		printf("\n");
	}
	return 0;
}