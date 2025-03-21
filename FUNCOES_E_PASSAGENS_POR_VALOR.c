#include <stdio.h>

void trocar (int valor, int valor2){
    int temp = valor;
    valor = valor2;
    valor2 = temp;
}

int main (){
    int b = 1, n = 2;
    
    printf("Valor original de b = %d \n", b);
    printf("Valor original de n = %d \n", n);
    
    trocar(b, n);
    
    printf("Valor de b após a troca = %d \n", b);
    printf("Valor de n após a troca = %d \n", n);
    
    return 0;
    
    //Esse código serve basicamente para mostrar que, se utilizarmos tentarmos realizar a trocar por valores
    //o código não vai funcionar, é necessário passar os mesmos por referência.
}

