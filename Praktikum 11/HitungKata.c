/*Nama File 	: HitungKata*/
/*Deskripsi 	: Mesin abstrak untuk menghitung banyaknya kata dalam suatu pita*/
/*Pembuat   	: Nur Annisaa' Meiarti Fajrin - 24060121120010*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main()
{
    /*Kamus*/
    char str[100]; //Variable string untuk menampung kalimat yang akan dihitung katanya
  	int i;
  	int TotalKata;

  	/*Algoritma*/
    printf("Mesin Hitung Kata\n");

    if(TotalKata >= 100)
    {
        printf("\nMaksimal karakter dalam pita adalah 100 termasuk titik\n");
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

        for(i = 0; i < TotalKata; i++)
        {
            printf("%c", str[i]);
        }

        i = 0;
        TotalKata = 1;

        /*Loop*/
        while(str[i]!='\0')
        {
            /*Pemeriksaan jenis karakter*/
            if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            {
                TotalKata++;
            }
            i++;
        }

        printf("\nTotal kata adalah %d\n", TotalKata);
    }
    getch();
	return 0;
}
