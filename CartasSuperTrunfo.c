#include <stdio.h>

int main(){

char estadoaA01[60],estadoaB01[60];

// Definindo o estado, para definir as cidade. Char para identificar caracteres. Usar no futuro.//

char cidadeA01[60],cidadeB01[60];

//Definindo a cidade. //

char codigocartaA01[60],codigocartaB01[60];

//Código da carta. //

int populacaoA01,populacaoB01;

// Definindo populações das cidades. Int para utilizar números inteiros. //

float areaA01,areaB01;

// Definindo a área das cartas. Utilizando float para poder colocar números não inteiros. //

float PIBA01,PIBB01;

// Definindo PIB, mesma lógica na linha de cima. //

int pturisticoA01,pturisticoB01;

// pturistico para definir ponto turísticos. Int para números inteiros. //




// Aqui começaremos a pegar informações para as cartas. Utilizarei scanf para pegar informações e printf para mostrar essas informações. //




    printf("Começaremos pegando a informações da Carta A01. \nDigite o Estado: \n");
    // \n para quebrar a linha //
    
    scanf ("%s", &estadoaA01);
    // Utilizando o identificador para identificar o tipo de variável, e utilizando o & para reconhecer a variável digitada. //
    
    printf ("O Estado de A01 é, %s, agora digite a cidade a A01: \n", estadoaA01);
    scanf ("%s", &cidadeA01);
    printf ("A cidade escolhida foi %s, agora iremos colocar os status das cartas! \nColoque a população da cidade: \n", cidadeA01);
    
    scanf ("%i", &populacaoA01);
    //Utilizando o identificador %i, pra identificar inteiros. //
    printf ("A população de %s, é de %i habitantes. \nVamos definir a área da %s (Coloque o area inteira.):\n", cidadeA01, populacaoA01, cidadeA01);
    
    scanf("%f", &areaA01);
    // Utilizamos o identificador %f para definir números reais. //
    printf("A área de %s é de %.0f km². \nVamos definir o PIB (Coloque o número inteiro.): \n", cidadeA01, areaA01);
    
    scanf("%f", &PIBA01);
    printf("O PIB de %s, é de %.0f de reais! \nVamos definir os pontos turísticos:\n", cidadeA01,PIBA01);
    
    scanf("%i", &pturisticoA01);
    printf("Existem %i pontos turísticos em %s. \n", pturisticoA01,cidadeA01);
    

    // Daqui para baixo é status com calculos.//

    float densiA01 = (float) populacaoA01 / areaA01;
    float pibpercapitaA01 = PIBA01 / (float) populacaoA01;
    //Fim da carta A01, vamos para carta B01 //
    




    printf("Agora iremos definir a carta B01. \nDigite o estado de B01: \n");

    scanf ("%s", &estadoaB01);
    // Utilizando o identificador para identificar o tipo de variável, e utilizando o & para reconhecer a variável digitada. //
    
    printf ("O Estado de B01 é, %s, agora digite a cidade a B01: \n", estadoaB01);
    scanf ("%s", &cidadeB01);
    printf ("A cidade escolhida foi %s, agora iremos colocar os status das cartas! \nColoque a população da cidade: \n", cidadeB01);
    
    scanf ("%i", &populacaoB01);
    //Utilizando o identificador %i, pra identificar inteiros. //
    printf ("A população de %s, é de %i habitantes. \nVamos definir a área de %s(Coloque o número inteiro.):\n", cidadeB01, populacaoB01, cidadeB01);
    
    scanf("%f", &areaB01);
    // Utilizamos o identificador %f para definir números reais. //
    printf("A área de %s é de %.0f km². \nVamos definir o PIB(Coloque o número inteiro.): \n", cidadeB01, areaB01);
    
    scanf("%f", &PIBB01);
    printf("O PIB de %s, é de %.0f bilhões de reais! \nVamos definir os pontos turísticos:\n", cidadeB01,PIBB01);
    
    scanf("%i", &pturisticoB01);
    printf("Existem %i pontos turísticos em %s. \n", pturisticoB01,cidadeB01);

    // Daqui para baixo é status com calculos.//

    float densiB01 = (float) populacaoB01 / areaB01;
    float pibpercapitaB01 = PIBB01 / (float) populacaoB01;
    //Fim carta B01//
  
// Aqui iremos mostrar o status das cartas //
printf("Suas duas cartas são: \n");

printf("------------------------\nCarta: A01");
printf("\nEstado: %s", estadoaA01);
printf("\nCidade: %s ", cidadeA01);   
printf("\nPopulação: %i ", populacaoA01); 
printf("\nÁrea: %.0f ", areaA01); 
printf("\nPIB: %i ", PIBA01);
printf("\nPontos Turísticos: %i ", pturisticoA01); 
printf("\nPib per capita: %.0f", pibpercapitaA01)
printf("\nDensidade Populacional: %.0f \n------------------------\n", densiA01);  
;
// //

printf("------------------------\nCarta: B01");
printf("\nEstado: %s", estadoaB01);
printf("\nCidade: %s ", cidadeB01);   
printf("\nPopulação: %i ", populacaoB01); 
printf("\nÁrea: %.0f ", areaB01); 
printf("\nPIB: %i ", PIBB01);
printf("\nPontos Turísticos: %i ", pturisticoB01);
printf("\nPib per capita: %.0f", pibpercapitaB01);
printf("\nDensidade Populacional: %.0f \n------------------------\n", densiB01);  

}