#include <stdio.h>

int main(void){

	int n;
	
	while(1){
		
		scanf("%d",&n);
		
		if(n > 50){
			printf("“ü—Í‚³‚ê‚½”’l‚Í50‚æ‚è‚à‘å‚«‚¢‚Å‚·\n");
		}else if(n < 50){
			printf("“ü—Í‚³‚ê‚½”’l‚Í50‚æ‚è‚à¬‚³‚¢‚Å‚·\n");
		}else{
			break;
		}
	}
	return 0;
}