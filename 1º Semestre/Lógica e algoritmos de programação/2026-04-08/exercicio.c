#include<stdio.h>
int main(){
	int codigo, idade, nfilhos;
	float salario;
	float soma_idade = 0;
	int qpessoas = 0;
	float maior = 0;
	int midade = 0;
	int mvelho;
	int tfilhos;
	float media;
	
	do {
		printf("Digite o código do funcionário: ");
		scanf("%d", &codigo);
		if (codigo == -1) break;
		
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		printf("Digite o salario: ");
		scanf("%f", &salario);
		
		printf("Digite o número de filhos: ");
		scanf("%d", &nfilhos);
		
		soma_idade = soma_idade + idade;
		qpessoas++;
		
		if (salario > maior){
			maior = salario;
		}
		
		if (idadade > midade){
			midade = idade;
			mvelho = codigo;
		}
		
		tfilhos = tfilhos + nfilhos;	
		
	} while(codigo != -1);
	
	media = soma_idade / qpessoas;
	
	printf("Média de idade: %d", media);
	printf("Maior salário: %.2f", maior);
	
	printf("Funcionário %d é o mais velho: %d anos", mvelho, midade);
	
	printf("Total de filhos: %d", tfilhos);
	
	return 0;
}