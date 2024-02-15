/*
este progama pede o usuarioo um numero qualquer e depois exibe 
o numero na tela 
*/
#include <stdio.h> // biblioteca para trabalhar com entrada e saida de dados 

int main(){
    int idade; //declaraçao de variavel idade do tipo inteiro 
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade); //para pegar o numero digitado pelo usuario  
                        // estamos usando o comando scanf e adicionando
                        // o valor digitado ao endereço de memoria 
                        //da variavel idade. usamos o e-comercial para
                        //referenciar  o endereço de memoria de variavel
                        // idade
    printf("A idade digitada é %d\nEndereço da variavel idade %x\n",idade, &idade);
    return 0;                     
}   