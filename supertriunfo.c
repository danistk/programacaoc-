
#include <stdio.h>
#include <string.h>

 int carta;
char codgcarta [10];
char estado[3];
char cidade[50];
float populacao,area,Pib;
float numpontoturst;


int main () {
    

   


printf ("Digite o numero da Primeira carta\n");
   scanf("%d",&carta);


    printf ("Digite o codigo da carta\n");
   scanf(" %[^\n]",codgcarta);

    printf ("Digite o estado\n");
   scanf(" %[^\n]",estado);

    printf ("Digite a cidade\n");
   scanf(" %[^\n]",cidade);

       printf ("Digite a tanto de populacao\n");
   scanf(" %f",&populacao);

       printf ("Digite o AREA\n");
   scanf(" %f",&area);

       printf ("Digite o PIB\n");
   scanf(" %f",&Pib);

   printf ("Digite o Numero de Pontos Turisticos\n");
   scanf(" %f",&numpontoturst);





   printf ("carta: %d\n",carta);
   printf ("codigo da carta: %s \n",codgcarta);
   printf ("Estado: %s \n",estado);
   printf ("Cidade: %s \n",cidade);
   printf ("População: %f \n",populacao);
   printf ("Area: %f m2 \n",area);
   printf ("PIB: %f $ \n",Pib);
   printf ("Quantidade de pontos Turisticos: %f \n",numpontoturst);


printf ("Digite o numero da Segunda carta\n");
   scanf("%d",&carta);


    printf ("Digite o codigo da carta\n");
   scanf(" %[^\n]",codgcarta);

    printf ("Digite o estado\n");
   scanf(" %[^\n]",estado);

    printf ("Digite a cidade\n");
   scanf(" %[^\n]",cidade);

       printf ("Digite a tanto de populacao\n");
   scanf(" %3f",&populacao);

       printf ("Digite o AREA\n");
   scanf(" %3f",&area);

       printf ("Digite o PIB\n");
   scanf(" %3f",&Pib);

   printf ("Digite o Numero de Pontos Turisticos\n");
   scanf(" %0f",&numpontoturst);





   printf ("carta: %d\n",carta);
   printf ("codigo da carta: %s \n",codgcarta);
   printf ("Estado: %s \n",estado);
   printf ("Cidade: %s \n",cidade);
   printf ("População: %f \n",populacao);
   printf ("Area: %f m2 \n",area);
   printf ("PIB: %f $ \n",Pib);
   printf ("Quantidade de pontos Turisticos: %f \n",numpontoturst);



return 0;
}