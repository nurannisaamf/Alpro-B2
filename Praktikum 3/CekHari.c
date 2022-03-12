/*Nama File     : CekHari.c*/
/*Deskripsi     : Menampilkan nama hari berdasarkan input nomor hari */
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tgl Pembuatan : 9 Maret 2022*/

#include <stdio.h>

int main() {
    //kamus
    int H;
    //algoritma
    printf("Pengecekan Hari\n");
    printf("Masukkan nomor hari: ");
    scanf("%d", &H);

    if(H==1)
    {
        printf("Hari tersebut adalah Hari Senin", H);
    }
    else if(H==2)
    {
        printf("Hari tersebut adalah Hari Selasa", H);
    }
    else if(H==3)
    {
        printf("Hari tersebut adalah Hari Rabu", H);
    }
    else if(H==4)
    {
        printf("Hari tersebut adalah Hari Kamis", H);
    }
    else if(H==5)
    {
        printf("Hari tersebut adalah Hari Jumat", H);
    }
    else if(H==6)
    {
        printf("Hari tersebut adalah Hari Sabtu", H);
    }
    else if(H==7)
    {
        printf("Hari tersebut adalah Hari Minggu", H);
    }
    else
    {
        printf("Masukan nomor hari tidak tepat", H);
    }
    return 0;
}
