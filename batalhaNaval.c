#include <stdio.h>

int main(){

    //Desafio Nível Aventureiro
    printf("\n***BATALHA NAVAL***\n");

    int tabuleiro[10][10];
    char letras[] = {'A','B','C','D','E','F','G','H','I','J'};

    //Inicializando com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posicionar navio Horizontal
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Posicionar navio Diagonal
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;   

     // Cabeçalho com colunas 1–10
     printf("    ");
     for (int col = 1; col <= 10; col++) {
         printf("%-3d", col);
     }
     printf("\n");
 
     // Impressão do tabuleiro com linhas A–J
     for (int i = 0; i < 10; i++) {
         printf(" %c |", letras[i]); // Mostra A–J
         for (int j = 0; j < 10; j++) {
             printf(" %-2d", tabuleiro[i][j]);
         }
         printf("\n");
     }
    

    return 0;
}
