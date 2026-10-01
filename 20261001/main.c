#include <stdio.h>

int main(void)
{
    // printf("[%-10s]\n", "R-001");
    // printf("[%11.3f]\n", 12.5);        
    // printf("[%+11.3f]\n", 12.5);        
    // printf("[%-+11.3f]\n", 12.5);        
    // printf("[%6s]\n", "mm");
    // printf("[%7s%.2f]\n\n\n", "+/-",0.05);

    //printf("%-10s%11.3f%6s%7s%.2f\n", "R-001", 12.5, "mm", "+/-",0.05);

    int value = 0;
    printf("Enter a value: ");
    int r=0;
    r = scanf("%d", &value);
    printf("r=%d\n", r);
    printf("value=%d\n", value);

    return 0;
}
