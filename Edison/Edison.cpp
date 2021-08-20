#include<stdio.h>

int main()
{
	// Definição de variáveis 
	int n1; // criação da variável n1
	int n2; // criação da variável n2
	int resultado;
	int ressub;
	int resmul;
	float resdiv;

	// inicializar as variáveis 
	n1 = 0;
	n2 = 0;
	resultado = 0;
	// atribuição de valores 
	printf("digitar um valor:");
	scanf_s("%d", &n1);
	printf("Você digitou esse valor: %d", n1); 
	printf("\nDigite o segundo valor :");
	scanf_s("%d" , &n2);
	resultado = n1 + n2;
	printf(" O resultado é : %d", resultado);
	ressub = n1 - n2;
	printf(" o ressu é : %d", ressub);
	resmul = n1 * n2;
	printf(" o resmul é : %d", resmul);
	resdiv = n1 / n2;
	printf(" o resdiv é : %d", resdiv);

}
