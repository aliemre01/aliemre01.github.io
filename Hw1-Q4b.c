// For Question 4-B

#include <stdio.h>
#include <math.h>


void computeHomeValue(void)
{
    int popularity, size;
    int homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

  
    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;

    printf("Home value is: %d\n", homeValue);
}

int main(void)
{

    computeHomeValue();
    return 0;
}
