/*Nama File     : CekSeriPositif.c*/
/*Deskripsi     : Menghitung dan menampilkan total tahanan jika dirangkai seri */
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tgl Pembuatan : 9 Maret 2022*/

#include <stdio.h>

int main() {
    //kamus
    float p,q,r,t;
    //algoritma
    printf("Program CekSeriPositif \n");
    printf("Masukkan nilai tahanan pertama: ");
    scanf("%f", &p);
    printf("Masukkan nilai tahanan kedua: ");
    scanf("%f", &q);
    printf("Masukkan nilai tahanan ketiga: ");
    scanf("%f", &r);

    if (p >= 0 && q >= 0 && r >= 0)
    {
    t = (p+q+r);
    printf("Nilai total tahanan = %.2f ", t);
    } else {
    printf("Masukan tahanan tidak boleh negatif");
    }
return 0;
}
