/*
Como funcionan las bases numericas?
Ejemplo en base 10
293706 
-> 6
-> 00
-> 700
-> 3000
-> 90000
-> 200000
+ = 293706
Ejemplo en base binaria
0b101011
->2^0->1
->2^1->2
->2^2->0
->2^3->8
->2^4->0
->2^5->32
+ = 43
Esta información se agrupa en grupos de 8 bits = 1 byte
Cada variable tiene:
-dirección en memoria
-tipo
-valor
El tipo indica dos cosas:
-tamaño en memoria e interpretación
por ejemplo
01100001, en numero es 97, y en letra es a
Por lo que debemos especificar el tipo para saber como interpretarla
Los distintos tipos tienen un número entero de bytes
Con letras 1byte es suficiente pero con numeros solo tenemos 256 números distintos
Ejemplo con números:
printf("%i %i %f\n", 5, 7, 2.8);
int a = 1287 significa que a es un int 
! A una variable no se le puede cambiar el tipo!
por ejemplo 
printf("a = %i\n",a);
printf("size:  %zu\n",sizeof(int));
size imprime el tamaño, y en este caso imprime 4
Tamaño= 32 bits o 4 bytes
*/
