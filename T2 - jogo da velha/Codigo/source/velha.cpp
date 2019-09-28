// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

int Verifica_Velha(int Velha[][3], int linhas) {
    int i = 0, j = 0;

    // conta os valores 1 das linhas e colunas da matriz
    int conta_x = 0;

    // conta os valores 2 das linhas e colunas da matriz
    int conta_o = 0;

    // verifica linhas
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (Velha[i][j] == 1) {
                conta_x++;
            }
            if (Velha[i][j] == 2) {
                conta_o++;
            }
        }

        // se alguma linha conter tres X
        if (conta_x == 3) {
            // cout << "X venceu!" << endl;
            return 1;
        }

        // se alguma linha conter tres O
        if (conta_o == 3) {
            // cout << "X venceu!" << endl;
            return 2;
        }

        // apos verificar uma linha, zera contador de X
        conta_x = 0;

        // apos verificar uma linha, zera contador de O
        conta_o = 0;
    }

    // verifica colunas
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (Velha[j][i] == 1) {
                conta_x++;
            }
            if (Velha[j][i] == 2) {
                conta_o++;
            }
        }

        // se alguma coluna conter tres X
        if (conta_x == 3) {
            // cout << "X venceu!" << endl;
            return 1;
        }

        // se alguma coluna conter tres O
        if (conta_o == 3) {
            // cout << "X venceu!" << endl;
            return 2;
        }

        // apos verificar uma coluna, zera contador de X
        conta_x = 0;

        // apos verificar uma coluna, zera contador de O
        conta_o = 0;
    }

    // conta os valores 1 das diagonais da matriz
    int conta_diagonal_x = 0;

    // conta os valores 2 das diagonais da matriz
    // int conta_diagonal_o = 0;

    // verifica diagonal 1
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
            }
        }
    }

    // se diagonal 1 conter tres x
    if (conta_diagonal_x == 3) {
        // cout << "X venceu!" << endl;
        return 1;
    }

    // apos verificar diagonal 1, zera contador
    conta_diagonal_x = 0;

    // verifica diagonal 2
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 && j == 2) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
            }
            if (i == 1 && j == 1) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
            }
            if (i == 2 && j == 0) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
            }
        }
    }

    // se diagonal 2 conter tres x
    if (conta_diagonal_x == 3) {
        // cout << "X venceu!" << endl;
        return 1;
    }

    // apos verificar diagonal 2, zera contador
    conta_diagonal_x = 0;




    return -1;
}
