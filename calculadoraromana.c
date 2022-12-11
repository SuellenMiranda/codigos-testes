/*Uma calculadora romana em c é um programa escrito na linguagem de programação C que implementa uma calculadora que usa o sistema de numeração romano em vez do sistema de numeração decimal. O sistema de numeração romano é um sistema de numeração que foi usado pelos romanos antigos e é composto por sete símbolos: I, V, X, L, C, D e M. Esses símbolos representam os números 1, 5, 10, 50, 100, 500 e 1000, respectivamente.
Aqui está um exemplo básico de um código que implementa uma calculadora romana em C:*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Declaração das variáveis
    char num1[20], num2[20];
    char op;

    // Lê os valores de entrada
    printf("Insira o primeiro número: ");
    scanf("%s", num1);
    printf("Insira o segundo número: ");
    scanf("%s", num2);
    printf("Insira a operação (+, -, *, /): ");
    scanf(" %c", &op);

    // Converte os números romanos para decimais
    int dec1 = 0, dec2 = 0;
    for (int i = 0; i < strlen(num1); i++)
    {
        if (num1[i] == 'I')
        {
            dec1 += 1;
        }
        else if (num1[i] == 'V')
        {
            dec1 += 5;
        }
        else if (num1[i] == 'X')
        {
            dec1 += 10;
        }
        else if (num1[i] == 'L')
        {
            dec1 += 50;
        }
        else if (num1[i] == 'C')
        {
            dec1 += 100;
        }
        else if (num1[i] == 'D')
        {
            dec1 += 500;
        }
        else if (num1[i] == 'M')
        {
            dec1 += 1000;
        }
    }
    for (int i = 0; i < strlen(num2); i++)
    {
        if (num2[i] == 'I')
        {
            dec2 += 1;
        }
        else if (num2[i] == 'V')
        {
            dec2 += 5;
        }
        else if (num2[i] == 'X')
        {
            dec2 += 10;
        }
        else if (num2[i] == 'L')
        {
            dec2 += 50;
        }
        else if (num2[i] == 'C')
        {
            dec2 += 100;
        }
        else if (num2[i] == 'D')
        {
            dec2 += 500;

