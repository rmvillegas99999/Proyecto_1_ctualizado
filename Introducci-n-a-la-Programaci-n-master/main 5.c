#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    
  char ch;
  float temp;
  
  printf("E'ste programa sirve para convertir temperatuas, ya sea de grados Celsius a \nFarenheit y viceversa\n\n");
  
  printf("Si quiere convertir de Celcius a Farenheit presione C\nSi quiere convertir de Farenheit a Celcius presione F\n\n");
  scanf("%c",&ch);
  ch=toupper(ch);
  
  printf("Introduzca la temperatura");
  scanf("%f",&temp);
    
 // (ch=='C')?printf("%d F\n",1.8*) ESTA VA A SER LA CONDICIONAL DEPENDIENDO DE LA LITERAL QUE INTRIDUZCA NUESTRO USUARIO
 
  printf("%c\n",ch);
  
  system("PAUSE");	
  return 0;
}
