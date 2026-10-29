#include <stdio.h>

def struct {
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
	printf("Matricula: ");
	scanf("%d", Funcionario.matricula);
	
	
}
