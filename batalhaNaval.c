#include <stdio.h>

int main(){

    //Desafio Nível Novato
    printf("\n***BATALHA NAVAL***\n");

    int tabuleiro[10][10];
    char letras[] = {'A','B','C','D','E','F','G','H','I','J'};

    //Inicializando com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posicionar navio horizontal (linha B, colunas 3 a 5)
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    // Posicionar navio vertical (coluna F, linhas E a G)
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;

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
