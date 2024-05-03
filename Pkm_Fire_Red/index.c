#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int printarDex(char lista[][15], int lenght){

    int a;

    for(a = 0; a < lenght; a++){
        printf("%s#%d \n", lista[a], a+1);
    }

    return 0;
}

int getString(char stringLc[100]){
    printf("%s \n", stringLc);
    getchar();
    printf("Programa encerrado");
    return 0;
}

void printMenu(int systemclear){
    printf("1. Meus Pokemons\n");
    printf("2. Pokedex\n");
    printf("3. Capturar pkms\n");
    printf("12. sair\n");
}

const char* sistema_operacional() {
    #if defined(_WIN32) || defined(_WIN64)
        return "Windows";
    #elif defined(__APPLE__)
        return "macOS";
    #elif defined(__linux__)
        return "Linux";
    #else
        return "Desconhecido";
    #endif
}

int systemClearSwitch(){
    const char* typeOfSystem = sistema_operacional();

    if(strcmp(typeOfSystem, "Windows") == 0) {
        return 1;
    }
    if(strcmp(typeOfSystem, "macOS") == 0) {
        return 0;
    }
    if(strcmp(typeOfSystem, "Linux") == 0) {
        return 0;
    }
    if(strcmp(typeOfSystem, "Desconhecido") == 0) {
        return 0;
    }
}

int main () {

    char pokedex[][15] = {"Bulbasaur", "Ivysaur", "Venusaur", "Charmander", "Vermilion", "Charizard", "Squirtle", "Warturtle", "Blastoise"}, myPokemons[][15] = {};
    int pokedexLength = sizeof(pokedex) / sizeof(pokedex[0]), myPokemonsLength = sizeof(myPokemons) / sizeof(myPokemons[0]), displayOn = 1, systemclear = systemClearSwitch(), inputNum;

    // printarDex(pokedex, pokedexLength);
    
    while(displayOn == 1){

        //atualizando variaveis
        myPokemonsLength = sizeof(myPokemons) / sizeof(myPokemons[0]);

        printf("\n\n");
        printf("- value: %d -", myPokemonsLength);
        printMenu(systemclear);
        printf("Escolha uma acao: ");
        scanf("%d", &inputNum);
        printf("\n\n");

        switch(inputNum){
            case 1:
                printarDex(myPokemons, myPokemonsLength);
                break;
            case 2:
                printarDex(pokedex, pokedexLength);
                break;
            case 3:
                //capturar pkm
                printf("Parabens, capturou um Charmander\n");
                strcpy(myPokemons[0], "Charmander");
                break;
            case 12:
                displayOn = 0;
                break;
            default:
                if(systemClearSwitch() == 1){
                    system("cls");
                } else {
                    printf("|||||||||||||| Error ||||||||||||||");
                }
        }
    }

    getString("Pressione qualquer tecla para fechar o programa...");
    return 0;
}