/*Nama File     : CekBulan.c*/
/*Deskripsi     : Menampilkan nama bulan berdasarkan input nomor bulan */
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tgl Pembuatan : 9 Maret 2022*/

#include <stdio.h>

int main() {
    //kamus
    int B;
    //algoritma
    printf("Pengecekan Bulan\n");
    printf("Masukkan nomor Bulan: ");
    scanf("%d", &B);

    if(B==1)
    {
        printf("Bulan tersebut adalah Bulan Januari", B);
    }
    else if(B==2)
    {
        printf("Bulan tersebut adalah Bulan Februari", B);
    }
    else if(B==3)
    {
        printf("Bulan tersebut adalah Bulan Maret", B);
    }
    else if(B==4)
    {
        printf("Bulan tersebut adalah Bulan April", B);
    }
    else if(B==5)
    {
        printf("Bulan tersebut adalah Bulan Mei", B);
    }
    else if(B==6)
    {
        printf("Bulan tersebut adalah Bulan Juni", B);
    }
    else if(B==7)
    {
        printf("Bulan tersebut adalah Bulan Juli", B);
    }
    else if(B==8)
    {
        printf("Bulan tersebut adalah Bulan Agustus", B);
    }
    else if(B==9)
    {
        printf("Bulan tersebut adalah Bulan September", B);
    }
    else if(B==10)
    {
        printf("Bulan tersebut adalah Bulan Oktober", B);
    }
    else if(B==11)
    {
        printf("Bulan tersebut adalah Bulan November", B);
    }
    else if(B==12)
    {
        printf("Bulan tersebut adalah Bulan Desember", B);
    }
    else
    {
        printf("Masukan nomor bulan tidak tepat", B);
    }
    return 0;
}
