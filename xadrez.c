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
