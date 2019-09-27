// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

TEST(Jogo_da_Velha, Vencedor_X) {
    int Velha[3][3];
    int i = 0;
    for (i = 0; i < 3; i++) {
        Velha[0][i] = 1;
    }

    ASSERT_EQ(1, Verifica_Velha(*Velha));
}

int main(int argc, char** argv) {
    // Inicializa os testes
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return 0;
}
