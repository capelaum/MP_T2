#include "velha.h"

TEST(Jogo_da_Velha, Vencedor_X)
{
    int Velha [3][3];
    EXPECT_EQ(1, Verifica_Velha(Velha));

}

int main(int argc, char** argv)
{
    // Inicializa os testes
	::testing::InitGoogleTest (&argc, argv);
	return RUN_ALL_TESTS();

    return 0;
}