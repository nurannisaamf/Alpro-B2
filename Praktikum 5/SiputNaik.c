/*Nama File 	: SiputNaik.c*/
/*Deskripsi 	: Mengetahui berapa hari waktu yang dibutuhkan oleh siput untuk mencapai ketinggin N meter*/
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal       : 27 Maret 2022*/

#include <stdio.h>

int main(){

    //Kamus
    float N;
    float t=0;
    int h=0;

    //Algoritma
    printf("Menghitung waktu siput naik\n");
    printf("Masukkan kedalaman lubang: ");
    scanf("%f", &N);

    if(N <= 0){
        printf("Kedalaman lubang harus positif");
    }
    else{
        while (t >= 0 && t < N ){
            t = t + 0.3;
            if (t < N){
                t = t - 0.1;
            }
            h = h + 1;
        }
        printf("Waktu yang dibutuhkan siput adalah %d hari", h);

    return 0;
    }
}
