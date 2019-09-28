// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

// função que verifica resultado de um jogo da velha
// Retorna 1 se X foi o vencedor
// Retorna 2 se O foi o vencedor
// Retorna 0 se esta empatado
// Retorna -1 se o jogo esta indefinido
// Retorna -2 se o jogo eh impossível segundo as regras
int Verifica_Velha(int Velha[][3], int linhas) {
    int i = 0, j = 0;

    // conta os valores 1 das linhas e colunas da matriz
    int conta_x = 0;

    // conta os valores 2 das linhas e colunas da matriz
    int conta_o = 0;

    // verifica se jogo eh impossivel
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (Velha[i][j] == 1) {
                conta_x++;
            }
            if (Velha[i][j] == 2) {
                conta_o++;
            }
        }
    }

    // impossivel ter mais de 5 X
    if (conta_x > 5) {
        return -2;
    }

    // impossivel ter mais de 5 X
    if (conta_o > 5) {
        return -2;
    }

    // apos verificar se jogo eh impossivel, zera contador de X
    conta_x = 0;

    // apos verificar se jogo eh impossivel, zera contador de O
    conta_o = 0;

    // indica se X ou O possivelmente ganharam
    bool x_venceu = false, o_venceu = false;

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
            x_venceu = true;
        }

        // se alguma linha conter tres O
        if (conta_o == 3) {
            o_venceu = true;
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
            x_venceu = true;
        }

        // se alguma coluna conter tres O
        if (conta_o == 3) {
            o_venceu = true;
        }

        // apos verificar uma coluna, zera contador de X
        conta_x = 0;

        // apos verificar uma coluna, zera contador de O
        conta_o = 0;
    }

    // conta os valores 1 das diagonais da matriz
    int conta_diagonal_x = 0;

    // conta os valores 2 das diagonais da matriz
    int conta_diagonal_o = 0;

    // verifica diagonal 1
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
                if (Velha[i][j] == 2) {
                    conta_diagonal_o++;
                }
            }
        }
    }

    // se diagonal 1 conter tres x
    if (conta_diagonal_x == 3) {
        return 1;
    }

    // apos verificar diagonal 1, zera contador de X
    conta_diagonal_x = 0;

    // se diagonal 1 conter tres O
    if (conta_diagonal_o == 3) {
        return 2;
    }

    // apos verificar diagonal 1, zera contador de O
    conta_diagonal_o = 0;

    // verifica diagonal 2
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 && j == 2) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
                if (Velha[i][j] == 2) {
                    conta_diagonal_o++;
                }
            }
            if (i == 1 && j == 1) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
                if (Velha[i][j] == 2) {
                    conta_diagonal_o++;
                }
            }
            if (i == 2 && j == 0) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
                if (Velha[i][j] == 2) {
                    conta_diagonal_o++;
                }
            }
        }
    }

    // se diagonal 2 conter tres x
    if (conta_diagonal_x == 3) {
        return 1;
    }

    // apos verificar diagonal 2, zera contador de X
    conta_diagonal_x = 0;

    // se diagonal 2 conter tres O
    if (conta_diagonal_o == 3) {
        return 2;
    }

    // apos verificar diagonal 2, zera contador de O
    conta_diagonal_o = 0;

    // indica se jogo esta possivelmente empatado
    // bool empatou = false;

    if (x_venceu == true && o_venceu == true) {
        // empatou = true;
        return 0;
    } else if (x_venceu == true && o_venceu == false) {
        return 1;
    } else if (x_venceu == false && o_venceu == true) {
        return 2;
    }
    return -1;
}
