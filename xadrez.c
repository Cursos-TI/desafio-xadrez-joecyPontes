#include <stdio.h>
// variaveis de movimento
int pecaEscolhida;
int tipoDemovimento;
int numeroDemovimentos;
int contadorDemovimento;

//variaveis de vireção
char movimento;
char cima[20] = "Cima";
char baixo[20] = "Baixo";
char esquerda[20] = "Esquerda";
char direita[20] = "Direita";
char baixoDireita[20] = "Baixo Direita";
char baixoEsquerda[20] = "Baixo Esquerda";
char cimaDireita[20] = "Cima Direita";
char cimaEsquerda[20] = "Cima Esquerda";

// funçoes de movimento


// essa função recebe uma string como parametro e executa o movimento escolhido
void movimentos (char* movimento){
    printf("Escolha o numero de movimentos:\n");
    numeroDemovimentos = 0; 
    scanf("%d", &numeroDemovimentos); // recebe o numero de movimentos
    for (int i = 1; i <= numeroDemovimentos; i++) // cria um loop onde a variavel i é incrementada até o numero de movimentos escolhido
    {
        printf("%d - %s.\n", i, movimento); // imprime o numero do movimento e a string recebida como parametro
    }
}

void l (char* movimento){
    numeroDemovimentos = 2; // o cavalo sempre se move 2 vezes em uma direção e 1 na outra
    if (movimento == cima || movimento == baixo){
        printf("1 - Direita\n");
        printf("2 - Esquerda\n");
        scanf("%d", &tipoDemovimento);
        switch (tipoDemovimento)
        {
        case 1:
            for (int i = 1; i <= numeroDemovimentos; i++) // cria um loop onde a variavel i é incrementada até o numero de movimentos escolhido
            {
                printf("%d - %s.\n", i, movimento);
                if (i == 2){
                    i++; // apos o segundo movimento na vertical, ele adiciona mais um movimento na horizontal
                    printf("%d - %s.\n", i, direita);
                }
            }
            break;
        case 2:
            for (int i = 1; i <= numeroDemovimentos; i++) //
            {
                printf("%d - %s.\n", i, movimento);
                if (i == 2){
                    i++;
                    printf("%d - %s.\n", i, esquerda);
                }
            }
        
        default:
            break;
        }
    } else {
        printf("1 - Cima\n");
        printf("2 - Baixo\n");
        scanf("%d", &tipoDemovimento);
        switch (tipoDemovimento)
        {
        case 1:
            for (int i = 1; i <= numeroDemovimentos; i++) 
            {
                printf("%d - %s.\n", i, movimento);
                if (i == 2){
                    i++;
                    printf("%d - %s.\n", i, cima);
                }
            }
            break;
        case 2:
            for (int i = 1; i <= numeroDemovimentos; i++) 
            {
                printf("%d - %s.\n", i, movimento);
                if (i == 2){
                    i++;
                    printf("%d - %s.\n", i, baixo);
                }
            }
        
        default:
            break;
        }    }
    


}

void movimentosRainha(){
    printf("1 - cima\n");
    printf("2 - baixo\n");
    printf("3 - direita\n");
    printf("4 - esquerda\n");
    printf("4 - baixo Direita\n");
    printf("7 - baixo Esquerda\n");
    printf("5 - cima Direita\n");
    printf("8 - cima Esquerda\n");
    scanf("%d", &tipoDemovimento);
    switch (tipoDemovimento) // switch para escolher a direção
    {
    case 1:
        printf("%s\n", cima); // imprime a direção escolhida
        movimentos(cima); // chama a função movimentos passando a string cima como parametro
        break;
    case 2:
        printf("%s\n", baixo);
        movimentos(baixo);
        break;
    case 3:
        printf("%s\n", direita);
        movimentos(direita);
        break;
    case 4:
        printf("%s\n", esquerda);
        movimentos(esquerda);
        break;
    case 5:
        printf("%s\n", baixoDireita);
        movimentos(baixoDireita);
        break;
    case 6:
        printf("%s\n", baixoEsquerda);
        movimentos(baixoEsquerda);
        break;
    case 7:
        printf("%s\n", cimaDireita);
        movimentos(baixoEsquerda);
        break;
    case 8:
        printf("%s\n", cimaEsquerda);
        movimentos(cima);
        break;
    
    default:
        printf("Escolha uma opção valida:\n");
        movimentosRainha();
    }
}

void movimentosTorre(){
    printf("Escolha uma direção:\n");
    printf("1 - cima\n");
    printf("2 - baixo\n");
    printf("3 - direita\n");
    printf("4 - esquerda\n");
    scanf("%d", &tipoDemovimento);
    switch (tipoDemovimento)
    {
    case 1:
        printf("%s\n", cima);
        movimentos(cima);
        break;
    case 2:
        printf("%s\n", baixo);
        movimentos(baixo);
        break;
    case 3:
        printf("%s\n", direita);
        movimentos(direita);
        break;
    case 4:
        printf("%s\n", esquerda);
        movimentos(esquerda);
        break;
    
    default:
        printf("Escolha uma opção valida:\n");
        movimentosTorre();
    }
}

void movimentosBispo(){
    printf("Escolha uma direção:\n");
    printf("1 - cima Direita\n");
    printf("4 - cima Esquerda\n");
    printf("2 - baixo Direita\n");
    printf("3 - baixo Esquerda\n");
    scanf("%d", &tipoDemovimento);
    switch (tipoDemovimento)
    {
    case 1:
        printf("%s\n", cimaDireita);
        movimentos(cimaDireita);
        break;
    case 2:
        printf("%s\n", cimaEsquerda);
        movimentos(cimaEsquerda);
        break;
    case 3:
        printf("%s\n", baixoDireita);
        movimentos(baixoEsquerda);
        break;
    case 4:
        printf("%s\n", baixoEsquerda);
        movimentos(baixoEsquerda);
        break;
    
    default:
        printf("Escolha uma opção valida:\n");
        movimentosBispo();
    }
}

void movimentosCavalo(){
    printf("Escolha uma direção:\n");
    printf("1 - Cima\n");
    printf("2 - Baixo\n");
    printf("3 - Direita\n");
    printf("4 - Esquerda\n");

    scanf("%d", &tipoDemovimento);
    switch (tipoDemovimento)
    {
    case 1:
        printf("%s\n", cima);
        l(cima);
        break;
    case 2:
        printf("%s\n", baixo);
        l(baixo);
        break;
    case 3:
        printf("%s\n", direita);
        l(direita);
        break;
    case 4:
        printf("%s\n", esquerda);
        l(esquerda);
        break;
    default:
        printf("Escolha uma opção valida:\n");
        movimentosCavalo();
    }
}

int main() {

    do
    {
        printf("Escolha a peça:\n");
        printf("1 - Rainha\n");
        printf("2 - Torre\n");
        printf("3 - Bispo\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair.\n");
        scanf(" %d", &pecaEscolhida);
        if (pecaEscolhida > 0){
            switch (pecaEscolhida)
                {
                case 1:
                    printf("Rainha!\n");
                    movimentosRainha();
                    break;
                case 2:
                    printf("Torre!\n");
                    movimentosTorre();
                    break;
                case 3:
                    printf("Bispo!\n");
                    movimentosBispo();
                    break;
                case 4:
                    printf("Cavalo!\n");
                    movimentosCavalo();
                    break;
                
                default:
                    printf("Insíra uma opção válida.\n");
                    break;
                }
        }
    } while (pecaEscolhida != 0);
    printf("Saindo do programa.\n");
    return 0;
}
