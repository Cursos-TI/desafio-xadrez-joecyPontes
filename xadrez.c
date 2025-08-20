#include <stdio.h>

int main(){

    int numeroDeMovimentos;
    int contadorDeMovimento = 0;
    int tipoDemovimento;
    int pecaEscolhida;
    do{
        //escolhendo a peça:
        printf("Escolha a peça:\n");
        printf("1 - Rainha:\n");
        printf("2 - Torre:\n");
        printf("3 - Bispo:\n");
        printf("0 - Sair.\n");
        scanf(" %d", &pecaEscolhida);
        if (pecaEscolhida > 0){
            switch (pecaEscolhida)
            {
            case 1:
                printf("Rainha!\n");

                printf("Escolha uma direção:\n");
                printf("1 - cima\n");
                printf("2 - baixo\n");
                printf("3 - direita\n");
                printf("4 - baixo Direita\n");
                printf("5 - cima Direita\n");
                printf("6 - esquerda\n");
                printf("7 - baixo Esquerda\n");
                printf("8 - cima Esquerda\n");
                printf("0 - sair do programa.\n");
                scanf("%d", &tipoDemovimento);

                switch (tipoDemovimento)
                {
                case 1:
                    printf("Cima!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Cima.\n", i);
                    }
                    break;

                case 2:
                    printf("Baixo!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Baixo.\n", i);
                    }
                    
                    break;

                case 3:
                    printf("Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - direita.\n", i);
                    }
                    
                    break;

                case 4:
                    printf("Baixo Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - baixo Direita.\n", i);
                    }
                    
                    break;

                case 5:
                    printf("Cima Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - cima Direita.\n", i);
                    }
                    
                    break;

                case 6:
                    printf("Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Esquerda.\n", i);
                    }
                    
                    break;

                case 7:
                    printf("Cima Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Cima Esquerda.\n", i);
                    }
                    
                    break;

                case 8:
                    printf("Baixo Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Baixo Esquerda.\n", i);
                    }
                    
                    break;

                
                default:
                    break;
                }
                printf("Proxima jogada!\n");
                //pecaEscolhida = 0;
                break;
            
            case 2:
                printf("Torre!\n");

                printf("Escolha uma direção:\n");
                printf("1 - cima\n");
                printf("2 - baixo\n");
                printf("3 - direita\n");
                printf("4 - baixo Direita\n");
                printf("5 - cima Direita\n");
                printf("6 - esquerda\n");
                printf("7 - baixo Esquerda\n");
                printf("8 - cima Esquerda\n");
                printf("0 - sair do programa.\n");
                scanf("%d", &tipoDemovimento);

                switch (tipoDemovimento)
                {
                case 1:
                    printf("Cima!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Cima.\n", i);
                    }
                    break;

                case 2:
                    printf("Baixo!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Baixo.\n", i);
                    }
                    
                    break;

                case 3:
                    printf("Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - direita.\n", i);
                    }
                    
                    break;

                case 4:
                    printf("Baixo Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - baixo Direita.\n", i);
                    }
                    
                    break;

                case 5:
                    printf("Cima Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - cima Direita.\n", i);
                    }
                    
                    break;

                case 6:
                    printf("Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Esquerda.\n", i);
                    }
                    
                    break;

                case 7:
                    printf("Cima Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Cima Esquerda.\n", i);
                    }
                    
                    break;

                case 8:
                    printf("Baixo Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Baixo Esquerda.\n", i);
                    }
                    
                    break;

                
                default:
                    break;
                }
                printf("Proxima jogada!\n");
                //pecaEscolhida = 0;
                break;

            case 3:
                printf("Bispo!\n");
                
                printf("Escolha uma direção:\n");
                printf("1 - cima\n");
                printf("2 - baixo\n");
                printf("3 - direita\n");
                printf("4 - baixo Direita\n");
                printf("5 - cima Direita\n");
                printf("6 - esquerda\n");
                printf("7 - baixo Esquerda\n");
                printf("8 - cima Esquerda\n");
                printf("0 - sair do programa.\n");
                scanf("%d", &tipoDemovimento);

                switch (tipoDemovimento)
                {
                case 1:
                    printf("Cima!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Cima.\n", i);
                    }
                    break;

                case 2:
                    printf("Baixo!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Baixo.\n", i);
                    }
                    
                    break;

                case 3:
                    printf("Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - direita.\n", i);
                    }
                    
                    break;

                case 4:
                    printf("Baixo Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - baixo Direita.\n", i);
                    }
                    
                    break;

                case 5:
                    printf("Cima Direita!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - cima Direita.\n", i);
                    }
                    
                    break;

                case 6:
                    printf("Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Esquerda.\n", i);
                    }
                    
                    break;

                case 7:
                    printf("Cima Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Cima Esquerda.\n", i);
                    }
                    
                    break;

                case 8:
                    printf("Baixo Esquerda!\n");
                    printf("Escolha o numero de movimentos:\n");
                    numeroDeMovimentos = 0;
                    scanf("%d", &numeroDeMovimentos);
                    for (int i = 1; i <= numeroDeMovimentos; i++)
                    {
                        printf("%d - Baixo Esquerda.\n", i);
                    }
                    
                    break;

                
                default:
                    break;
                }
                printf("Proxima jogada!\n");
                //pecaEscolhida = 0;
                break;

            default:
                break;
            }

        }
    }while (pecaEscolhida != 0);
    printf("Saindo do jogo...\n");
    return 0;
}
    
        
