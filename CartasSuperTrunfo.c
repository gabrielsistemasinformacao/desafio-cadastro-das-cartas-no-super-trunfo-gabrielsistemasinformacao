#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Váriaveis do Sistema Carta 01
    char Estado_Carta1 [20];
    char Codigo_Carta1 [20];
    char Nome_Cidade_Carta1 [20];
    int Populacao_Carta1;
    float Area_Carta1;
    float Pib_Carta1;
    int Pontos_Turisticos_Carta1;
    float Densidade_Populacional1;
    float Pib_Per_Capita1;

    // Váriaveis do Sistema Carta 02
    char Estado_Carta2[20];
    char Codigo_Carta2[20];
    char Nome_Cidade_Carta2[20];
    int Populacao_Carta2;
    float Area_Carta2;
    float Pib_Carta2;
    int Pontos_Turisticos_Carta2;
    float Densidade_Populacional2;
    float Pib_Per_Capita2;


    

    printf("Estado Carta 1: ");
    scanf("%s",&Estado_Carta1);
    printf("Código Carta 1: ");
    scanf("%s",&Codigo_Carta1);
    printf("Cidade Carta 1: ");
    scanf("%s",&Nome_Cidade_Carta1);
    printf("Populacao Carta 1: ");
    scanf("%d",&Populacao_Carta1);
    printf("Área Carta 1: ");
    scanf("%f",&Area_Carta1);
    printf("PIB Carta 1: ");
    scanf("%f",&Pib_Carta1);
    printf("Pontos turísticos Carta 1: ");
    scanf("%d",&Pontos_Turisticos_Carta1);

    printf("Estado Carta 2: ");
    scanf("%s",&Estado_Carta2);
    printf("Código Carta 2: ");
    scanf("%s",&Codigo_Carta2);
    printf("Cidade Carta 2: ");
    scanf("%s",&Nome_Cidade_Carta2);
    printf("Populacao Carta 2: ");
    scanf("%d",&Populacao_Carta2);
    printf("Área Carta 2: ");
    scanf("%f",&Area_Carta2);
    printf("PIB Carta 2: ");
    scanf("%f",&Pib_Carta2);
    printf("Pontos turísticos Carta 2: ");
    scanf("%d",&Pontos_Turisticos_Carta2);

    // Cálculos   
    Densidade_Populacional1 = (float) Populacao_Carta1 / Area_Carta1;
    Densidade_Populacional2 = (float) Populacao_Carta2 / Area_Carta2;

    Pib_Per_Capita1 =  Pib_Carta1 / (float) Populacao_Carta1;
    Pib_Per_Capita2 =  Pib_Carta2 / (float) Populacao_Carta2;
    
    float Super_Poder1  = (float) Populacao_Carta1 + Area_Carta1 + Pib_Carta1 +
                        (float) Pontos_Turisticos_Carta1 + Densidade_Populacional1 +
                        Pib_Per_Capita1;

    float Super_Poder2 = (float) Populacao_Carta2 + Area_Carta2 + Pib_Carta2 +
                        (float) Pontos_Turisticos_Carta2 + Densidade_Populacional2 +
                        Pib_Per_Capita2;
    
    int Resultado_Populacao = Populacao_Carta1 > Populacao_Carta2;
    int Resultado_Populacao_Carta = Populacao_Carta1 > Populacao_Carta2 ? 1 : 2;

    int Resultado_Area = Area_Carta1 > Area_Carta2;
    int Resultado_Area_Carta = Area_Carta1 > Area_Carta2 ? 1 : 2;

    int Resultado_Pib = Pib_Carta1 > Pib_Carta2;
    int Resultado_Pib_Carta = Pib_Carta1 > Pib_Carta2 ? 1 : 2;

    int Resultado_Pontos_Turisticos = Pontos_Turisticos_Carta1 > Pontos_Turisticos_Carta2;
    int Resultado_Pontos_Turisticos_Carta = Pontos_Turisticos_Carta1 > Pontos_Turisticos_Carta2 ? 1 : 2;
                
    int Resultado_Densidade_Populacional = Densidade_Populacional1 < Densidade_Populacional2;
    int Resultado_Densidade_Populacional_Carta = Densidade_Populacional1 < Densidade_Populacional2 ? 1 : 2;

    int Resultado_Pib_Per_Capita = (float)Pib_Per_Capita1 > (float)Pib_Per_Capita2;
    int Resultado_Pib_Per_Capita_Carta = ((float)Pib_Per_Capita1 > (float)Pib_Per_Capita2) ? 1 : 2;
    
    int Resultado_Super_Poder = Super_Poder1 > Super_Poder2;
    int Resultado_Super_Poder_Carta = Super_Poder1 > Super_Poder2 ? 1 : 2;

    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %s\n",Estado_Carta1);
    printf("Código: %s\n",Codigo_Carta1);
    printf("Nome da Cidade: %s\n",Nome_Cidade_Carta1);
    printf("População: %d\n",Populacao_Carta1);
    printf("Área: %.2f  km²\n",Area_Carta1);
    printf("PIB: %.2f  bilhões de reais\n",Pib_Carta1);
    printf("Número de Pontos Turísticos: %d\n",Pontos_Turisticos_Carta1);
    printf("Densidade Populacional: %.2f hab/km²\n",Densidade_Populacional1);
    printf("PIB per Capita: %.2f reais\n",Pib_Per_Capita1);
    printf("Super Poder: %.2f \n",Super_Poder1);
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s\n",Estado_Carta2);
    printf("Código: %s\n",Codigo_Carta2);
    printf("Nome da Cidade: %s\n",Nome_Cidade_Carta2);
    printf("População: %d\n",Populacao_Carta2);
    printf("Área: %.2f  km²\n",Area_Carta2);
    printf("PIB: %.2f  bilhões de reais\n",Pib_Carta2);
    printf("Número de Pontos Turísticos: %d\n",Pontos_Turisticos_Carta2);
    printf("Densidade Populacional: %.2f hab/km²\n",Densidade_Populacional2);
    printf("PIB per Capita: %.2f reais\n",Pib_Per_Capita2);
    printf("Super Poder: %.2f \n",Super_Poder2);
    printf("\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n",Resultado_Populacao_Carta,Resultado_Populacao);
    printf("Área: Carta %d venceu (%d)\n",Resultado_Area_Carta,Resultado_Area);
    printf("PIB: Carta %d venceu (%d)\n",Resultado_Pib_Carta,Resultado_Pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",Resultado_Pontos_Turisticos_Carta,Resultado_Pontos_Turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n",Resultado_Densidade_Populacional_Carta,Resultado_Densidade_Populacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n",Resultado_Pib_Per_Capita_Carta, Resultado_Pib_Per_Capita);
    printf("Super Poder: Carta %d venceu (%d)\n",Resultado_Super_Poder_Carta,Resultado_Super_Poder);


    // parte do if e else
    
    printf ("Comparação de cartas (if e else) (Atributo: População)\n\n");
    printf ("Carta 1 - %s: %d\n",Nome_Cidade_Carta1,Populacao_Carta1);
    printf ("Carta 2 - %s: %d\n",Nome_Cidade_Carta2,Populacao_Carta2);
    
    if (Populacao_Carta1 > Populacao_Carta2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n",Nome_Cidade_Carta1);
    }
    else if (Populacao_Carta1 == Populacao_Carta2)
    {
        printf("Resultado: Empate\n");
    }
    else 
    {
        printf("Resultado: Carta 2 (%s) venceu!\n",Nome_Cidade_Carta2);
    }

    
    printf("************Menu************\n");
    
    printf("1 - Nome do país\n");
 
    printf("2 - População\n");
 
    printf("3 - Área\n");
    
    printf("4 - PIB\n");
    
    printf("5 - Número de pontos turísticos\n");
    
    printf("6 - Densidade demográfica\n\n\n\n");

    int opcao;

    printf("Escolha a opção:");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("1 - Nome da cidade \n");
        printf("Carta 1 Nome: %s    Carta 2 Nome: %s",Nome_Cidade_Carta1, Nome_Cidade_Carta2);
        break;
    case 2:
        if (Populacao_Carta1 > Populacao_Carta2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n",Nome_Cidade_Carta1);
        }
        else if (Populacao_Carta1 == Populacao_Carta2)
        {
            printf("Resultado: Empate\n");
        }
        else 
        {
            printf("Resultado: Carta 2 (%s) venceu!\n",Nome_Cidade_Carta2);
        }
        break;
    case 3:
        if (Area_Carta1 > Area_Carta2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n",Nome_Cidade_Carta1);
        }
        else if (Area_Carta1 == Area_Carta2)
        {
            printf("Resultado: Empate\n");
        }
        else 
        {
            printf("Resultado: Carta 2 (%s) venceu!\n",Nome_Cidade_Carta2);
        }
        break;
    case 4:
        if (Pib_Carta1 > Pib_Carta2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n",Nome_Cidade_Carta1);
        }
        else if (Pib_Carta1 == Pib_Carta2)
        {
            printf("Resultado: Empate\n");
        }
        else 
        {
            printf("Resultado: Carta 2 (%s) venceu!\n",Nome_Cidade_Carta2);
        }
        break;
    case 5:
        if (Pontos_Turisticos_Carta1 > Pontos_Turisticos_Carta2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n",Nome_Cidade_Carta1);
        }
        else if (Pontos_Turisticos_Carta1 == Pontos_Turisticos_Carta2)
        {
            printf("Resultado: Empate\n");
        }
        else 
        {
            printf("Resultado: Carta 2 (%s) venceu!\n",Nome_Cidade_Carta2);
        }
        break;
    case 6:
        if (Densidade_Populacional1 < Densidade_Populacional2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n",Nome_Cidade_Carta1);
        }
        else if (Densidade_Populacional1 == Densidade_Populacional2)
        {
            printf("Resultado: Empate\n");
        }
        else 
        {
            printf("Resultado: Carta 2 (%s) venceu!\n",Nome_Cidade_Carta2);
        }
        break;
    
    default:
        printf("Opção errada!");
        break;
    }

    printf("\n\n\n\n\n************Escolha um Atributo 1************\n");
  
    printf("1 - População\n");
 
    printf("2 - Área\n");
    
    printf("3 - PIB\n");
    
    printf("4 - Número de pontos turísticos\n");
    
    printf("5 - Densidade demográfica\n");

    printf("Opção:");
    scanf("%d",&opcao);

    int menu1 = opcao;
    printf("\n\n\n\n\n************Escolha um Atributo 2************\n");
    
    (menu1 != 1) ? printf("1 - População\n") : printf("");
    
 
    (menu1 != 2) ? printf("2 - Área\n") : printf("");
    
    (menu1 != 3) ? printf("3 - PIB\n") : printf("");
    
    (menu1 != 4) ? printf("4 - Número de pontos turísticos\n") : printf("");
    
    (menu1 != 5) ? printf("5 - Densidade demográfica\n") : printf("");

    printf("Opção:");
    scanf("%d",&opcao);
    int menu2 = opcao;
    char Atributo1[50] = "";
    char Atributo2[50] = "";
    float Valor1 = 0;
    float Valor2 = 0;
    int Vencedor1 = 0;

    int Vencedor2 = 0;
    int Empate = 0;

    char Vencedor[50] = "";

    if (menu1 != menu2)
    {
        printf("Cidade da carta 1:%s    Cidade da carta 2:%s\n",Nome_Cidade_Carta1,Nome_Cidade_Carta2);
        
        switch (menu1) {
            case 1:
                strcpy(Atributo1, "1 - População\n");
                Vencedor1 = (Populacao_Carta1 > Populacao_Carta2) ? 1 : 0 ;
                Vencedor2 = (Populacao_Carta1 < Populacao_Carta2) ? 1 : 0 ;
                Empate = (Populacao_Carta1 == Populacao_Carta2) ? 1 : 0 ;
                Valor1 += (float)Populacao_Carta1;
                Valor2 += (float)Populacao_Carta2;
                
                break;
            case 2:
                strcpy(Atributo1, "2 - Área\n");
                Vencedor1 = (Area_Carta1 > Area_Carta2) ? 1 : 0 ;
                Vencedor2 = (Area_Carta1 < Area_Carta2) ? 1 : 0 ;
                Empate = (Area_Carta1 == Area_Carta2) ? 1 : 0 ;
                Valor1 += (float)Area_Carta1;
                Valor2 += (float)Area_Carta2;
                
                break;
            case 3:
                strcpy(Atributo1, "3 - PIB\n");
                Vencedor1 = (Pib_Carta1 > Pib_Carta2) ? 1 : 0 ;
                Vencedor2 = (Pib_Carta1 < Pib_Carta2) ? 1 : 0 ;
                Empate = (Pib_Carta1 == Pib_Carta2) ? 1 : 0 ;
                Valor1 += (float)Pib_Carta1;
                Valor2 += (float)Pib_Carta2;
                
                break;
            case 4:
                strcpy(Atributo1, "4 - Número de pontos turísticos\n");
                Vencedor1 = (Pontos_Turisticos_Carta1 > Pontos_Turisticos_Carta2) ? 1 : 0 ;
                Vencedor2 = (Pontos_Turisticos_Carta1 < Pontos_Turisticos_Carta2) ? 1 : 0 ;
                Empate = (Pontos_Turisticos_Carta1 == Pontos_Turisticos_Carta2) ? 1 : 0 ;
                Valor1 += (float)Pontos_Turisticos_Carta1;
                Valor2 += (float)Pontos_Turisticos_Carta2;
                
                break;
            case 5:
                strcpy(Atributo1, "5 - Densidade demográfica\n");
                Vencedor1 = (Densidade_Populacional1 < Densidade_Populacional2) ? 1 : 0 ;
                Vencedor2 = (Densidade_Populacional1 > Densidade_Populacional2) ? 1 : 0 ;
                Empate = (Densidade_Populacional1 == Densidade_Populacional2) ? 1 : 0 ;
                Valor1 += (float)Densidade_Populacional1;
                Valor2 += (float)Densidade_Populacional2;
                
                break;
            default:
                printf("Opção errada!\n");
                break;
            

            
        }
        printf("\nAtributo 1: %s ",Atributo1);
        if (Vencedor1 == 1)
            strcpy(Vencedor,"Carta 1 Vencedora!\n");
        else if (Vencedor2 == 1)
            strcpy(Vencedor,"Carta 2 Vencedora!\n");
        else if (Empate == 1)
            strcpy(Vencedor,"Empate!\n");
        printf(Vencedor);
        switch (menu2) 
        {
            case 1:
                strcpy(Atributo2, "1 - População\n");
                Vencedor1 = (Populacao_Carta1 > Populacao_Carta2) ? 1 : 0 ;
                Vencedor2 = (Populacao_Carta1 < Populacao_Carta2) ? 1 : 0 ;
                Empate = (Populacao_Carta1 == Populacao_Carta2) ? 1 : 0 ;
                Valor1 += (float)Populacao_Carta1;
                Valor2 += (float)Populacao_Carta2;
                break;
            case 2:
                strcpy(Atributo2, "2 - Área\n");
                Vencedor1 = (Area_Carta1 > Area_Carta2) ? 1 : 0 ;
                Vencedor2 = (Area_Carta1 < Area_Carta2) ? 1 : 0 ;
                Empate = (Area_Carta1 == Area_Carta2) ? 1 : 0 ;
                Valor1 += (float)Area_Carta1;
                Valor2 += (float)Area_Carta2;
                break;
            case 3:
                strcpy(Atributo2, "3 - PIB\n");
                Vencedor1 = (Pib_Carta1 > Pib_Carta2) ? 1 : 0 ;
                Vencedor2 = (Pib_Carta1 < Pib_Carta2) ? 1 : 0 ;
                Empate = (Pib_Carta1 == Pib_Carta2) ? 1 : 0 ;
                Valor1 += (float)Pib_Carta1;
                Valor2 += (float)Pib_Carta2;
                break;
            case 4:
                strcpy(Atributo2, "4 - Número de pontos turísticos\n");
                Vencedor1 = (Pontos_Turisticos_Carta1 > Pontos_Turisticos_Carta2) ? 1 : 0 ;
                Vencedor2 = (Pontos_Turisticos_Carta1 < Pontos_Turisticos_Carta2) ? 1 : 0 ;
                Empate = (Pontos_Turisticos_Carta1 == Pontos_Turisticos_Carta2) ? 1 : 0 ;
                Valor1 += (float)Pontos_Turisticos_Carta1;
                Valor2 += (float)Pontos_Turisticos_Carta2;
                break;
            case 5:
                strcpy(Atributo2, "5 - Densidade demográfica\n");
                Vencedor1 = (Densidade_Populacional1 < Densidade_Populacional2) ? 1 : 0 ;
                Vencedor2 = (Densidade_Populacional1 > Densidade_Populacional2) ? 1 : 0 ;
                Empate = (Densidade_Populacional1 == Densidade_Populacional2) ? 1 : 0 ;
                Valor1 += (float)Densidade_Populacional1;
                Valor2 += (float)Densidade_Populacional2;
                break;
            default:
                printf("Opção errada!\n");
                break;
            
        }
        
    }
    printf("Atributo 2: %s ",Atributo2);
    if (Vencedor1 == 1)
        strcpy(Vencedor,"Carta 1 Vencedora!\n");
    else if (Vencedor2 == 1)
        strcpy(Vencedor,"Carta 2 Vencedora!\n");
    else if (Empate == 1)
        strcpy(Vencedor,"Empate!\n");
    printf(Vencedor);

    if (Valor1 > Valor2)
    {
        printf("\nCarta 1 Vencedora da rodada");
    }
    else if (Valor1 < Valor2)
    {
        printf("\nCarta 2 Vencedora da rodada");
    }
    else 
       printf("\nEmpate");

    





    

    return 0;
}
