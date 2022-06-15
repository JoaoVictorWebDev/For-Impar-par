#include <stdio.h>

int main(){
    printf("Obrigado por usar meu Programa!");
    
    int incial,final,contador,pares = 0;
    printf("\n Digite o Numero para iniciar \n");
    scanf(" %d" , &incial);
    printf("\nDigite o Numero Final \n" );
    scanf(" %d", &final);

    while(final <= incial){
        printf("Digite um valor valido maior que o inicial");
        printf("\n Digite o numero \n");
        scanf(" %d", final);

    }
    
    for(contador = incial; contador <= final; contador ++){
        if (contador %2 == 0){
            printf("O numero %d é PAR \n",contador);
            pares++;    
        }else{
            printf("O numero %d é impar \n",contador);
        }
    }
    printf("A quantidade  de numeros pares \n é %d",pares);
    return(0);
}