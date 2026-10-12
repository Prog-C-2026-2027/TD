#include <stdio.h>

#define TEMP_MAX 20.0

int main(void)
{
    // double temperature = 26.0;

    // int condition = temperature > TEMP_MAX;

    // printf("condition=%d\n", condition);

    // if (condition)
    // { // bloc
    //     printf("Il fait beau ");
    //     printf("et chaud.\n");
    // }
    // else {
    //     puts("Brrrr"); // printf("Brrrr\n");
    // }

    // printf("Programme terminé.\n");

    // int x = 0;
    // printf("Enter an integer value: ");
    // scanf("%d", &x);
    // if (x < 0)
    // {
    //     puts("négatif");
    // }
    // else if (x > 0)
    // {
    //     puts("positif");
    // }
    // else
    // {
    //     puts("nul");
    // }

    int answer = 0;

    printf("Êtes-vous d'accord ? (o/n) ");
    answer = getchar();

    switch (answer)
    {
    case 'o':
    case 'O':
    case 'y':
    case 'Y':
    case 'd':
    case 'D':
        printf("OK 😀\n");
        break;
    case 'n':
    case 'N':
        printf("PAS OK 🙁\n");
        break;
    default:
        printf("BOULET ⛺️\n");
        break;
    }

    return 0;
}
