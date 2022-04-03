/*Nama File     : Tetris1.c*/
/*Deskripsi     : Menampilkan di layar susunan karakter ‘*’ sesuai dengan susunan. Tinggi berdasarkan N > 0 */
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tgl Pembuatan : 29 Maret 2022*/

#include <stdio.h>
int main()
{
 //Kamus
   int N;
   int i;
   int j;
 //Algoritma
   printf("Masukkan angka = ");
   scanf("%d", &N);
   if (N > 0)
   {
    for(i = N; i >= 1; i--)
    {
     for(j = 1; j <= i; j++)
     {
      printf("* ");
     }
      printf("\n");
    }
   }
   else
   {
    printf("Pastikan bilangan integer melebihi 0 !");
   }
 return 0;
}
