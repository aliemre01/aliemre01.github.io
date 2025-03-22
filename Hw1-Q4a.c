// For Question 4-A 

#include <stdio.h>
#include <math.h>


int computeHomeValue(int popularity, int size)
{
    return (pow(popularity, 3) + pow(size, 2)) * 10000;
}

int main(void)
{
    int popularity, size;

   
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

   
    int value = computeHomeValue(popularity, size);
    printf("Home value is: %d\n", value);

    return 0;
}
