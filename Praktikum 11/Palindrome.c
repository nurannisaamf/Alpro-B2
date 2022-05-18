/*Nama File 	: Palindrome*/
/*Deskripsi 	: Mesin abstrak untuk memeriksa apakah kata itu PALINDROME dan mengirimkan sebuah harga boolean*/
/*Pembuat   	: Nur Annisaa' Meiarti Fajrin - 24060121120010*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main()
{
    /*Kamus*/
    char str[50]; //Variable string untuk menampung kalimat yang ingin di cek palindrome atau bukan
    int i;
    int len;
    int temp = 0;
    int flag = 0;
    len = strlen(str); //Variable len diisi dengan nilai sebesar ukuran kalimat dalam variable string

    /*Algoritma*/
    len = HitungChar();

    printf("Mesin Palidrome\n");

    if(len >= 50)
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

        printf("\nPita yang dibaca: ");

        for(i = 0; i < len; i++)
        {
            printf("%c", str[i]);
        }

        for(i = 0; i < len; i++)
        {
            /*Loop*/
            if(str[i] != str[len-i-1])
            {
                /*Penyesuaian huruf*/
                temp = 1; //Jika tidak sesuai, maka bernilai 1
                break;
            }
        }

        if(temp == 0)
        {
            printf("\nPALINDROME !\n");
        }
        else
        {
            printf("\nBUKAN PALINDROME !\n");
        }
    }
    getch();
    return 0;
}
