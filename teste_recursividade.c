#include <stdio.h>


void recursivo(int numero){
    if (numero > 0){
        printf("%d \n", numero); // depois imprime
        recursivo(numero - 1);  // chamada recursiva primeiro
        
    }
}

int main(){

recursivo(5);



}