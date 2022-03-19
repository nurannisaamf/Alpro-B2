/*Nama File : FaktorBil.c */
/*Deskripsi : Membuat algoritma untuk menentukan faktor bilangan dari sembarang integer positif*/
/*Pembuat   : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal   : 19 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N; /*bilangan integer sembarang, N > 0*/
    int i; /*counter*/

    //Algoritma
    printf("Faktor bilangan dari\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &N);
    if (N <= 0){
        printf("N harus bilangan positif\n");
    }
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d " , i);
            }
        }
    return 0;
}
