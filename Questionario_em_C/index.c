#include <stdio.h>

int main()
{

    int acertos = 0, tentativas = 3, pergunta = 1, alternativa_selecionada;

    char pergunta1[][300] = {"O que e clorofila?", "1 - E a respiracao da planta", "2 - E a reproducao da planta", "3 - E o alimento da planta", "4 - A parte verde da planta"}, pergunta2[][300] = {"Qual e a molecula da agua?", "1 - COH", "2 - COOH", "3 - H2O", "4 - H2OH"}, pergunta3[][300] = {"Quais sao as camadas da terra?", "1 - Crosta, Manto e nucleo", "2 - Crosta, Manto e magma", "3 - Crosta externa/interna e Manto", "4 - Crosta, Manto, nucleo interno e superficial"}, pergunta4[][300] = {"Quais dessas obras fazem parte do romantismo brasileiro?", "1 - O alienista, Ultimos cantos e a Moreninha", "2 - O guarani, Ursula, Iracema", "3 - Inocencia, Dom Casmurro, Memorias postumas de Bras Cubas", "4 - Cartas na rua, Misto quente, Numa fria"}, pergunta5[][300] = {"Quem pintou a obra Amendoeira em flor?", "1 - Leonardo da Vinci", "2 - Monet", "3 - Michelangello", "4 - Van Gogh"}, pergunta6[][300] = {"Qual a formula da relacao de Euler?", "1 - V + F = A - 2", "2 - V + F = A + 2", "3 - V - F = A * 2", "4 - V * F = A - 2"}, pergunta7[][300] = {"Em que ano Pernambuco declarou sua separacao da colonia portuguesa?", "1 - 1808", "2 - 1954", "3 - 1817", "4 - 1400"};

    while (tentativas > 0 && acertos < 5)
    {
        switch (pergunta)
        {
        case 1:
            printf("Pergunta: \n");
            printf("%s \n", pergunta1[0]);
            printf("%s \n", pergunta1[1]);
            printf("%s \n", pergunta1[2]);
            printf("%s \n", pergunta1[3]);
            printf("%s \n", pergunta1[4]);
            break;
        case 2:
            printf("Pergunta: \n");
            printf("%s \n", pergunta2[0]);
            printf("%s \n", pergunta2[1]);
            printf("%s \n", pergunta2[2]);
            printf("%s \n", pergunta2[3]);
            printf("%s \n", pergunta2[4]);
            break;
        case 3:
            printf("Pergunta: \n");
            printf("%s \n", pergunta3[0]);
            printf("%s \n", pergunta3[1]);
            printf("%s \n", pergunta3[2]);
            printf("%s \n", pergunta3[3]);
            printf("%s \n", pergunta3[4]);
            break;
        case 4:
            printf("Pergunta: \n");
            printf("%s \n", pergunta4[0]);
            printf("%s \n", pergunta4[1]);
            printf("%s \n", pergunta4[2]);
            printf("%s \n", pergunta4[3]);
            printf("%s \n", pergunta4[4]);
            break;
        case 5:
            printf("Pergunta: \n");
            printf("%s \n", pergunta5[0]);
            printf("%s \n", pergunta5[1]);
            printf("%s \n", pergunta5[2]);
            printf("%s \n", pergunta5[3]);
            printf("%s \n", pergunta5[4]);
            break;
        case 6:
            printf("Pergunta: \n");
            printf("%s \n", pergunta6[0]);
            printf("%s \n", pergunta6[1]);
            printf("%s \n", pergunta6[2]);
            printf("%s \n", pergunta6[3]);
            printf("%s \n", pergunta6[4]);
            break;
        case 7:
            printf("Pergunta: \n");
            printf("%s \n", pergunta7[0]);
            printf("%s \n", pergunta7[1]);
            printf("%s \n", pergunta7[2]);
            printf("%s \n", pergunta7[3]);
            printf("%s \n", pergunta7[4]);
            break;
        default:
            printf("Error");
            break;
        }
        printf("Digite a resposta: ");
        scanf("%d", &alternativa_selecionada);
        switch (pergunta)
        {
        case 1:
            if (alternativa_selecionada == 4)
            {
                acertos = acertos + 1;
                printf("Acertou, tentativas: %d \n", tentativas);
            }
            else
            {
                tentativas = tentativas - 1;
                printf("errou menos uma tentativa!tentativas: %d \n", tentativas);
            }
            break;
        case 2:
            if (alternativa_selecionada == 3)
            {
                acertos = acertos + 1;
                printf("Acertou, tentativas: %d \n", tentativas);
            }
            else
            {
                tentativas = tentativas - 1;
                printf("errou menos uma tentativa! tentativas: %d \n", tentativas);
            }
            break;
        case 3:
            if (alternativa_selecionada == 1)
            {
                acertos = acertos + 1;
                printf("Acertou, tentativas: %d \n", tentativas);
            }
            else
            {
                tentativas = tentativas - 1;
                printf("errou menos uma tentativa! tentativas: %d \n", tentativas);
            }
            break;
        case 4:
            if (alternativa_selecionada == 2)
            {
                acertos = acertos + 1;
                printf("Acertou, tentativas: %d \n", tentativas);
            }
            else
            {
                tentativas = tentativas - 1;
                printf("errou menos uma tentativa! tentativas: %d \n", tentativas);
            }
            break;
        case 5:
            if (alternativa_selecionada == 4)
            {
                acertos = acertos + 1;
                printf("Acertou, tentativas: %d \n", tentativas);
            }
            else
            {
                tentativas = tentativas - 1;
                printf("errou menos uma tentativa! tentativas: %d \n", tentativas);
            }
            break;
        case 6:
            if (alternativa_selecionada == 2)
            {
                acertos = acertos + 1;
                printf("Acertou, tentativas: %d \n", tentativas);
            }
            else
            {
                tentativas = tentativas - 1;
                printf("errou menos uma tentativa! tentativas: %d \n", tentativas);
            }
            break;
        case 7:
            if (alternativa_selecionada == 3)
            {
                acertos = acertos + 1;
                printf("Acertou, tentativas: %d \n", tentativas);
            }
            else
            {
                tentativas = tentativas - 1;
                printf("errou menos uma tentativa! tentativas: %d \n", tentativas);
            }
            break;
        }
        pergunta = pergunta + 1;
    }
    if (tentativas <= 0)
    {
        printf("Derrotado!");
    }
    else
    {
        printf("Ganhou!");
    }

    return 0;
}