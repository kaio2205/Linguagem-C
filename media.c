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