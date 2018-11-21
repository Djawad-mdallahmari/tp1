#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv);
    int res = 0;
    int taille = strlen(arg);
    int i;
    for (i = 0; i < taille; i++)
    {
        //printf("%c et %c\n", arg[i], arg[taille-(i+1)]);
        if (arg[i] == ' ' || arg[i] != arg[taille - (i + 1)])
        {
            res = 1;
            break;
        }
        else
        {
            res = 0;
        }
    }

    //printf("chaine: %s", arg);

    return res;
}
