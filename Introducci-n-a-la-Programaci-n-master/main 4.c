#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int segundos_totales,horas,minutos,segundos;
  
  printf("E'ste programa sirve para convertir un numero dado en segundos a su equivalente en horas, minutos y segundos\n\n");
  
  printf("Segundos totales a convertir:");
  scanf("%i",&segundos_totales);
  
  horas= (segundos_totales/3600>0)?(segundos_totales/3600):0;
  minutos= (segundos_totales%3600/60>0)?(segundos_totales%3600/60):0;
  segundos= (segundos_totales%60);
  
  printf("\n    horas:%i\n\n",horas);
  printf("    minutos:%i\n\n",minutos,segundos);
  printf("    segundos:%i\n\n",segundos);
  
  system("PAUSE");	
  return 0;
}
