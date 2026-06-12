#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
#include <string.h> // Inclusão da biblioteca padrão de string


// Desafio Super Trunfo em C



/*Observação para o Nível Aventureiro do Tema 3 em relação ao Nível Novato do Tema 3:

Acréscimo de um Menu interativo usando Switch onde o jogador escolhe qual atributo ele quer comparar
Acréscimo de comparação mais complexa utilizando estruturas de decisão aninhadas (if-else dentro de if-else)

*/



int main() {
    
    // Área para definição das variáveis difersas para o funcionamento do sistema

    int escolha_professor;
    char prosseguir_escolha_professor;
    int escolha_usuario_atributo_comparacao;

    
    //Definição das varáveis da carta 01
    char estado_1[3], nome_cidade_1[50]; // Variáveis da sigla de estado e nome da cidade da carta 01 do tipo Caracter.
    char  cod_carta_1[3] = "01"; // Variável do Código da Carta 01 do tipo Inteiro.
    int num_habitantes_1, num_pontos_turisticos_1; // Variáveis do número de habitantes e quantidade de pontos turísticos da carta 01 do tipo Inteiro.
    float area_km2_1, pib_1; // Variáveis da área da cidade em km² e PIB da carta 01 do tipo Float.
    unsigned long int densidade_populacional_1; // Variável da densidade populacional da carta 01 do tipo Float.
    float pib_per_capita_1; // Variável do PIB per capita da carta 01 do tipo Float.
    float super_poder_1; // Variável do Super Poder da carta 01 do tipo Float.

    //Definição das varáveis da carta 02
    char estado_2[3], nome_cidade_2[50]; // Variáveis da sigla de estado e nome da cidade da carta 02 do tipo Caracter
    char cod_carta_2[3] = "02"; // Variável do Código da Carta 02 do tipo Inteiro.
    int num_habitantes_2, num_pontos_turisticos_2; // Variáveis do número de habitantes e quantidade de pontos turísticos da carta 02 do tipo Inteiro.
    float area_km2_2, pib_2; // Variáveis da área da cidade em km2 e PIB da carta 02 do tipo Float.
    unsigned long int densidade_populacional_2; // Variável da densidade populacional da carta 02 do tipo Float.
    float pib_per_capita_2; // Variável do PIB per capita da carta 02 do tipo Float.
    float super_poder_2; // Variável do Super Poder da carta 02 do tipo Float.
    
    // Variáveis para comparação entre as cartas
    int resultado_num_habitantes = num_habitantes_1 > num_habitantes_2; // Variável para comparação do número de habitantes entre as cartas 01 e 02 do tipo Inteiro.
    int resultado_area_km2 = area_km2_1 > area_km2_2; // Variável para comparação da área da cidade em km² entre as cartas 01 e 02 do tipo Inteiro.
    int resultado_pib = pib_1 > pib_2; // Variável para comparação do PIB entre as cartas 01 e 02 do tipo Inteiro.
    int resultado_num_pontos_turisticos = num_pontos_turisticos_1 > num_pontos_turisticos_2; // Variável para comparação da quantidade de pontos turísticos entre as cartas 01 e 02 do tipo Inteiro.
    float resultado_densidade_populacional = densidade_populacional_1 < densidade_populacional_2; // Variável para comparação da densidade populacional entre as cartas 01 e 02 do tipo Float.
    int resultado_pib_per_capita = pib_per_capita_1 > pib_per_capita_2; // Variável para comparação do PIB per capita entre as cartas 01 e 02 do tipo Inteiro.

  // Área para entrada de dados


  // *** Menu interativo para uso do professor



    printf("Bem vindo ao desafio Super Trunfo"); // Mensagem de boas-vindas
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização

        printf("-Para uso do PROFESSOR-\n");
        printf("Escolha uma opcao abaixo se deseja digitar os valores ou utilizar valores fixos ja predefinidos?\n");
            printf("1. Utilizar valores fixos\n");
            printf("2. Digitar valores\n");
            printf("\n"); //Espaçamento para melhor visualização
            printf("Selecione: ");
            scanf("%d", &escolha_professor); 
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização




                
            switch(escolha_professor) {  

               case 1: // Abertura do CASE 1 onde será exibido os valores fixos de trodos os atributos das cartas




        //Exibição dos dados fixos da carta 01
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 01
    printf("##                CARTA  01                ## \n"); //Banner para exibição da carta 01
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 01
        
        printf("|\n"); //Espaçamento para melhor visualização
    
    strcpy(estado_1, "SP");
    printf("| Estado: %s\n", estado_1); // Exibição da sigla do estado fixo da carta 01
        printf("| Codigo da carta: %s%s \n", estado_1, cod_carta_1); // Exibição do código da carta gerado a partir da sigla do estado fixo + código da carta 01
            strcpy(nome_cidade_1, "SPO");
            printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade fixo da carta 01
                printf("| Populacao: %d \n", num_habitantes_1 = 12325000); // Exibição do número fixo de habitantes da carta 01
                    printf("| Area (km2): %.2f Km2\n", area_km2_1 = 1521.11); // Exibição da área fixa da cidade em km2 da carta 01
                        printf("| PIB: %.2f bilhoes de reais\n", pib_1 = 699.28); // Exibição do PIB fixo da cidade da carta 01
                            printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_1 = 50); // Exibição da quantidade de pontos turísticos fixo da carta 01
                                printf("##-----------------------------------------## \n"); // Banner rodapé da carta 01
        
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização


        //Exibição dos dados fixos da carta 02
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 02
    printf("##                CARTA  02                ## \n"); //banner para exibição da carta 02
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 02
        
        printf("|\n"); //Espaçamento para melhor visualização

    strcpy(estado_2, "RJ");
    printf("| Estado: %s \n", estado_2); // Exibição da sigla do estado fixo da carta 02
        printf("| Codigo da carta: %s%d \n", estado_2, cod_carta_2); // Exibição do código da carta gerado a partir da sigla do estado fixo + código da carta 02
            strcpy(nome_cidade_2, "RJO");
            printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade fixa da carta 02
                printf("| Populacao: %d \n", num_habitantes_2 = 6748000); // Exibição do número de habitantes fixo da carta 02
                    printf("| Area (km2): %.2f Km2\n", area_km2_2 = 1200.25); // Exibição da área da cidade em km2 fixo da carta 02
                        printf("| PIB: %.2f bilhoes de reais\n", pib_2 = 300.50); // Exibição do PIB da cidade fixo da carta 02
                            printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_2 = 30); // Exibição da quantidade de pontos turísticos fixo da carta 02
                                printf("##-----------------------------------------##\n"); // Banner rodapé da carta 02


                printf("\n"); //Espaçamento para melhor visualização
                    printf("Os valores acima serao utilizados como base de calculo para o jogo. Deseja prosseguir (S/N): "); // Pergunta para escolha se usuário quer prosseguir com os valores fixos exibidos.
                    scanf(" %c", &prosseguir_escolha_professor);
                        printf("\n"); //Espaçamento para melhor visualização
                            printf("\n"); //Espaçamento para melhor visualização

                            if (prosseguir_escolha_professor == 's' || prosseguir_escolha_professor == 'S') {
                                    printf("Prosseguindo...\n");
                                    printf("\n"); //Espaçamento para melhor visualização

                            } else {
                                    printf("Impossivel prosseguir. O jogo sera fechado.\n");
                                    printf("\n"); //Espaçamento para melhor visualização
                                    return 0; // Finaliza o programa caso o usuario não aceite prosseguir.
                            }
                
                
                break; // Break do CASE 1  




                case 2: // Inicio do CASE 2





 //----------------------------- Área de código de cadastro da carta 1 -----------------------------//   

 
    printf("Cadastre a primeira Carta.\n"); // Mensagem de cadastro da Carta 1
        printf("\n"); //Espaçamento para melhor visualização
    
    printf("Estado: "); //Campo de entrada do estado
    scanf("%s", estado_1); //Campo onde o usuário irá escrever a sigla do estado

    printf("Nome da cidade: "); //Campo de entrada do nome da cidade
    scanf("%s", nome_cidade_1); //Campo onde o usuário irá escrever o nome da cidade

    printf("Populacao: "); //Campo de entrada do número de habitantes
    scanf("%d", &num_habitantes_1); //Campo onde o usuário irá escrever o número de habitantes

    printf("Area (km2): "); //Campo de entrada da área da cidade em km²
    scanf("%f", &area_km2_1); //Campo onde o usuário irá escrever a área da cidade em km²

    printf("PIB: "); //Campo de entrada do PIB da cidade
    scanf("%f", &pib_1); //Campo onde o usuário irá escrever o PIB da cidade

    printf("Numero de pontos turisticos: "); //Campo de entrada da quantidade de pontos turísticos
    scanf("%d", &num_pontos_turisticos_1); //Campo onde o usuário irá escrever quantidade de pontos turísticos da cidade
        
        printf("\n");
        printf("##---------Cadastro da Carta 01 realizada com sucesso-------------------## \n"); // Mensagem de cadastro da Carta 1 realizada com sucesso
 

    //----------------------------- Área de código de cadastro da carta 2 -----------------------------// 

        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização
    
    printf("Cadastre a segunda Carta.\n"); // Mensagem de cadastro da Carta 2
        printf("\n"); //Espaçamento para melhor visualização
    
    printf("Estado: "); //Campo de entrada do estado
        scanf("%s", estado_2); //Campo onde o usuário irá escrever a sigla do estado

    printf("Nome da cidade: "); //Campo de entrada do nome da cidade
        scanf("%s", nome_cidade_2); //Campo onde o usuário irá escrever o nome da cidade

    printf("Populacao: "); //Campo de entrada do número de habitantes
        scanf("%d", &num_habitantes_2); //Campo onde o usuário irá escrever o número de habitantes

    printf("Area (km2): "); //Campo de entrada da área da cidade em km2
        scanf("%f", &area_km2_2); //Campo onde o usuário irá escrever a área da cidade em km2

    printf("PIB: "); //Campo de entrada do PIB da cidade
        scanf("%f", &pib_2); //Campo onde o usuário irá escrever o PIB da cidade

    printf("Numero de pontos turisticos: "); //Campo de entrada da quantidade de pontos turísticos
        scanf("%d", &num_pontos_turisticos_2); //Campo onde o usuário irá escrever quantidade de pontos turísticos da cidade
        
        printf("\n");
        printf("##---------Cadastro da Carta 02 realizada com sucesso-------------------## \n"); // Mensagem de cadastro da Carta 2 realizada com sucesso
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização
        printf("-- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- / / -- \n"); // Banner de separação entre o cadastro da carta 01 e carta 02
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização



//---------------------Área de cáuculo da densidade populacional e PIB per capita da carta 01---------------------//

        //densidade_populacional_1_fixo = (float)(num_habitantes_1_fixo) / area_km2_1_fixo; // Cálculo da densidade populacional da carta 01 a partir do número de habitantes dividido pela área da cidade em km².
        //pib_per_capita_1 = (float)(pib_1 * 1000000000) / num_habitantes_1; // Cálculo do PIB per capita da carta 01 a partir do PIB da cidade multiplicado por 1 bilhão dividido pelo número de habitantes da cidade.
        densidade_populacional_1 = (float)(num_habitantes_1) / area_km2_1; // Cálculo da densidade populacional da carta 01 a partir do número de habitantes dividido pela área da cidade em km².
        pib_per_capita_1 = (float)(pib_1 * 1000000000) / num_habitantes_1; // Cálculo do PIB per capita da carta 01 a partir do PIB da cidade multiplicado por 1 bilhão dividido pelo número de habitantes da cidade.

//---------------------Área de cáuculo da densidade populacional e PIB per capita da carta 02---------------------//

        densidade_populacional_2 = (float)(num_habitantes_2) / area_km2_2; // Cálculo da densidade populacional da carta 02 a partir do número de habitantes dividido pela área da cidade em km².
        pib_per_capita_2 = (float)(pib_2 * 1000000000) / num_habitantes_2; // Cálculo do PIB per capita da carta 02 a partir do PIB da cidade multiplicado por 1 bilhão dividido pelo número de habitantes da cidade.

        
//--------------------- Área de caulculo para comparação entre as cartas

    super_poder_1 = pib_per_capita_1 + num_pontos_turisticos_1 + pib_1 + area_km2_1 + num_habitantes_1 + (1.0 / densidade_populacional_1); // Cálculo do Super Poder da carta 01, calculado a partir da soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    super_poder_2 = pib_per_capita_2 + num_pontos_turisticos_2 + pib_2 + area_km2_2 + num_habitantes_2 + (1.0 / densidade_populacional_2); // Cálculo do Super Poder da carta 02, calculado a partir da soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")



  // Área para exibição dos dados da cidade

    printf("\n"); //Espaçamento para melhor visualização
    printf("\n"); //Espaçamento para melhor visualização

    //Exibição dos dados da carta 01
    
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 01
    printf("##                CARTA  01                ## \n"); //Banner para exibição da carta 01
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 01
        
        printf("|\n"); //Espaçamento para melhor visualização
    
    printf("| Estado: %s \n", estado_1); // Exibição da sigla do state da carta 01
        printf("| Codigo da carta: %s%d \n", estado_1, cod_carta_1); // Exibição do código da carta gerado a partir da sigla do state + código da carta 01
            printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade da carta 01
                printf("| Populacao: %d \n", num_habitantes_1); // Exibição do número de habitantes da carta 01
                    printf("| Area (km2): %.2f Km2\n", area_km2_1); // Exibição da área da cidade em km2 da carta 01
                        printf("| PIB: %.2f bilhoes de reais\n", pib_1); // Exibição do PIB da cidade da carta 01
                            printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_1); // Exibição da quantidade de pontos turísticos da carta 01
                                printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_1); // Exibição da densidade populacional da carta 01
                                    printf("| PIB per Capita: %.2f reais\n", pib_per_capita_1); // Exibição do PIB per capita da carta 01
                                        printf("| Super Poder: %.2f \n", super_poder_1); // Exibição do Super Poder da carta 01, calculado a partir da soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
                                            printf("##-----------------------------------------## \n"); // Banner rodapé da carta 01
        
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização



        //Exibição dos dados da carta 02
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 02
    printf("##                CARTA  02                ## \n"); //banner para exibição da carta 02
    printf("##-----------------------------------------## \n"); //Banner para exibição da carta 02
        
        printf("|\n"); //Espaçamento para melhor visualização

    printf("| Estado: %s \n", estado_2); // Exibição da sigla do estado da carta 02
        printf("| Codigo da carta: %s%d \n", estado_2, cod_carta_2); // Exibição do código da carta gerado a partir da sigla do estado + código da carta 02
            printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade da carta 02
                printf("| Populacao: %d \n", num_habitantes_2); // Exibição do número de habitantes da carta 02
                    printf("| Area (km2): %.2f Km2\n", area_km2_2); // Exibição da área da cidade em km2 da carta 02
                        printf("| PIB: %.2f bilhoes de reais\n", pib_2); // Exibição do PIB da cidade da carta 02
                            printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_2); // Exibição da quantidade de pontos turísticos da carta 02
                                printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_2); // Exibição da densidade populacional da carta 02
                                    printf("| PIB per Capita: %.2f reais\n", pib_per_capita_2); // Exibição do PIB per capita da carta 02
                                        printf("| Super Poder: %.2f \n", super_poder_2); // Exibição do Super Poder da carta 02, calculado a partir da soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
                                            printf("##-----------------------------------------##\n"); // Banner rodapé da carta 02
        
        printf("\n"); //Espaçamento para melhor visualização
        printf("\n"); //Espaçamento para melhor visualização



//                        }

                    break; // Break do CASE 2.
                         } // Fechamneto do SWITCH







    // Área onde o usuário irá escolher qual atributo será comparado


        
    // Menu de seleção de atributo para comparação entre as cartas.
    printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
    printf("##    MENU DE ATRIBUTOS PARA COMPARACAO    ## \n"); // Banner para exibição da comparação entre as cartas
    printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
    printf("\n"); //Espaçamento para melhor visualização
    
    printf("Escola no menu abaixo, qual atributo sera usado para comparacao entre as cartas:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Num. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("\n"); //Espaçamento para melhor visualização
    printf("Selecione: ");
    scanf("%d", &escolha_usuario_atributo_comparacao);
    printf("\n"); //Espaçamento para melhor visualização






            switch (escolha_usuario_atributo_comparacao)    {


            case 1: // Comparação do número de habitantes (Polucação)

            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                printf("##         COMPARACAO DO ATRIBUTO          ## \n"); // Banner para exibição da comparação entre as cartas
                    printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                        printf("|               Carta 01\n");
                            printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade da carta 01
                                printf("| Populacao: %d \n", num_habitantes_1); // Exibição do número de habitantes da carta 01
                                    printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_1); // Exibição da densidade populacional da carta 01
                                        printf("|\n");
                                            printf("|               Carta 02\n");
                                                printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade da carta 02
                                                    printf("| Populacao: %d \n", num_habitantes_2); // Exibição do número de habitantes da carta 02
                                                        printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_2); // Exibição da densidade populacional da carta 02
                                                            printf("|\n");

                    if (densidade_populacional_1 < densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 01 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 01 venceu devido a Densidade\n Populacional ser menor que a carta 02.\n");
                    
                    } else if (densidade_populacional_1 > densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 02 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 02 venceu devido a Densidade\n Populacional ser menor que a carta 01.\n");

                    } else if (densidade_populacional_1 == densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.


                            if (num_habitantes_1 > num_habitantes_2) { // Comparação do número de habitantes entre as cartas.
                                printf("|**Carta 01 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 01 venceu devido ao Numero de Habitantes ser maior que a carta 02.\n");

                            } else if (num_habitantes_1 < num_habitantes_2) {
                                printf("|**Carta 02 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 02 venceu devido ao Numero de Habitantes ser maior que a carta 01.\n");
                            } else {
                                printf("|             ** EMPATE ***\n");
                                    printf("|\n");
                            }
                    } 
            printf("|\n");
            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas

            break;



            case 2: // Comparação áreas das cidades

            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                printf("##         COMPARACAO DO ATRIBUTO          ## \n"); // Banner para exibição da comparação entre as cartas
                    printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                        printf("|               Carta 01\n");
                            printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade da carta 01
                                printf("| Area (km2): %.2f Km2\n", area_km2_1); // Exibição da área da cidade em km2 da carta 01
                                    printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_1); // Exibição da densidade populacional da carta 01
                                        printf("|\n");
                                            printf("|               Carta 02\n");
                                                printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade da carta 02
                                                    printf("| Area (km2): %.2f Km2\n", area_km2_2); // Exibição da área da cidade em km2 da carta 02
                                                        printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_2); // Exibição da densidade populacional da carta 02
                                                            printf("|\n");

                    if (densidade_populacional_1 < densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 01 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 01 venceu devido a Densidade\n Populacional ser menor que a carta 02.\n");
                    
                    } else if (densidade_populacional_1 > densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 02 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 02 venceu devido a Densidade\n Populacional ser menor que a carta 01.\n");

                    } else if (densidade_populacional_1 == densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.


                            if (area_km2_1 > area_km2_2) { // Comparação do número de habitantes entre as cartas.
                                printf("|**Carta 01 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 01 venceu devido a Area(km2) ser maior que a carta 02.\n");

                            } else if (area_km2_1 < area_km2_2) {
                                printf("|**Carta 02 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 02 venceu devido a area(km2) ser maior que a carta 01.\n");
                            } else {
                                printf("|             ** EMPATE ***\n");
                                    printf("|\n");
                            }
                    } 
            printf("|\n");
            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas

            break;




            case 3: // Comparação áreas das cidades

            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                printf("##         COMPARACAO DO ATRIBUTO          ## \n"); // Banner para exibição da comparação entre as cartas
                    printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                        printf("|               Carta 01\n");
                            printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade da carta 01
                                printf("| PIB: %.2f bilhoes de reais\n", pib_1); // Exibição do PIB da cidade da carta 01
                                    printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_1); // Exibição da densidade populacional da carta 01
                                        printf("|\n");
                                            printf("|               Carta 02\n");
                                                printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade da carta 02
                                                    printf("| PIB: %.2f bilhoes de reais\n", pib_2); // Exibição do PIB da cidade da carta 02
                                                        printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_2); // Exibição da densidade populacional da carta 02
                                                            printf("|\n");

                    if (densidade_populacional_1 < densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 01 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 01 venceu devido a Densidade\n Populacional ser menor que a carta 02.\n");
                    
                    } else if (densidade_populacional_1 > densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 02 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 02 venceu devido a Densidade\n Populacional ser menor que a carta 01.\n");

                    } else if (densidade_populacional_1 == densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.


                            if (pib_1 > pib_2) { // Comparação do número de habitantes entre as cartas.
                                printf("|**Carta 01 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 01 venceu devido ao PIB ser maior que a carta 02.\n");

                            } else if (pib_1 < pib_2) {
                                printf("|**Carta 02 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 02 venceu devido ao PIB ser maior que a carta 01.\n");
                            } else {
                                printf("|             ** EMPATE ***\n");
                                    printf("|\n");
                            }
                    } 
            printf("|\n");
            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas

            break;





            case 4: // Comparação áreas das cidades

            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                printf("##         COMPARACAO DO ATRIBUTO          ## \n"); // Banner para exibição da comparação entre as cartas
                    printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                        printf("|               Carta 01\n");
                            printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade da carta 01
                                printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_1); // Exibição da quantidade de pontos turísticos da carta 01
                                    printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_1); // Exibição da densidade populacional da carta 01
                                        printf("|\n");
                                            printf("|               Carta 02\n");
                                                printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade da carta 02
                                                    printf("| Numero de pontos turisticos: %d \n", num_pontos_turisticos_2); // Exibição da quantidade de pontos turísticos da carta 02
                                                        printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_2); // Exibição da densidade populacional da carta 02
                                                            printf("|\n");

                    if (densidade_populacional_1 < densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 01 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 01 venceu devido a Densidade\n Populacional ser menor que a carta 02.\n");
                    
                    } else if (densidade_populacional_1 > densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 02 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 02 venceu devido a Densidade\n Populacional ser menor que a carta 01.\n");

                    } else if (densidade_populacional_1 == densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.


                            if (num_pontos_turisticos_1 > num_pontos_turisticos_2) { // Comparação do número de habitantes entre as cartas.
                                printf("|**Carta 01 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 01 venceu devido a quantidade de Pontos Turisticos ser maior que a carta 02.\n");

                            } else if (num_pontos_turisticos_1 < num_pontos_turisticos_2) { // Comparação do número de habitantes entre as cartas.
                                printf("|**Carta 02 venceu!\n");
                                    printf("|\n");
                                        printf("|Obs.: Carta 02 venceu devido a quantidade de Pontos Turisticos ser maior que a carta 01.\n");
                            } else {
                                printf("|             ** EMPATE ***\n");
                                    printf("|\n");
                            }   
                    } 
            printf("|\n");
            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas

            break;




            case 5: // Comparação áreas das cidades

            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                printf("##         COMPARACAO DO ATRIBUTO          ## \n"); // Banner para exibição da comparação entre as cartas
                    printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas
                        printf("|               Carta 01\n");
                            printf("| Nome da cidade: %s \n", nome_cidade_1); // Exibição do nome da cidade da carta 01
                                printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_1); // Exibição da densidade populacional da carta 01
                                    printf("|\n");
                                        printf("|               Carta 02\n");
                                            printf("| Nome da cidade: %s \n", nome_cidade_2); // Exibição do nome da cidade da carta 02
                                                printf("| Densidade populacional: %lu hab/km2 \n", densidade_populacional_2); // Exibição da densidade populacional da carta 02
                                                    printf("|\n");

                    if (densidade_populacional_1 < densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 01 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 01 venceu devido a Densidade\n Populacional ser menor que a carta 02.\n");
                    
                    } else if (densidade_populacional_1 > densidade_populacional_2) { // Comparação da densidade populacional entre as cartas.
                        printf("|**Carta 02 venceu!\n");
                            printf("|\n");
                                printf("|Obs.: Carta 02 venceu devido a Densidade\n Populacional ser menor que a carta 01.\n");

                    } else {
                        printf("|             ** EMPATE ***\n");

                    }
            printf("|\n");
            printf("##-----------------------------------------## \n"); // Banner para exibição da comparação entre as cartas

            break; }


            printf("\n"); //Espaçamento para melhor visualização
                printf("\n"); //Espaçamento para melhor visualização
                    printf("\n"); //Espaçamento para melhor visualização

return 0;

}
