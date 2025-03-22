#include <stdio.h>
#include <math.h>

int main(void)
{
    int popularity, size;
    int homeValue;

    // Kullanıcıdan popularite ve boyut değerlerini al
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    // Formüle göre ev değerini hesapla: (popularity^3 + size^2) * 10000
    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;

    // Sonucu ekrana yazdır
    printf("Home value is: %d\n", homeValue);
    return 0;
}
