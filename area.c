#include<stdio.h>
int main(int argc, char const *argv[])
{
    int w, h, a;
    printf("Masukkan nilai panjang : ");
    scanf("%d", &w);

    printf("Masukkan nilai lebar : ");
    scanf("%d", &h);

    a = w * h;

    printf("Luas : %d", a);
    return 0;
}
