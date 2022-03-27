/*Nama File     : CekSempurna.c*/
/*Deskripsi     : Mengetahui sebuah bilangan integer N (N>0) termasuk bilangan sempurna atau bukan*/
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal       : 26 Maret 2022*/

#include <stdio.h>

int main(){

    //Kamus
    int i;
    int N;
    int s = 0;

    //Algoritma
    printf("Cek Bilangan Sempurna\n");
    printf("Masukkan bilangan: ");
    scanf("%d", &N);

    if (N < 0){
        printf("masukan harus bilangan integer positif");
    }
    else{
        for(i = 1;i < N;i++){
            if(N % i == 0){
                s = s + i;
            }
        }
        if(s == N){
            printf("%d adalah bilangan sempurna", N);
        }
        else{
            printf("%d bukan bilangan sempurna", N);
        }
            }
    return 0;
}
