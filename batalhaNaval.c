#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};


    for (int j = 2; j < 6; j++) {
        tabuleiro[1][j] = 3;
    }


    for (int i = 3; i < 7; i++) {
        tabuleiro[i][5] = 3;
    }

    
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }


    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
