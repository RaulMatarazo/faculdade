#include<stdio.h>
#define TAM 5

typedef struct {
	int codigo;
	char nome[30];
} Curso;

typedef struct {
	int ra;
	char nome[50];
	Curso Curso;
} Aluno;

Aluno aluno[TAM];
Curso curso[TAM];
int i = 0;

void ListarCursos(){
	printf("Listagem de Cursos\n");
	printf("========================\n");
	for (i = 0; i < TAM; i++){
		printf("[%d] %s\n", curso[i].codigo, curso[i].nome);
	}
	printf("========================\n");
}

void ListarAlunos(){
	printf("Listagem de Alunos\n");
	printf("========================\n");
	for (i = 0; i < TAM; i++){
		printf("[%d] %s;%d;%s\n", aluno[i].ra, aluno[i].nome, aluno[i].Curso.codigo, aluno[i].Curso.nome);
	}
	printf("========================\n");
}

void CadastrarCurso(){
	int a = 0;
	for (a = 0; a < TAM; a++){
		printf("\n========================\n");
		printf("Cadastro de Curso\n", a + 1);
		curso[a].codigo = a + 1;
		printf("CODIGO: %d\n", curso[a].codigo);
		printf("NOME: ");
		scanf("%s", &curso[a].nome);
		printf("========================\n");
	}
}

void CadastrarAluno(){
	int a = 0;
	int curso_selecionado;
	int j;
	
	for (a = 0; a < TAM; a++){
		printf("\n========================\n");
		printf("Cadastro de Aluno\n", a + 1);
		aluno[a].ra = a + 1;
		printf("RA: %d\n", aluno[a].ra);
		printf("NOME: ");
		scanf("%s", &aluno[a].nome);
		ListarCursos();
		
		printf("CURSO: ");
		scanf("%d", &curso_selecionado);
		
		for (j = 0; j < TAM; j++){
			if (curso[j].codigo == curso_selecionado){
				aluno[a].Curso = curso[j];
			}
		}
		
		printf("========================\n");
	}
}

void PesquisarAlunos(){
	int ra = 0;
	int encontrou = 0;
	
	printf("Pesquisa de Alunos\n");
	printf("RA: ");
	scanf("%d", &ra);
	for (i = 0; i < TAM; i++){
		if (aluno[i].ra == ra){
			printf("[%d] %s\n", aluno[i].ra, aluno[i].nome);
			encontrou = 1;
			break;
		}				
	}
	if (encontrou == 0){
		printf("Nenhum aluno encontrado");
	}
}

void AlterarNomeAluno(){
	int ra = 0;
	int encontrou = 0;
	char nome[30];
	
	printf("Alterar Nome Aluno\n");
	printf("RA: ");
	scanf("%d", &ra);
	
	for (i = 0; i < TAM; i++){
		if (aluno[i].ra == ra){
			encontrou = 1;
			break;
		}				
	}
	
	if (encontrou == 1) {
		printf("Nome Atual: %s\n", aluno[ra - 1].nome);
		printf("Novo Nome: ");
		scanf("%s", &aluno[ra - 1].nome);
		printf("Atualizacao Concluida");
	}
	if (encontrou == 0){
		printf("Nenhum aluno encontrado");
	}	
}


int main(){
	
	int opcao = 7;
	
	printf("  | Sistema Escolar |  \n\n");
	
	do {
		printf("[1] Cadastrar Cursos OK\n[2] Cadastrar Alunos\n[3] Listar Cursos OK\n[4] Listar Alunos\n[5] Pesquisar Aluno por RA\n[6] Alterar Nome do Aluno\n[7] Sair\n");	
		printf("Opcao: ");
		scanf("%d", &opcao);
		
		printf("\n");
		
		if (opcao == 7){
			printf("Resposta: Voce escolheu sair. Ate logo.");
			break;
		} else if (opcao == 1) {
			CadastrarCurso();
		} else if (opcao == 2) {
			CadastrarAluno();
		} else if (opcao == 3) {
			ListarCursos();
		} else if (opcao == 4) {
			ListarAlunos();
		} else if (opcao == 5) {
			PesquisarAlunos();
		} else if (opcao == 6) {
			AlterarNomeAluno();
		}
	
		else {
			printf("Resposta: Escolha uma opcao valida");
		}
		
		
		printf("\n\n");
	} while (opcao != 7);	
} 
