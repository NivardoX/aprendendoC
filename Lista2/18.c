#include <stdio.h>
	int main(){
		
	char opc = ' ';	
	float v;

	while(opc != 's'){
		v = 0;		

		printf("\nEscolha uma das opcoes\n");
		printf("a - Km/h para m/s\n");
		printf("b - m/s para K/h\n");
		printf("s - Finalizar\n");
		scanf(" %c", &opc);

		if(opc == 'a'){
			printf("Digite o valor da velocidade em Km/h\n");
			scanf(" %f", &v);
						
			v = v / 3.6;
			printf("Velocidade = %.2f m/s\n", v);
	
		}	else if(opc == 'b'){
				printf("Digite o valor da velocidade em m/s\n");
				scanf(" %f", &v);
							
				v = v * 3.6;
				printf("Velocidade = %.2f Km/h\n", v);

			}	else if(opc == 's'){
					printf("Processo finalizado\n");

				}	else {
						printf("Opcao invalida\n");
		
					}
	}


	return 0;
}
