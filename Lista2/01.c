#include <stdio.h>
int main(){

	char c;
	int i,sum = 0;
	
	printf("Digite um char\n");
	scanf("%c", &c);	

	for(i = 0; i < (sizeof(char)*8);i++){
		if((c & 1)%2 == 1){
			sum++;	
		}
		c = c >> 1;
	}

	printf("O total de bits 1 eh %d\n", sum);

	return 0;
}
