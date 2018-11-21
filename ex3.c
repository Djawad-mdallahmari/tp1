#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc <2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv);
    
    int taille = strlen(arg);//sizeof = +dernier

    char tabPyramid[taille*2];
    int milieuPyr = (taille*2)/2;

    for (int i = 0; i < taille*2; ++i)
    {
        tabPyramid[i]=' ';
    }

    for(int i=0; i<taille; i++){
        tabPyramid[milieuPyr+i] = arg[i]; 
        tabPyramid[milieuPyr-i] = arg[i];
        for(int j=0; j<taille*2; j++){
            printf("%c",tabPyramid[j]);
        }
        printf("\n");
    }

    //printf("chaine: %s", arg);

    return 0;
}