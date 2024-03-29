#include <stdio.h>

int main() {
    // Declarar um ponteiro
    int *ptr;

    // Diferenciar um ponteiro de uma variável comum
    int x = 10;
    ptr = &x;

    // Associar o ponteiro a um endereço de memória
    printf("Endereço de x: %p\n", (void *)&x);
    printf("Endereço armazenado no ponteiro ptr: %p\n", (void *)ptr);

    // Acessar o conteúdo apontado por um ponteiro
    int y = *ptr;
    printf("Valor de x acessado por meio do ponteiro ptr: %d\n", y);

    // Realizar operações com ponteiros
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr_array = array; // O nome do array é um ponteiro para o primeiro elemento do array
    printf("O primeiro elemento do array é: %d\n", *ptr_array);
    ptr_array++; // Avançar o ponteiro para o próximo elemento
    printf("O segundo elemento do array é: %d\n", *ptr_array);

    // Utilizar ponteiros genéricos
    void *generic_ptr;
    int num = 20;
    char ch = 'A';
    generic_ptr = &num;
    printf("Conteúdo do ponteiro genérico apontando para um inteiro: %d\n", *(int *)generic_ptr);
    generic_ptr = &ch;
    printf("Conteúdo do ponteiro genérico apontando para um caractere: %c\n", *(char *)generic_ptr);


    // Utilizar o conceito de ponteiro para ponteiro
    int **ptr_ptr;
    int z = 30;
    int *ptr_z = &z;
    ptr_ptr = &ptr_z;
    printf("Valor de z acessado por meio do ponteiro para ponteiro: %d\n", **ptr_ptr);

    return 0;
}
