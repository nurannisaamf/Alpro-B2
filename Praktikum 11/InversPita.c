/*Nama File 	: InversPita*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik(invers)*/
/*Pembuat   	: Nur Annisaa' Meiarti Fajrin - 24060121120010*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main()
{
    /*Kamus*/
    char str[50];
    int i;
    int length_Pita;

    /*Algoritma*/
    length_Pita = HitungChar();

    printf("Mesin Inverse Pita\n");

    if(length_Pita >= 50)
    {
        printf("\nMaksimal karakter dalam pita adalah 50 termasuk titik\n");
    }
    else
    {
        START();
        i = 0;

        while(!EOP())
        {
            str[i] = CC;
            ADV();
            i++;
        }

        printf("\nPita dibaca: ");

        for(i = 0; i < length_Pita; i++)
        {
            printf("%c", str[i]);
        }

        printf("\nPita inverse: ");

        //Melakukan inverse kata
        for(i = length_Pita-1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
    }
    getch();
    return 0;
}
