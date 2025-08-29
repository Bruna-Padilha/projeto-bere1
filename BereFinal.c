#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int continuar, opcaoMenu, codigoProduto, quantidade = 0;
    float totalCompra = 0, totalLimpeza = 0, totalAlimentos = 0, totalPadaria = 0; //variáveis de totais
    float preco = 0;

    // mensagem de boas vindas
    printf("=================================================\n");
    printf("\n\t    BEM VINDO(A) AO DONA BERÊ!\n");
    printf("\n=================================================\n");
    printf("\tPressione 'ENTER' para iniciar...\n");
    getchar(); // aguarda uma tecla
    system("cls"); // limpa a tela

    while (continuar) { // loop que mantém o menu rodando enquanto continuar = 1.

        // menu principal
        printf("O valor atual da sua compra é de: R$%.2f\n", totalCompra); // contador do total da compra
        printf("===============================\n");
        printf("\tMENU PRINCIPAL\n");
        printf("===============================\n");
        printf("1. Material de Limpeza\n");
        printf("2. Venda de Alimentos\n");
        printf("3. Padaria\n");
        printf("4. Pagamento\n");        
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcaoMenu); // guarda a opção do menu selecionada 
        getchar();
        system("cls");

        switch (opcaoMenu){

            case 1: 
                do {
                    printf("O valor atual da sua compra é de: R$%.2f\n", totalCompra);
                    printf("===================================\n");
                    printf("\tMATERIAL DE LIMPEZA\n");
                    printf("===================================\n");
                    printf("CÓDIGO        ITEM        VALOR(Un.)\n");
                    printf("1.\tDetergente         R$ 1.99\n");
                    printf("2.\tSabão em Pó (1kg)  R$ 8.99\n");
                    printf("3.\tEsponja            R$ 1.50\n");
                    printf("4.\tAmanciante (1L)    R$ 15.00\n");                    
                    printf("5. Voltar ao menu principal\n");
                    printf("Digite o código correspondente: ");
                    scanf("%d", &codigoProduto); // guarda a opção do menu selecionada
                    getchar();
                    
                        if (codigoProduto == 5) { // quebra o fluxo do case ao selecionar opção 5
                        break;
                        }

                        switch (codigoProduto) { 
                            case 1: preco = 1.99; break;
                            case 2: preco = 8.99; break;
                            case 3: preco = 1.50; break;
                            case 4: preco = 15.00; break;                      
                    
                            default: 
                                printf("Código Inválido!\n");
                                getchar();
                                system("cls");
                                continue;
                        }

                    printf("Digite a quantidade: ");
                    scanf("%d", &quantidade);
                    totalLimpeza = preco * quantidade; 
                    totalCompra += totalLimpeza;                    
                    getchar();
                    system("cls");
                    } while (codigoProduto != 5);
                    system("cls");
                    break;


            case 2:
                do {
                    printf("O valor atual da sua compra é de: R$%.2f\n", totalCompra);
                    printf("=================================\n");
                    printf("\t    ALIMENTOS\n");
                    printf("=================================\n");
                    printf("CÓDIGO        ITEM           VALOR(Un.)\n");
                    printf("1.\tCafé                  R$ 19.99\n");
                    printf("2.\tLeite (cx)            R$ 5.90\n");
                    printf("3.\tArroz (1kg)           R$ 4.50\n");
                    printf("4.\tFeijão preto (1kg)    R$ 8.00\n");
                    printf("5. Voltar ao menu principal\n");
                    printf("Digite o código correspondente: ");
                    scanf("%d", &codigoProduto);
                    getchar();                    
                    
                        if (codigoProduto == 5) { 
                        break;
                        }

                        switch (codigoProduto) {
                            case 1: preco = 19.99; break;
                            case 2: preco = 5.00; break;
                            case 3: preco = 4.50; break;
                            case 4: preco = 8.00; break;                       
                    
                            default: 
                                printf("Código Inválido!\n");
                                getchar();
                                system("cls");
                                continue;
                        }          
                
                    printf("Digite a quantidade: ");
                    scanf("%d", &quantidade);
                    totalAlimentos = preco * quantidade; 
                    totalCompra += totalAlimentos;                    
                    getchar();
                    system("cls");
                    } while (codigoProduto != 5);
                    system("cls");
                    break;
                           
            case 3:
                do {
                    printf("O valor atual da sua compra é de: R$%.2f\n", totalCompra);
                    printf("=================================\n");
                    printf("\t    PADARIA\n");
                    printf("=================================\n");
                    printf("CÓDIGO        ITEM           VALOR(Un.)\n");
                    printf("1.\tPão de Forma          R$ 9.50\n");
                    printf("2.\tPão Integral          R$ 12.50\n");
                    printf("3.\tPão Francês (un)      R$ 4.50\n");
                    printf("4.\tSonho                 R$ 8.50\n");
                    printf("5. Voltar ao menu principal\n");
                    printf("Digite o código correspondente: ");
                    scanf("%d", &codigoProduto);
                    getchar();
                    
                        if (codigoProduto == 5) { 
                        break;
                        }

                        switch (codigoProduto) {
                            case 1: preco = 9.50; break;
                            case 2: preco = 12.50; break;
                            case 3: preco = 4.50; break;
                            case 4: preco = 8.50; break;                       
                    
                            default: 
                                printf("Código Inválido!\n");
                                getchar();
                                system("cls");
                                continue;
                        }                

                    printf("Digite a quantidade: ");
                    scanf("%d", &quantidade);
                    totalPadaria = preco * quantidade; 
                    totalCompra += totalPadaria;
                    getchar();
                    system("cls");
                    } while (codigoProduto != 5);
                    system("cls");
                    break;    

            case 4: {
                
                int formaPgto, pgtoOk = 0; 
                float desconto = 0, totalFinal, valorRecebido, troco;
                
                do {                             
                printf("=================================\n");
                printf("\t    PAGAMENTO\n");
                printf("=================================\n");
                printf("Material de Limpeza: R$%.2f\n", totalLimpeza);
                printf("Alimentos: R$%.2f\n", totalAlimentos);
                printf("Padaria: R$%.2f\n", totalPadaria);
                printf("Total Geral: R$%.2f\n", totalCompra);                               
                printf("\n-------------------------------\n");           
                printf("Escolha a forma de pagamento: \n");
                printf("1. Dinheiro\n");
                printf("2. Cartão\n");
                scanf("%d", &formaPgto);
                getchar(); 

                    if (formaPgto == 1) {
                        if (totalCompra <= 50)
                            desconto = 0.05;
                        else if (totalCompra < 100)
                            desconto = 0.10;
                        else 
                            desconto = 0.18;

                        totalFinal = totalCompra * (1 - desconto);
                        printf("Desconto aplicado: %.0f%%\n", desconto * 100);
                        printf("Valor final com desconto: R$%.2f\n", totalFinal);
                        printf("Valor recebido: R$");
                        scanf("%f", &valorRecebido);
                        getchar();                                        
                        troco = valorRecebido - totalFinal;

                    if (troco < 0) {
                            printf("\nValor insuficiente! Tente novamente.\n");
                            getchar();                            
                            system("cls");
                                           
                        } else {
                            printf("Troco: R$%.2f\n", troco); 
                            
                            totalAlimentos = 0;
                            totalLimpeza = 0;
                            totalPadaria = 0;
                            totalCompra = 0; 

                            pgtoOk = 1;
                            printf("Pressione ENTER para voltar ao Menu Principal.\n");
                            getchar();                            
                            system("cls");
                        }            
                    } else if (formaPgto == 2) {
                        int pgtoConcluido; 
                        printf("Pagamento aprovado na máquina? (1=Sim / 2=Não): ");
                        scanf("%d", &pgtoConcluido);
                        getchar();
                        if (pgtoConcluido == 1) {
                            printf("Pagamento Aprovado. Valor final: R$ %.2f\n", totalCompra);
                                                        
                            totalAlimentos = 0;
                            totalLimpeza = 0;
                            totalPadaria = 0;
                            totalCompra = 0; 

                            pgtoOk = 1;
                            printf("Pressione ENTER para voltar ao Menu Principal.\n");
                            getchar();
                            system("cls");
                        } else { 
                            printf("Pagamento recusado. Tente novamente.\n");
                            getchar();                            
                            system("cls");
                        }
                    } else { 
                        printf("Opção inválida!");
                    }

                } while (!pgtoOk);
                    break;
            }
            
            case 5: {
                int sair;
                printf("Tem certeza que gostaria de encerrar o sistema? Todos os dados serão perdidos!\n");
                printf("1 = SIM | 2 = NÃO\n");
                scanf("%d", &sair);
                getchar();
                if (sair == 1) {
                    printf("Obrigada por usar o sistema! Finalizando...\n");
                    continuar = 0;
                } else { printf("Retornando ao menu principal...\n");
                    getchar();
                    system("cls");
                } break;
            }    
            
            default:
                printf("Opção inválida! Tente novamente.\n");
                getchar();
                system("cls");

            }
              
    }
    
    return 0; 
}