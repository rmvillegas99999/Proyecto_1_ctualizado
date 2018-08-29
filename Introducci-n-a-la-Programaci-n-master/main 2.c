#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float ft,yarda,inch,cm,m;
  
  printf("E'ste programa sirve para convertir pies(ft) a yardas,pulgadas,cm y metros\n\n");

  printf("Cantidad de pies:  ");
  scanf("%f",&ft);
 
   yarda= ft/3;
   inch= 12*ft;
   cm= inch*2.54;
   m= cm/100;
 
 printf("\nEstas son las conversiones: \n\nyardas: %f\ninch:   %f\ncm:     %f\nm:      %f\n\n",yarda,inch,cm,m);
 
  system("PAUSE");	
  return 0;
}
