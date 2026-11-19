#include <stdio.h>

#define NUM_STUDENTS 4

int main(void)
{
    double grades[NUM_STUDENTS];                       // 4 cells, [0]...[3]
    for (int index = 0; index < NUM_STUDENTS; index++) // index : 0, 1, 2, 3
    {
        printf("Grade n°%d: ", index + 1);
        scanf("%lf", &grades[index]);
    }

    // display the grades values (%4.2lf) ex: Grade n°1 = 3.15
    for (int index = 0; index < NUM_STUDENTS; index++)
    {
        printf("Grade n°%d: %4.2lf\n", index + 1, grades[index]);
    }

    // display the address of grades cells 
    for (int index = 0; index < NUM_STUDENTS; index++)
    {
        printf("address of grades[%d]: %p\n", index, &grades[index]);
    }

    return 0;
}
