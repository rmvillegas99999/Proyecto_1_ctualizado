#include <stdio.h>5
#include <stdlib.h>


int main(int argc, char *argv[])
{
  
  float radio,altura,lado,area,volumen,g;
  const float pi= 3.1416;
  
  printf("E'ste programa sirve para obtener el volumen y area de un cono\n\n");
  
  printf("     Radio de la base:");
  scanf("%f",&radio);
  
  printf("     Altura del cono:");
  scanf("%f",&altura);
  
  volumen=(radio*radio*altura*pi)/3; 
  g= sqrt((radio*radio)+(altura*altura));
  area= ((2*pi*radio*g)/2)+(pi*radio*radio);                              
  
  printf("\n\n  El volumen de tu cono es:%.2f\n",volumen);
  printf("\n\n  El area de las caras de tu cono es:%.2f\n\n\n\n",area);

  system("PAUSE");	
  return 0;
}
