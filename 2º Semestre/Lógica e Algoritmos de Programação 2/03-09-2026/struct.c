#include <stdio.h>
#include <string.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

typedef struct {
	char nome[20];
	int carga_horaria;
} Curso;

typedef struct {
	char nome[50];
	char ra[20];
	Data data_cadastro;
	Curso curso;
} Aluno;

int main(){
	
	Aluno aluno1;
	printf("Cadastro de aluno:\n");
	
	printf("Nome: ");
	fgets(aluno1.nome, 50, stdin);
	
	printf("RA: ");
	fgets(aluno1.ra, 20, stdin);
	
	printf("Dia: ");
	scanf("%d", &aluno1.data_cadastro.dia);
	
	printf("Mes: ");
	scanf("%d", &aluno1.data_cadastro.mes);
	
	printf("Ano: ");
	scanf("%d", &aluno1.data_cadastro.ano);
	getchar();
	
	printf("Curso: ");
	fgets(aluno1.curso.nome, 50, stdin);
	
	printf("Carga Horaria: ");
	scanf("%d", &aluno1.curso.carga_horaria);
	
}
