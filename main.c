#include <stdio.h>
#include <stdbool.h>
//Paradgma funcional (função pura)
float sacar(float saldo){
    float saque;
    printf("\nDigite qual valor deseja sacar: ");
    scanf("%f", &saque);
    
    if(saque > saldo){
        printf("Valor indisponivel");
    } else{
        printf("\nSaque realizado com sucesso");
        //Paradgma funcional (imutabilidade)
        return saldo - saque;
    }
}

//Paradgma funcional (função pura)
float depositar(float saldo){
    float deposito;
    printf("\nDigite quanto deseja depositar: ");
    scanf("%f", &deposito);
    
    if(deposito < 0){
        printf("Impossvel depositar valor abaixo de zero");
    }else{
        printf("\nDeposito realizado com sucesso");
        //Paradgma funcional (imutabilidade)
        return saldo + deposito;
    }
}

//Paradgma funcional (função pura)
void consutar_saldo(float saldo){
    printf("\nO saldo disponivel é de: RS%.2f", saldo);
}

int main() {

	float saldo = 0;
	char opcao;
	bool encerrar = false;

	//Paradgma imperativo (código realizado em sequencia)
	do {
		printf("\n\n======== CAIXA ELETRONICO ========\n");
    	printf("==================================\n");
    	printf("1 - sacar\n");
    	printf("2 - Deposicar\n");
    	printf("3 - Consutar valor\n");
    	printf("4 - Sair\n");
    	printf("==================================\n");
    
    	printf("\nDigite o indice da operação que deseja realizar: ");
    	scanf(" %c", &opcao);

		//Paradgma imperativo (condicionais)
		if(opcao == '1') {
		    saldo = sacar(saldo);
		} else if(opcao == '2'){
		    saldo = depositar(saldo);
		} else if(opcao == '3'){
            consutar_saldo(saldo);
		} else if(opcao == '4'){
		    printf("\n\nFinalizando programa...");
		    encerrar = true;
		} else{
		    printf("\nOpcao invalida, por favor selecione uma opcao adequada (1~4)");
		}

	} while(encerrar == false);


		return 0;
	}
