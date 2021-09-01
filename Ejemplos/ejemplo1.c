#include <stdio.h>
/*Include es como importar en python */
int main(int arc, char **argv)
/*int, int char son los tipos de parametros que se ejecutarán*/
/* main es una función que ejecutará */
{
    printf("Hello world!\n");
    return 0;
}
/* Se corre en gcc como "nombre.c" -o "nombre que queremos que tenga el archivo ejecutable" */
/* Siempre return 0, todos los programas por convencion deben retornar un entero */