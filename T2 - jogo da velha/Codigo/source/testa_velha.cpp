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

    // caso em que X nao deve vencer
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

    // completa linha 1 com 1
    for (j = 0; j < 3; j++) {
        Velha[1][j] = 1;
    }

    // testa função com linha 1 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 1
    Velha[1][1] = 2;

    // caso em que X nao deve vencer
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

    // completa linha 2 com 1
    for (j = 0; j < 3; j++) {
        Velha[2][j] = 1;
    }

    // testa função com linha 2 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 2
    Velha[2][1] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na coluna 0
TEST(Jogo_da_Velha, Vencedor_X_coluna_0) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[j][0] = 1;
    }

    // testa função com coluna 0 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda coluna 0
    Velha[2][0] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na coluna 1
TEST(Jogo_da_Velha, Vencedor_X_coluna_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 1 com 1
    for (j = 0; j < 3; j++) {
        Velha[j][1] = 1;
    }

    // testa função com coluna 1 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda coluna 1
    Velha[2][1] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na coluna 2
TEST(Jogo_da_Velha, Vencedor_X_coluna_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 2 com 1
    for (j = 0; j < 3; j++) {
        Velha[j][2] = 1;
    }

    // testa função com coluna 2 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda coluna 2
    Velha[2][2] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na diagonal 1
TEST(Jogo_da_Velha, Vencedor_X_diagonal_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa diagonal com valor 1
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                Velha[i][j] = 1;
            }
        }
    }

    // testa função com diagonal 1 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda diagonal 1
    Velha[0][0] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na diagonal 2
TEST(Jogo_da_Velha, Vencedor_X_diagonal_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa diagonal 2 com valor 1
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 && j == 2) {
                Velha[i][j] = 1;
            }
            if (i == 1 && j == 1) {
                Velha[i][j] = 1;
            }
            if (i == 2 && j == 0) {
                Velha[i][j] = 1;
            }
        }
    }

    // testa função com diagonal 1 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda diagonal 2
    Velha[0][2] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na linha 0
TEST(Jogo_da_Velha, Vencedor_O_linha_0) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 2
    for (j = 0; j < 3; j++) {
        Velha[0][j] = 2;
    }

    // testa função com linha 0 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda linha 0
    Velha[0][1] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

int main(int argc, char** argv) {
    // Inicializa os testes
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return 0;
}
