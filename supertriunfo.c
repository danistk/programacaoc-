
#include <stdio.h>
#include <string.h>

 int carta1;
char codgcarta1 [50];
char estado1[50];
char cidade1[50];
float populacao1,area1,Pib1;
float numpontoturst1;
float densid1,calcpib1;


int carta2;
char codgcarta2 [50];
char nomepais1 [70];
char estado2 [50];
char cidade2 [50];
float populacao2,area2,Pib2;
float numpontoturst2;
float densid2,calcpib2,superpoder1,superpoder2;
int resultado;
int escolha1,escolha2;
 

int main () {

    
   


printf ("Digite o numero da Primeira carta\n");
   scanf("%d",&carta1);


    printf ("Digite o estado\n");
   scanf(" %[^\n]",estado1);
   
    printf ("Digite o codigo da carta\n");
   scanf(" %[^\n]",codgcarta1);

    printf ("Digite a cidade\n");
   scanf(" %[^\n]",cidade1);

    printf ("Digite a tanto de populacao\n");
   scanf(" %f",&populacao1);

    printf ("Digite o AREA\n");
   scanf(" %f",&area1);

    printf ("Digite o PIB\n");
   scanf(" %f",&Pib1);

    printf ("Digite o Numero de Pontos Turisticos\n");
   scanf(" %f",&numpontoturst1);
   
   // calculando a densidade populacional
   densid1 = populacao1 / area1;
    // calculando o pib super capita 
    calcpib1 = Pib1 / populacao1;

     superpoder1 = (populacao1 + area1 + Pib1 + numpontoturst1 + densid1);

   printf ("carta: %d\n",carta1);
   printf ("Estado: %s \n",estado1);
   printf ("codigo da carta: %s \n",codgcarta1);
   printf ("Cidade: %s \n",cidade1);
   printf ("População: %f \n",populacao1);
   printf ("Area: %.2f m2 \n",area1);
   printf ("PIB: %.2f $ \n",Pib1);
   printf ("Quantidade de pontos Turisticos: %.2f \n",numpontoturst1);
   printf ("Densidade Populacional %.2f  hab/km²\n",densid1);
   printf ("PIB per Capita: %.2f  de reais\n",calcpib1);


    printf ("Digite o numero da Segunda carta\n");   
   scanf("%d",&carta2);

    printf ("Digite o estado\n");
   scanf(" %[^\n]",estado2);
   
    printf ("Digite o codigo da carta\n");
   scanf(" %[^\n]",codgcarta2);
   
   printf ("Digite a cidade\n");
   scanf(" %[^\n]",cidade2);

    printf ("Digite a tanto de populacao\n");
   scanf(" %f",&populacao2);

    printf ("Digite o AREA\n");
   scanf(" %f",&area2);

    printf ("Digite o PIB\n");
   scanf(" %f",&Pib2);

    printf ("Digite o Numero de Pontos Turisticos\n");
   scanf(" %f",&numpontoturst2);

    // calculando a densidade populacional
    densid2 = populacao2 / area2;
    // calculando o pib super capita
    calcpib2 = Pib2 / populacao2;

    superpoder2 = (populacao2 + area2 + Pib2 + numpontoturst2 + densid2);

   printf ("carta: %d\n",carta2);
   printf ("Estado: %s \n",estado2);
   printf ("codigo da carta: %s \n",codgcarta2);
   printf ("Cidade: %s \n",cidade2);
   printf ("População: %f \n",populacao2);
   printf ("Area: %.2f m2 \n",area2);
   printf ("PIB: %.2f $ \n",Pib2);
   printf ("Quantidade de pontos Turisticos: %.2f \n",numpontoturst2);
   printf ("Densidade Populacional %.2f  hab/km²\n",densid2);
   printf ("PIB per Capita: %.2f  de reais\n",calcpib2);

   
   printf ("****** JOGADOR, Agora vamos fazer a comparaçao dos Atributos ****** \n");
   printf ("Digite para o nome do pais\n");
   scanf("%s",&nomepais1);
   printf ("Digite 1 para POPULACÃ0\n");
   printf ("Digite 2 para ÁREA\n");
   printf ("Digite 3 para PIB\n");
   printf ("Digite 4 para NUMERO DE PONTOS TURISTICOS\n");
   printf ("Digite 5 para DENSIDADE DEMOGRAFICA\n");
   scanf ("%d",&escolha1);


   switch (escolha1)
   {
   case 1: 
     printf ("Você escolheu POPULAÇÃO\n");
    break;
   case 2:
     printf ("Você escolheu ÁREA\n");
    break; 
   case 3:
     printf ("Você escolheu PIB\n");
    break; 
   case 4:
     printf ("Você escolheu NUMERO DE PONTO TURISTICO\n");
    break; 
   case 5:
     printf ("Você escolheu DENSIDADE DEMOGRÁFICA\n");
    break;    
   default:
     printf ("OPÇÃO INVALIDA !\n");
    break;
   }



    if (escolha1 ==1 && populacao1 > populacao2){
       printf ("Nome do Pais: %s \n",nomepais1); 
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %.2f\n",cidade1,populacao1,"\n");
       printf ("Carta 2 - %s %.2f\n", cidade2,populacao2,"\n");
       printf ("Resultado: Carta 1 %s venceu ! \n", cidade1);
   } else if(escolha1 ==1 && populacao1 < populacao2){
       printf ("Nome do Pais: %s \n",nomepais1); 
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %.2f\n" ,cidade1,populacao1,"\n");
       printf ("Carta 2 - %s %.2f\n", cidade2,populacao2,"\n");
       printf ("Resultado: Carta 2: %s VENCEU !\n", cidade2);
   } else if (escolha1 == 1 && populacao1 == populacao2){
       printf("EMPATE !! \n");

   }
    if (escolha1 ==2 && area1 > area2){
       printf ("Nome do Pais: %s \n",nomepais1);  
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %.2f\n",cidade1,area1,"\n");
       printf ("Carta 2 - %s %.2f\n", cidade2,area2,"\n");
       printf ("Resultado: Carta 1 %s venceu ! \n", cidade1);
   } else if (escolha1 ==2 && area1 < area2) {
       printf ("Nome do Pais: %s \n",nomepais1);  
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %.2f\n" ,cidade1,area1,"\n");
       printf ("Carta 2 - %s %.2f\n", cidade2,area2,"\n");
       printf ("Resultado: Carta 2: %s VENCEU !\n", cidade2);
   } else if (escolha2 == 2 && area1 == area2){
      printf ("EMPATE !!");
   }

     if (escolha1 ==3 && Pib1 > Pib2){
       printf ("Nome do Pais: %s \n",nomepais1);   
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %.2f\n",cidade1,Pib1,"\n");
       printf ("Carta 2 - %s %.2f\n", cidade2,Pib2,"\n");
       printf ("Resultado: Carta 1 %s venceu ! \n", cidade1);
    } else if (escolha1 ==3 && Pib1 < Pib2){
       printf ("Nome do Pais: %s \n",nomepais1); 
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %.2f\n" ,cidade1,Pib1,"\n");
       printf ("Carta 2 - %s %.2f\n", cidade2,Pib2,"\n");
       printf ("Resultado: Carta 2: %s VENCEU !\n", cidade2);
   } else if (escolha2 == 3 && Pib1 == Pib2){
      printf ("EMPATE !!");
   }
   if (escolha1 ==4 && numpontoturst1 > numpontoturst2){
       printf ("Nome do Pais: %s \n",nomepais1); 
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %df\n",cidade1,numpontoturst1,"\n");
       printf ("Carta 2 - %s %df\n", cidade2,numpontoturst2,"\n");
       printf ("Resultado: Carta 1 %s venceu ! \n", cidade1);
   } else if(escolha1 ==4 && numpontoturst1 < numpontoturst2){
       printf ("Nome do Pais: %s \n",nomepais1); 
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %d\n" ,cidade1,numpontoturst1,"\n");
       printf ("Carta 2 - %s %d\n", cidade2,numpontoturst2,"\n");
       printf ("Resultado: Carta 2: %s VENCEU !\n", cidade2);
   } else if (escolha2 == 4 && numpontoturst1 == numpontoturst2){
      printf ("EMPATE !!");
   }   

    if (escolha1 ==5 && densid1 < densid2){
       printf ("Nome do Pais: %s \n",nomepais1);  
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %df\n",cidade1,densid1,"\n");
       printf ("Carta 2 - %s %df\n", cidade2,densid2,"\n");
       printf ("Resultado: Carta 1 %s venceu ! \n", cidade1);
   } else if (escolha1 ==5 && densid1 > densid2){
       printf ("Nome do Pais: %s \n",nomepais1);  
       printf (" Comparação de cartas (Atributo: População):\n");
       printf ("Carta 1 - %s %.2f\n" ,cidade1,densid1,"\n");
       printf ("Carta 2 - %s %.2f\n", cidade2,densid2,"\n");
       printf ("Resultado: Carta 2: %s VENCEU !\n", cidade2);
   } else if (escolha2 == 4 && densid1 == densid2){
      printf ("EMPATE !!");
   }

return 0;
}
