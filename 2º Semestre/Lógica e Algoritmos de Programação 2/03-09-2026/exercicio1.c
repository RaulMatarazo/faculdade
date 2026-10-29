#include <stdio.h>

typedef struct {
	char cidade[40];
	char estado[3];
} Endereco;

typedef struct {
	int codigo;
	char nome[50];
	Endereco endereco;
} Empresa;

typedef struct {
	int matricula;
	char nome[50];
 	char cargo[40];
	float salario;
	Empresa empresa;
} Funcionario;


int main(){
	
	Funcionario funcionario;
	
	printf("Matricula: ");
	scanf("%d", &funcionario.matricula);
	getchar();
	
	printf("Nome: ");
	scanf("%49[^\n]", &funcionario.matricula);
	getchar();
	
	printf("Cargo: ");
	scanf("%39[^\n]", &funcionario.cargo);
	getchar();
	
	printf("Salario: ");
	scanf("%f", &funcionario.salario);
	getchar();
	
	printf("Codigo Empresa: ");
	scanf("%d", &funcionario.empresa.codigo);
	getchar();
	
	printf("Nome Empresa: ");
	scanf("%49[^\n]", &funcionario.empresa.codigo);
	getchar();
	
	printf("Cidade: ");
	scanf("%49[^\n]", &funcionario.empresa.endereco.cidade);
	getchar();
	
	printf("Estado: ");
	scanf("%2[^\n]", &funcionario.empresa.endereco.estado);
	getchar();
	
	return 0;
}
