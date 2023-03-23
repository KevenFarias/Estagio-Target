#include <stdio.h>

main(){
	int num, anterior = 1,atual = 0, prox = 0;
	
	printf("Digite um numero da sequencia de fibonacci : ");
	scanf("%d", &num);
	
	for (int i = 0; atual < num; i++){
		prox = anterior + atual;
		anterior = atual;
		atual = prox;
	}
	if (atual == num)
		printf("O numero pertence a sequencia.");
	else
		printf("O numero nao pertence a sequencia.");	
}
