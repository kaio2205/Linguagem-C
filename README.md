# Estudo da linguagem em C
## Este repositório será publicado arquivos escritos em C   
<img src="https://codigo35.com/wp-content/uploads/2023/09/695px-C_Programming_Language.svg_.png" heigth="150" width= "300">

### abaixo é apresentado os arquivos deste repósitorio 

### hello.c


```c
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0;
}
```

### primeiro.c

```c
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
```

### operaçoes.c

```c
#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subitrair;
    int multiplicar;
    int divisao;
    printf("Digite um numero e tecle enter:\n");
    scanf("%d",&n1);

    printf("digite outro numero e tecle enter:\n");
    scanf("%d",&n2);
    
    soma = n1 +n2;
    subitrair= n1 -n2;
    multiplicar- n1* n2;
    divisao= n1 /n2;
    printf("0 resultado da soma é de %d\n",soma);
    printf("0 resultado da subitraçao é de %d\n",subitrair);
    printf("0 resultado da multiplicaçao é de %d\n",multiplicar);
    printf("0 resultado da divisao é de %d\n",divisao);

    return 0;

}
```

### Desconto do produto.c 

```c
#include<stdio.h>
int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;
    printf ("digite o preço do produto\n");
    scanf("%f",&preco);
    printf("digite o desconto do produto\n");
    scanf("%f",&percentual);

    resultado = preco -  (preco * (percentual / 100));   

    vdesc = preco - resultado;
    printf("O preço final do produto com desconto de  %2.2f aplicado é de %2.2f\n", vdesc,resultado);
    return 0;
```

### media.c

```c
#include <stdio.h> 
int main(){
float n1;
float n2;
float n3;
float n4;
float resultado;

printf("digite a nota que deseja e tecle enter\n");
scanf ("%f",&n1);

printf("digite a segunda nota  e tecle enter\n");
scanf ("%f",&n2);

printf("digite a terceira nota que deseja e tecle enter\n");
scanf ("%f",&n3);

printf("digite a ultima nota que deseja e tecle enter\n");
scanf ("%f",&n4);

resultado = (n1+ n2 +n3 +n4 )/4;

printf("resultado final das notas %2.2f\n",resultado);

return 0;

}
```
### Parimpar 
```c
#include <stdio.h> 

int main(){
    int num;
    printf ("Digite o numero: \n");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("Este numero é par\n");
    } 
    else {
        printf("Este numero é impar\n");
    }
    return 0;
}
```
