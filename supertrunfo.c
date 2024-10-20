#include <stdio.h>

//Primeira parte: cadastro
//Variaveis Carta 1 

   /*Primeira linha: contém a informação do país já definida.
   Segunda linha: permite ao usuário inserir as cidades referentes às cartas A01, A02, A03 e A04.
   Terceira linha: solicita ao usuário a população de cada cidade.
   Quarta linha: solicita ao usuário a área de cada cidade.
   Quinta linha: solicita ao usuário o PIB de cada cidade.
   Sexta linha: solicita ao usuário a quantidade de pontos turísticos de cada cidade.*/

 int main() {
    char pais[20] = "Alemanha";  
    char a01[20], a02[20], a03[20], a04[20];
    double populacao01a, populacao02a, populacao03a, populacao04a;
    float area01a, area02a, area03a, area04a;
    double pib01a, pib02a, pib03a, pib04a;
    int lugares01a, lugares02a, lugares03a, lugares04a;


    printf("ola, seja bem vindo ao jogo Super Trunfo\n");
    printf("O primeiro pais é a : %s\n", pais);
    printf("E começaremos pelo estado A:\n");

    printf("Adicione as cidades referente as cartas de numeração A01, A02, A03 e A04 :\n");
    scanf(" %s %s %s %s", a01, a02, a03, a04);
    printf("As cidades e o numero dessas cartas vão ser: A01=%s : A02=%s : A03=%s : A04=%s\n", a01, a02, a03, a04);

    printf("Adicione a população das cartas A01=%s, A02=%s, A03=%s, A04=%s :\n", a01, a02, a03, a04 );
    scanf("%lf %lf %lf %lf", &populacao01a, &populacao02a, &populacao03a, &populacao04a );

    printf("Adicione as areas das cartas A01=%s, A02=%s, A03=%s, A04=%s\n", a01, a02, a03, a04);
    scanf("%f %f %f %f", &area01a, &area02a, &area03a, &area04a);

    printf("Adicione o Pib das cartas: A01=%s, A02=%s, A03=%s, A04=%s \n", a01, a02, a03, a04 );
    scanf("%lf %lf %lf %f", &pib01a, &pib02a, &pib03a, &pib04a );

    printf("Adicione a quantidade de pontos turisticos das cidades:A01=%s, A02=%s, A03=%s, A04=%s :\n", a01, a02, a03, a04 );
    scanf("%d %d %d %d", &lugares01a, &lugares02a, &lugares03a, &lugares04a);

    printf ("A carta A1=%s ficou: População=%lf, Area=%f, Pib=%lf, Quantidades de Pontos Turisticos=%d\n "
     , a01, populacao01a, area01a, pib01a, lugares01a);

    printf("A carta A02=%s ficou: População=%lf, Área=%f, PIB=%lf, Quantidade de Pontos Turísticos=%d\n", 
     a02, populacao02a, area02a, pib02a, lugares02a);

    printf("A carta A03=%s ficou: População=%lf, Área=%f, PIB=%lf, Quantidade de Pontos Turísticos=%d\n", 
       a03, populacao03a, area03a, pib03a, lugares03a);

    printf("A carta A04=%s ficou: População=%lf, Área=%f, PIB=%lf, Quantidade de Pontos Turísticos=%d\n", 
    a04, populacao04a, area04a, pib04a, lugares04a);

    //variaves cartas 2
  
    char b01[20], b02[20], b03[20], b04[20];
    double populacao01b, populacao02b, populacao03b, populacao04b;
    float area01b, area02b, area03b, area04b;
    double pib01b, pib02b, pib03b, pib04b;
    int lugares01b, lugares02b, lugares03b, lugares04b;


    printf("Agora o estado é o B : %s\n");

    printf("Adicione as cidades referente as cartas de numeração B01, B02, B03 e B04 :\n");
    scanf(" %s %s %s %s", b01, b02, b03, b04);
    printf("As cidades e o numero dessas cartas vão ser: B01=%s : B02=%s : B03=%s : B04=%s\n", b01, b02, b03, b04);

    printf("Adicione a população das cartas B01=%s, B02=%s, B03=%s, B04=%s :\n", b01, b02, b03, b04 );
    scanf("%lf %lf %lf %lf", &populacao01b, &populacao02b, &populacao03b, &populacao04b );

    printf("Adicione as areas das cartas B01=%s, B02=%s, B03=%s, B04=%s\n", b01, b02, b03, b04);
    scanf("%f %f %f %f", &area01b, &area02b, &area03b, &area04b);

    printf("Adicione o Pib das cartas: B01=%s, B02=%s, B03=%s, B04=%s \n", b01, b02, b03, b04 );
    scanf("%lf %lf %lf %f", &pib01b, &pib02b, &pib03b, &pib04b );

    printf("Adicione a quantidade de pontos turisticos das cidades:B01=%s, B02=%s, B03=%s, B04=%s :\n", a01, a02, a03, a04 );
    scanf("%d %d %d %d", &lugares01b, &lugares02b, &lugares03b, &lugares04b);

    printf ("A carta B01=%s ficou: População=%lf, Area=%f, Pib=%lf, Quantidades de Pontos Turisticos=%d\n "
     , b01, populacao01b, area01b, pib01b, lugares01b);

    printf("A carta B02=%s ficou: População=%lf, Área=%f, PIB=%lf, Quantidade de Pontos Turísticos=%d\n", 
     b02, populacao02b, area02b, pib02b, lugares02b);

    printf("A carta B03=%s ficou: População=%lf, Área=%f, PIB=%lf, Quantidade de Pontos Turísticos=%d\n", 
       b03, populacao03b, area03b, pib03b, lugares03b);

    printf("A carta B04=%s ficou: População=%lf, Área=%f, PIB=%lf, Quantidade de Pontos Turísticos=%d\n", 
    b04, populacao04b, area04b, pib04b, lugares04b);


    // Nao ficou especificado se era pra fazer para todos os estados e pises, e sim que era pra dar atenção pra as cidades
    
    }
    




    
    
    }
    