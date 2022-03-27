/*Nama File    : CekPrima.c*/
/*Deskripsi    : Mengetahui sebuah bilangan integer termasuk bilangan prima atau bukan.*/
/*Pembuat      : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal      : 26 Maret 2022*/

#include <stdio.h>

int main(){
        //Kamus
        int x,i=1,z,r=0;

        //Algoritma
        printf("Cek Bilangan Prima\n");
        printf("Masukkan bilangan: ");
        scanf("%d", &x);
        if(x<=1){
                printf("masukan harus bilangan integer positif\n", x);
                return 0;
        }
        for (i; i<=x; i++) {
                z = x%i;
                if(z==0)
                        r++;
        }
        if (r==2)
                printf("%d adalah bilangan prima\n", x);
        else
                printf("%d bukan bilangan prima\n", x);

      return 0;
}


