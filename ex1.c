#include <stdio.h>
#include <stdlib.h>

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
    int i=0;
    do{
        i++;
    }while(arg[i] != '\0');

    printf("%d\n",i);
    //printf("chaine: %s", arg);

    return 0;
}

