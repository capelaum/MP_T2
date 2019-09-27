// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

// testa se vencedor foi X na linha 0
TEST(Jogo_da_Velha, Vencedor_X_linha_0) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[0][j] = 1;
    }

    // testa função com linha 0 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 0
    Velha[0][1] = 2;

    // caso em que X nao vence
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na linha 1
TEST(Jogo_da_Velha, Vencedor_X_linha_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[1][j] = 1;
    }

    // testa função com linha 0 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 0
    Velha[1][1] = 2;

    // caso em que X nao vence
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na linha 2
TEST(Jogo_da_Velha, Vencedor_X_linha_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[2][j] = 1;
    }

    // testa função com linha 0 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 0
    Velha[2][1] = 2;

    // caso em que X nao vence
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}



int main(int argc, char** argv) {
    // Inicializa os testes
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return 0;
}
