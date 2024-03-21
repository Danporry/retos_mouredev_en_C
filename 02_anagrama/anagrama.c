/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */
#include <stdio.h>
int comp(int i, int x)
{
    if (i != x)
        printf("%s\n", "Tienen DIFERENTE longitud");
    if (i == x)
        printf("%s\n", "Tienen IGUAL longitud");
    return(0);
}
int igual(char *str1, char *str2)
{
    int i = 0;

    while(str1[i] == str2[i] & str1[i] != '\0')
        i++;
    
    if(str1[i] == '\0' && str2[i] =='\0')
        printf("Son la MISMA palabra");
    else
        printf("Compara si es un anamgrama");
    
    return(i);
}
char anagrama(char *str1, char *str2)
{
    int i = 0;
    int x = 0;

    while (str1[i] != '\0')
        i++;

    while (str2[x] != '\0')
        x++;
    comp(i, x);
    igual(str1, str2);

    return(0);
}




int main()
{
    char *pal1 = "hola";
    char *pal2 = "holaholahola";
    anagrama(pal1, pal2 );
    return(0);

}