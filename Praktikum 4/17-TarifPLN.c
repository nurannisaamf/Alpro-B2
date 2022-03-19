/*Nama File     : TarifPLN.c*/
/*Deskripsi     : Menghitung besar tarif listrik*/
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal       : 19 Maret 2022*/

#include <stdio.h>
int main()
{
    //Kamus
    int g,w,t;
    //Algoritma
    printf("Tarif PLN \n");
    printf("Masukkan golongan antara 1-2: ");
    scanf("%d", &g);
    printf("Masukkan besar daya listrik dalam kWH: ");
    scanf("%d", &w);
    if ((g==1) && (w<100)) {
        t = 100000;
    }
    else if ((g==1) && (w>=100) && (w<1000)) {
        t = w*1000;
    }
    else if ((g==1) && (w>=1000)) {
        t = w*1000 + (w*1000)*0.1;
    }
    else if ((g==2) && (w<100)) {
        t = 200000;
    }
    else if ((g==2) && (w>=100) && (w<1000)) {
        t = w*2000;
    }
    else if ((g==2) && (w>=1000)) {
        t = w*2000 + (w*2000)*0.1;
    }
    printf("Tarif PLN sebesar Rp.%d", t);
    return 0;
}

