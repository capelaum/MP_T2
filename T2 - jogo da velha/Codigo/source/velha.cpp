// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

int Verifica_Velha(int Velha[][3], int linhas) {
    int i = 0, j = 0;
    // conta os valores 1 da matriz
    int conta_x = 0;

    // verifica linhas
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (Velha[i][j] == 1) {
                conta_x++;
            }
        }

        // se na linha tiverem tres x
        if (conta_x == 3) {
            cout << "X venceu!" << endl;
            return 1;
        }

        // apos verificar uma linha, zera contador
        conta_x = 0;
    }

    return -1;
}
