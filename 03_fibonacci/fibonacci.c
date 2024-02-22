/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */

#include <stdio.h>

int main()
{
    int n;
    n = 48;
    long unsigned x = 0;
    long unsigned y = 1;
    long unsigned z;
    /*int s;*/

    printf("%ld, ", x);
    printf("%ld, ", y);
    while (n != 0)
    {
        z = x + y;
        printf("%ld, ", z);
        x = y;
        y = z;
        n--;
    }
    
    printf("\n");
}