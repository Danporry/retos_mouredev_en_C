/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 */

#include <unistd.h>

char inv_str(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
        i++;
    while(i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    return (0);    
}

int main()
{
    inv_str("Esta es una funcion que invierte una cadena de texto");
    write(1, "\n", 1);
    return 0;
}