#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char fileiras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char *assentos_ocupados[] = {"1a", "3b", "7c", "2g", "1e", "2e", "3e", "5j", "9j"};
    int colunas = 10, i, a, b, tamanho_fileiras, tamanho_ocupados, init = 0;

    tamanho_fileiras = sizeof(fileiras) / sizeof(fileiras[0]);
    tamanho_ocupados = sizeof(assentos_ocupados) / sizeof(assentos_ocupados[0]);

    char string_da_vez[4], string_terminal[] = "fim";

    while (init == 0)
    {
        printf("Insira os assentos ocupados: ");
        fgets(string_da_vez, sizeof(string_da_vez), stdin);

        if (strcmp(string_da_vez, string_terminal) == 0)
        {
            init = 1;
            printf("Listando os assentos\n");
            Sleep(2000);
        }
        else
        {
            assentos_ocupados[tamanho_ocupados] = strdup(string_da_vez);
            tamanho_ocupados++;
            system("cls");
        }
    }

    printf("\n===== Assentos =====\n\n");

    for (i = 0; i < tamanho_fileiras; i++)
    {
        for (a = 0; a < colunas; a++)
        {
            char assento[4];
            int state = 0;
            sprintf(assento, "%d%c", a + 1, fileiras[i]);
            printf("|  %s ", assento);
            for (b = 0; b < tamanho_ocupados; b++)
            {
                if (state == 0)
                {
                    if (strcmp(assento, assentos_ocupados[b]) == 0)
                    {
                        state = 1;
                    }
                }
            }
            if (state == 0)
            {
                printf("Livre |\n");
            }
            else
            {
                printf("Ocupado |\n");
            }
        }
        printf("=== Fim da fileira === \n");
    }

    return 0;
}
