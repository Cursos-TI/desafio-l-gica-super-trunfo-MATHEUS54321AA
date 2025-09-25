#include <stdio.h> 

int main(){

   unsigned long int população1, população2;
   int turismo1, turismo2;
   float area1, area2;
   float pib1, pib2;
   float densidade1, densidade2;
   float pibpercapita1, pibpercapita2;
   float superpoder1, superpoder2;
   char estado1, estado2;
   char código1[20], código2[20];
   char cidade1[20], cidade2[20];

   // leitura da primeira carta//

   printf("Carta1:\n ");

   printf("Estado de (A-H): ");
   scanf("%c", &estado1);

   printf("Código: ");
   scanf("%s", &código1);

   printf("Nome da cidade: ");
   scanf("%s", &cidade1);

   printf("População: ");
   scanf("%lu", &população1);

   printf("Área em km: ");
   scanf("%f", &area1);

   printf("Pib: ");
   scanf("%f", &pib1);

   printf("Pontos turistíscos: ");
   scanf("%d", &turismo1);


   // leitura carta 2

   printf("carta 2: \n");

   printf("Estado de (A-H): ");
   scanf("%c", &estado2);

   printf("Código: ");
   scanf("%s", &código2);

   printf("Nome da cidade: ");
   scanf("%s", &cidade2);

   printf("População: ");
   scanf("%lu", &população2);

   printf("Área em km: ");
   scanf("%f", &area2);

   printf("Pib: "); 
   scanf("%f", &pib2);

   printf("Pontos turistícos: ");
   scanf("%d", &turismo2);

   //Cálculos da primeira carta

   densidade1 = população1 / area1;
   pibpercapita1 = pib1 / população1;
   superpoder1 = população1 + area1 + pib1 + turismo1 + pibpercapita1 + (1.0 / densidade1);

   //Cálculos da segunda carta

   densidade1 = população2 / area2;
   pibpercapita2 = pib2 / população2;
   superpoder2 = população2 + area2 + pib2 + turismo2 + pibpercapita2 + (1.0 / densidade2);

   // Comparação atributo: População//
      
       if (população1 > população2) {
        printf("Carta 1 venceu!\n");
    } else{
        printf("Carta 2 venceu!\n");
    }

   // comparação das cartas

   printf("\nComparação de cartas: \n");
   
   printf("A população: carta 1 venceu (%d)\n", população1 > população2);
   printf("Área: Carta 1 venceu(%d)\n", area1 > area2);
   printf("Pib: Carta 1 venceu (%d)\n", pib1 > pib2);
   printf("Pontos turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
   printf("Densidade: Carta 1 venceu (%d)\n", densidade1 > densidade2);
   printf("Pibpercapita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
   printf("Super poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

   return 0;
}