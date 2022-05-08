/*Nama file     : CountingSort.c*/
/*Deskripsi     : Mengurutkan data dengan cara menghitung jumlah kemunculan dari setiap data yang berada di dalam array*/
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal       : 8 Mei 2022*/

#include <stdio.h>

int main()
{
    //Kamus
  	int i, j;
    int arr[] = {10,2,11,5,22,4,24,8,28,93};
    int temp = 0;

    //Algoritma
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Sebelum Sort: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < length; i++) {
        for (j = i+1; j < length; j++) {
           if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    printf("\n");

    //Display elements array setelah sorting
    printf("Sesudah Sort: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
