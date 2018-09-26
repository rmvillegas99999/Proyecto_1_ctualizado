#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char *argv[])

{
    int student,exam;
    int student_grade[10][]={
         {8,7,8,},{6,7,9},{4,8,5},{9,10,8},{3,2,7},
         {8,8,9},{7,5,9},{10,10,9},{4,8,9},{2,9,10}
     };
     
    /*Arreglo bidemensional*/
    int student_grade[10][3];
    
#ifdef OBTENICION_CALIFS_DESDE_USUARIO
    /*obtener las calificaciones para un estudiante*/
    for(student=0; student<=9;student++){
        printf("Student %d\n", student);
         for(exam=0; exam<=2;exam++){
             printf("Grade for exam %d ?", exam);
             scanf("%d",&student_grade[student][exam]);
        }               
    }
#endif /*OBTENICION_CALIFS_DESDE_USUARIO*/

    /*pedimos al usuario qué entrada del arreglo desea desplegar*/
    printf("Student number (0-9)?\n");
    scanf("&d",&student);
    printf("Exam number (0-2) ?\n");
    scanf("%d",&exam);
    
    printf("The mark is %d",student_grade[student][exam]);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
