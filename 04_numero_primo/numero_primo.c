/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */

#include <stdio.h>

int numero_primo(int primo)
{
    int rango = 100;
    int div;
    div = primo - 1;
    if(primo <= rango)
    {
        while((div >= 1) && (primo % div != 0))
        {
            div--;
        }
        if(div == 1)
            printf("%d ", primo);
        
    numero_primo(primo + 1);    
    }
}
int main()
{
    numero_primo(1);
    printf("\n");
    return (0);
}