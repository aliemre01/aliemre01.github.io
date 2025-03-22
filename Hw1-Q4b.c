#include <stdio.h>
#include <math.h>

// Tüm giriş-çıkış ve hesaplama işlemleri bu fonksiyon içinde yapılır
void computeHomeValue(void)
{
    int popularity, size;
    int homeValue;

    // Kullanıcıdan veriler alınır
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    // Hesaplama yapılır
    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;

    // Sonuç yazdırılır
    printf("Home value is: %d\n", homeValue);
}

int main(void)
{
    // Fonksiyon çağrılır
    computeHomeValue();
    return 0;
}
