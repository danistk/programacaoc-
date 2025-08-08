
#include <stdio.h>
#include <string.h>

 int carta;
char codgcarta [50];
char estado[50];
char cidade[50];
float populacao,area,Pib;
float numpontoturst;
float densid,calcpib;

int main () {
    

   


printf ("Digite o numero da Primeira carta\n");
   scanf("%d",&carta);


    printf ("Digite o estado\n");
   scanf(" %[^\n]",estado);
   
    printf ("Digite o codigo da carta\n");
   scanf(" %[^\n]",codgcarta);

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
   
   densid = populacao / area;
    
    calcpib = Pib / populacao;



   printf ("carta: %d\n",carta);
   printf ("Estado: %s \n",estado);
   printf ("codigo da carta: %s \n",codgcarta);
   printf ("Cidade: %s \n",cidade);
   printf ("População: %f \n",populacao);
   printf ("Area: %.2f m2 \n",area);
   printf ("PIB: %.2f $ \n",Pib);
   printf ("Quantidade de pontos Turisticos: %.2f \n",numpontoturst);
   printf ("Densidade Populacional %.2f  hab/km²\n",densid);
   printf ("PIB per Capita: %.2f  de reais\n",densid);


    printf ("Digite o numero da Segunda carta\n");   
   scanf("%d",&carta);

    printf ("Digite o estado\n");
   scanf(" %[^\n]",estado);
   
    printf ("Digite o codigo da carta\n");
   scanf(" %[^\n]",codgcarta);

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


    densid = populacao / area;
    
    calcpib = Pib / populacao;


   printf ("carta: %d\n",carta);
   printf ("Estado: %s \n",estado);
   printf ("codigo da carta: %s \n",codgcarta);
   printf ("Cidade: %s \n",cidade);
   printf ("População: %f \n",populacao);
   printf ("Area: %.2f m2 \n",area);
   printf ("PIB: %.2f $ \n",Pib);
   printf ("Quantidade de pontos Turisticos: %.2f \n",numpontoturst);
   printf ("Densidade Populacional %.2f  hab/km²\n",densid);
   printf ("PIB per Capita: %.2f  de reais\n",densid);


return 0;
}
