#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float num1, num2;
    char op;

    // Lê os valores de entrada
    printf("Insira o primeiro número: ");
    scanf("%f", &num1);
    printf("Insira o segundo número: ");
    scanf("%f", &num2);
    printf("Insira a operação (+, -, *, /): ");
    scanf(" %c", &op);

    // Realiza o cálculo de acordo com a operação selecionada
    float resultado;
    if (op == '+')
    {
        resultado = num1 + num2;
    }
    else if (op == '-')
    {
        resultado = num1 - num2;
    }
    else if (op == '*')
    {
        resultado = num1 * num2;
    }
    else if (op == '/')
    {
        resultado = num1 / num2;
    }
    else
    {
        printf("Operação inválida!\n");
        return 1;
    }

    // Exibe o resultado na tela
    printf("Resultado: %f\n", resultado);

    return 0;
}
