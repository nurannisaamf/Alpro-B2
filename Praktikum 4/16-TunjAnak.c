/*Nama File     : TunjAnak.c*/
/*Deskripsi     : Menghitung besarnya tunjangan anak*/
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal       : 19 Maret 2022*/

#include <stdio.h>
int main()
{
    //Kamus
    int a,g,ta;
    //Algoritma
    printf("Tunjangan Anak \n");
    printf("Masukkan jumlah anak: ");
    scanf("%d", &a);
    printf("Masukkan besar gaji pokok: ");
    scanf("%d", &g);
    if ((a>=0) && (a<=3)) {
        ta = a*(0.1*g);
    }

    else {
        ta = 3*(0.1*g);
    }
    printf("Besar Tunjangan anak sebesar Rp.%d", ta);
    return 0;
}
