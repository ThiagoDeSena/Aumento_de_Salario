#include <stdio.h>
#include <stdlib.h>
//3. Ler o valor do salário de um funcionário e acrecentar um aumento de acordo com o plano de aumento que ousuário escolher (10%,15% ou 20%)
int main(){
	float sal_atual=0, sal_novo=0;
	int i;
	printf("3. Ler o valor do salário de um funcionário e acrecentar um aumento de acordo com o plano de aumento que ousuário escolher (10 ,15 ou 20 porcento)\n\n");
	printf("Digite o salario atual do funcionario: ");
	scanf("%f",&sal_atual);
	printf("\nEscolha o plano de aumento que voce quer dar para o funcionario:");
	printf("\n(1) 10 porcento de aumento.");
	printf("\n(2) 15 porcento de aumento.");
	printf("\n(3) 20 porcento de aumento.\n");
	scanf("%d",&i);
	
	switch(i){
		case 1:
			printf("Novo salario do funcionario vai ser = %.2f\n",sal_atual*1.10);
			break;
		case 2:
			printf("Novo salario do funcionario vai ser = %.2f\n",sal_atual*1.15);
			break;
		case 3:
			printf("Novo salario do funcionario vai ser = %.2f\n",sal_atual*1.20);
			break;
		default:
		 	printf("Opcao invalida! Digite uma opcao valida!");
		 	break;
		 	
	}
	system("pause");
	
	return 0;

	
}
