// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

// testa se vencedor foi X
TEST(Jogo_da_Velha, Vencedor_X_linhas) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 1 (x)
    for (j = 0; j < 3; j++) {
        Velha[0][j] = 1;
    }

    // testa função com linha 0 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));
}

int main(int argc, char** argv) {
    // Inicializa os testes
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return 0;
}
