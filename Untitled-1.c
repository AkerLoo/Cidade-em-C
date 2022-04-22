#include <stdio.h>
int main ()
{
	int codigo = 1;
	int codigo1;
	int codigo2;
	char ch = 'fim';
	double media1;
	int num_cidade1;
	int num_cidade;
  	double media2;
  	double media3;
  	double num_de_veiculos_de_passeio;
  	double num_de_veiculos_de_passeio2;
  	double num_de_acidentes_de_transito_com_vitimas;
  	double num_de_acidentes_de_transito_com_vitimas2;
  	double media_de_veiculos;
  	double media_de_acidentes;
  	double num_cidade_maior;
  	double num_cidade_menor;

  
	while(codigo == 1){
	printf("============================ City 1 ============================\n");
		printf("codigo da cidade :\n");
		scanf("%d", &codigo1);
		
		printf("numero de veiculos de passeio\n");
		scanf("%lf", &num_de_veiculos_de_passeio);
		
		printf("Digite o numero de acidentes de transito com vitimas\n");
		scanf("%lf",&num_de_acidentes_de_transito_com_vitimas);	
		
	printf("=========================== City 2 ==============================\n");
		printf("codigo da cidade 2:\n");
		scanf("%d", &codigo2);
		
		printf("numero de veiculos de passeio\n");
		scanf("%lf", &num_de_veiculos_de_passeio2);
		
		printf("Digite o numero de acidentes de transito com vitimas\n");
		scanf("%lf",&num_de_acidentes_de_transito_com_vitimas2);	
		
		if(num_de_acidentes_de_transito_com_vitimas > num_de_acidentes_de_transito_com_vitimas2 ){
				num_cidade = 1;
				num_cidade1 = 2;
				num_cidade_maior = num_de_acidentes_de_transito_com_vitimas;
				num_cidade_menor = num_de_acidentes_de_transito_com_vitimas2;
				
		}else if(num_de_acidentes_de_transito_com_vitimas < num_de_acidentes_de_transito_com_vitimas2){
				num_cidade = 2;
				num_cidade1 = 1;
				num_cidade_maior = num_de_acidentes_de_transito_com_vitimas2;
				num_cidade_menor = num_de_acidentes_de_transito_com_vitimas;
				
		}else if(num_de_acidentes_de_transito_com_vitimas = num_de_acidentes_de_transito_com_vitimas2){
				num_cidade = 1;
				num_cidade1 = 2;
				num_cidade_maior = num_de_acidentes_de_transito_com_vitimas;
				num_cidade_menor = num_de_acidentes_de_transito_com_vitimas2;
		};
		
		media1 = ((num_de_veiculos_de_passeio + num_de_veiculos_de_passeio2) /2);
		media2 = ((num_de_acidentes_de_transito_com_vitimas + num_de_acidentes_de_transito_com_vitimas2)/2);
		
		if(num_de_veiculos_de_passeio2 && num_de_veiculos_de_passeio < 2000){
			media3 = (num_de_veiculos_de_passeio + num_de_veiculos_de_passeio2) /2 ;
		}else{
			ch = 'carros acima de 2000 nas duas cidades';
		};
		
		printf("fechar programa digite 0 \n");
		scanf("%d",&codigo);

	                 printf("Maior indice %2.lf cidade: %d | Menor indice %2.lf cidade: %d |\n", num_cidade_maior, num_cidade, num_cidade_menor,num_cidade1);
	                 printf("Media de veiculos nas cidades Juntas : %2.lf \n ",media1);
	                 printf("Media de acidente com vitimas : %2.lf \n", media2);
	                 printf("media de acidente de transito de veiculos menor 2000 : %3.lf\n %c",media3,ch);
	}
	
  return 0;
}