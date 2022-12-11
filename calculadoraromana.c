#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char romano[20];
    int i, numero = 0;
    printf("Digite um numero romano: ");
    scanf("%s", romano);
    for(i = 0; i < strlen(romano); i++)
    {
        if(romano[i] == 'M' || romano[i] == 'm')
            numero += 1000;
        if(romano[i] == 'D' || romano[i] == 'd')
            numero += 500;
        if(romano[i] == 'C' || romano[i] == 'c')
            numero += 100;
        if(romano[i] == 'L' || romano[i] == 'l')
            numero += 50;
        if(romano[i] == 'X' || romano[i] == 'x')
            numero += 10;
        if(romano[i] == 'V' || romano[i] == 'v')
            numero += 5;
        if(romano[i] == 'I' || romano[i] == 'i')
            numero += 1;
    }
    printf("O numero romano %s equivale a %d\n", romano, numero);
    return 0;
}
