#include <stdio.h>
#include <math.h>

// Ev değerini hesaplayan fonksiyon
int computeHomeValue(int popularity, int size)
{
    return (pow(popularity, 3) + pow(size, 2)) * 10000;
}

int main(void)
{
    int popularity, size;

    // Kullanıcıdan verileri al
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    // Fonksiyonu çağırarak ev değerini hesapla ve yazdır
    int value = computeHomeValue(popularity, size);
    printf("Home value is: %d\n", value);

    return 0;
}
