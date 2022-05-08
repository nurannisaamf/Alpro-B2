/*Nama file     : InsertionSort.c*/
/*Deskripsi     : Mengurutkan data dengan cara menyisipkan atau memasukan setiap elemen secara berulang berulang*/
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal       : 7 Mei 2022*/

#include<stdio.h>

void insertionSort(int *Data, int n){
    int temp, j;

    for (int i = 1; i <= n-1; i++){ //n-1 karena index dimulai dr 0.
        temp = Data[i];
        j = i-1;

   //Data[j] > temp berfungsi untuk mengurutkan data secara ascending.
  //Data[j] < temp berfungsi untuk mengurutkan data secara descending.
        while(j>=0 && Data[j] > temp){
            Data[j+1] = Data[j];
            j--;
        }
        Data[j+1] = temp;
    }
}

void print(int* Data, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}

int main(){

    int Data[] = {209,111,123,145,300,200,193,299,100};

	//Mencari panjang array dan menyesuaikan ukuran array dari data tersebut.
	int n = sizeof(Data)/sizeof(Data[0]);

    printf("Sebelum Sort: ");
    print(Data, n);

    printf("Sesudah Sort: ");
    insertionSort(Data, n);
    print(Data, n);
    return 0;
}
