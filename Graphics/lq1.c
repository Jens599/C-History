#include <stdio.h>
struct players
{
    char name[255];
    int runs;
    int wic;
};

int main()
{
    struct players p[3];
    struct players *pp = &p[0];
    struct players temp;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of player %d: ", i + 1);
        scanf("%s", (pp + i)->name);
        printf("Enter runs of player %d: ", i + 1);
        scanf("%d", &(pp + i)->runs);
        printf("Enter wickets of player %d: ", i + 1);
        scanf("%d", &(pp + i)->wic);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                if ((pp + i)->wic > (pp + j)->wic)
                {
                    temp = *(pp + i);
                    *(pp + i) = *(pp + j);
                    *(pp + j) = temp;
                }
            }
    }

    printf("\nSorted list\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\t%d\t%d\n", (pp + i)->name, (pp + i)->runs, (pp + i)->wic);
    }
}