#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int student;
    char student_name[10][21];
    
    for(student=0;student<=9;student++){
        printf("Name of student: %d ?\n",student);
        scanf("%s",student_name[student]);
    }
    
    /*Ask user which entry in table he/she whishes to display*/
    printf("Student number (0-9)?\n");
    scanf("%d",&student);
    
    /*Display name required*/
    printf("The name is %s\n",student_name[student]);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
