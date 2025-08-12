
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
char estado2 [50];
char cidade2 [50];
float populacao2,area2,Pib2;
float numpontoturst2;
float densid2,calcpib2,superpoder1,superpoder2;
int resultado;
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
   
   densid1 = populacao1 / area1;
    
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


    densid2 = populacao2 / area2;
    
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

   

   if (populacao1 > populacao2){
       printf (" Populacao Carta 1 VENCEU\n");
   } if (populacao2 > populacao1){
   printf (" Populacao Carta 2 VENCEU\n");
   }if (area1 > area2){
       printf (" Aera Carta 1 VENCEU\n");
   } if (area2 > area1){
   printf (" Area Carta 2 VENCEU\n");
   }if (Pib1 > Pib2){
       printf (" PIB Carta 1 VENCEU\n");
   } if (Pib2 > Pib1){
   printf (" PIB Carta 2 VENCEU\n");
   }if (numpontoturst1 > numpontoturst2){
       printf (" Pontos Turisticos Carta 1 VENCEU\n");
   } if (numpontoturst2 > numpontoturst1){
   printf (" Pontos Turisticos Carta 2 VENCEU\n");
   }if (densid1 > densid2){
       printf (" Densidade Populacional Carta 1 VENCEU\n");
   } if (densid2 < densid1){
   printf (" Densidade Populacional Carta 2 VENCEU\n");
   }if (calcpib1 > calcpib2){
       printf (" PIB Per Capita Carta 1 VENCEU\n");
   } if (calcpib2 > calcpib1){
   printf (" PIB  Per Capita Carta 2 VENCEU\n");
   }
   if (superpoder1 > superpoder2){
       printf (" Super poder Carta 1 VENCEU\n");
   } if (superpoder2> superpoder1){
   printf ("Suoer Poder Carta 2 VENCEU\n");
   }

return 0;
}
