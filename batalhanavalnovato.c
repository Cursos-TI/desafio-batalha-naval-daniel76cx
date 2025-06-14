#include <stdio.h>

int main(int argc, char const *argv[])
{
    //introdução de como vai ser o tabuleiro para melhor visualização
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
//Definindo valor da linha e coluna na apresentação
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    for (int linha = 0; linha < 10; linha++)
    {
        if (linha == 3)
        {
            for (int coluna = 0; coluna < 10; coluna++)
            {
                if (coluna == 3)
                {
                    tabuleiro[linha][coluna] = 3;
                    tabuleiro[linha][coluna + 1] = 3;
                    tabuleiro[linha][coluna + 2] = 3;
                }
            }
        }
    }
//Introduzindo Movimento Horizontal = Navio Horizontal
    printf("Movimento Horizontal\n");

    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    //Somando a linha para demonstrar o restante do navio
    for (int linha = 0; linha < 10; linha++)
    {
        if (linha == 5)
        {
            for (int coluna = 0; coluna < 10; coluna++)
            {
                if (coluna == 6)
                {
                    tabuleiro[linha][coluna] = 3;
                    tabuleiro[linha + 1][coluna] = 3;
                    tabuleiro[linha + 2][coluna] = 3;
                }
            }
        }
    }
//Introduzindo Movimento Vertical = Navio Vertical
    printf("Movimento Vertical\n");

    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
    //Retornando todo movimento dos dois navios o apresentando no terminal
}
