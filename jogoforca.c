
/*
**********************************************
| CÓDIGO FEITO POR: MURILLO MONTEIRO PEDROSO |
**********************************************
*/

#include <stdio.h>
#include <string.h>
int main()
{

    // declaraç?o de variáveis
    int i;                                     //variável para usar no for
    int p = 0;                                 //verifica se vai descontar vida do jogador
    char palavra[20];                          //palavra escolhida
    char letra;                                // letra chutada pelo jogador 2
    int vida = 6;                              //vida inicial
    int tamanho;                               //tamanho da string(Determina o tamanho do vetor)
    char traco[20] = "_____________________ "; // uma string que vai armazenar os traços
    char palavra2[20];
    int pontos = 0; //ele sempre se iguala ao tamanho da string(determina quando o jogador vence)
    //

    printf("Olá jogador! Digite uma palavra para começarmos a jogar:\n"); //pega a palavra com o jogador 1
    scanf("%s", &palavra2);                                               //armazena a palavra
    printf("\n\n\n\n\n\n\n\n\n");                                         //pula linha

    tamanho = strlen(palavra2); //determina o tamanho ()= largura) da string

    for (i = 0; i <= tamanho; i++)
    {
        palavra[i + 1] = palavra2[i]; //ajusta o vetor para ler a partir do segundo item
    }

    do //repetir a pergunta pro jogador até o mesmo ficar sem vida (enforcado)
    {
        switch (vida) //switch para mostrar a forca
        {
        case (6):
            printf("\n\n\n\n_________________|\n|\t\t\n|\t\t\n|\t\t \n|\t\t\n|\n|\n|\t  ");

            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", traco[i]);
            }
            break;

        case (5):
            printf("\n\n\n\n_________________|\n|\t\t @\n|\t\t\n|\t\t \n|\t\t\n|\n|\n|\t  ");

            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", traco[i]);
            }
            break;

        case (4):
            printf("\n\n\n\n_________________|\n|\t\t @\n|\t\t |\n|\t\t \n|\t\t\n|\n|\n|\t  ");

            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", traco[i]);
            }
            break;

        case (3):
            printf("\n\n\n\n_________________|\n|\t\t @\n|\t\t/|\n|\t\t \n|\t\t\n|\n|\n|\t  ");

            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", traco[i]);
            }
            break;

        case (2):
            printf("\n\n\n\n_________________|\n|\t\t @\n|\t\t/|\\\n|\t\t \n|\t\t\n|\n|\n|\t  ");

            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", traco[i]);
            }
            break;

        case (1):
            printf("\n\n\n\n_________________|\n|\t\t @\n|\t\t/|\\\n|\t\t ^\n|\t\t/\n|\n|\n|\t  ");

            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", traco[i]);
            }
            break;

        case (0):
            printf("\n\n\n\n_________________|\n|\t\t @\n|\t\t/|\\\n|\t\t ^\n|\t\t/ \\\n|\n|\t\t***ENFORCADO***\n|\n|  A palavra era: ");

            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", palavra[i]);
            }

            return 0;

            break;
        }

        p = 0; // zerador de ponto para tirar vida
        printf("\n");
        printf("Tente adivinhar uma letra: "); //pede letra pro usuário
        scanf("%s", &letra);

        for (i = 1; i <= tamanho; i++) //repete a verificaç?o pela palavra (string) inteira
        {

            if (letra == palavra[i]) //verifica se a letra está presente na palavra
            {

                traco[i] = letra; //se tiver ele muda de _ para a letra
                p++;              //impede que o jogador perca vida

                pontos++; // para somar nos pontos para ganhar
            }
        }
        if (p <= 0) //se n?o tiver nenhum ponto somado (nenhuma letra foi acertada) o jogador perde vida
        {
            vida--; //desconta a vida
        }

        if (pontos == tamanho)
        {
            printf("\n\n\n\n\n\n\n\t\t\t***PARABÉNS VOCÊ VENCEU!!!***\n\n\n"); //vitória

            printf("\t\t\tA palavra era: ");
            for (i = 1; i <= tamanho; i++)
            {
                printf(" %c", traco[i]);
            }

            return 0;
        }

    } while (vida >= 0);

    return 0;
}