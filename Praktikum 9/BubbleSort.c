/*Nama file     : BubbleSort.c*/
/*Deskripsi     : Mengurutkan data dengan membandingkan dua data yang berdekatan dan menukarnya sampai dalam urutan yang diinginkan*/
/*Pembuat       : Nur Annisaa Meiarti Fajrin - 24060121120010*/
/*Tanggal       : 7 Mei 2022*/

#include<stdio.h>

//Melakukan pertukaran jika data tidak sesuai.
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int N){
	for(int i =0; i<N-1; i++){ //N-1 karena index dimulai dr 0.

		//Melakukan looping untuk mengakses array pada setiap data.
		for(int j=0; j<N-1-i; j++){

			//Tanda > mengurutkan berdasarkan ascending
			//Tanda < mengurutkan berdasarkan descending
			if(arr[j] > arr[j+1]){
			//Memanggil function swap yang berfungsi untuk menukar data.
			swap(&arr[j], &arr[j+1]);

		}
	}
}
}

void print(int arr[], int N){
	for(int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[] = {8, 25, 13, 23, 3, 22, 5, 28};

	 //Mencari panjang array dari data tersebut.
	int N = sizeof(arr)/sizeof(arr[0]);

	printf("Sebelum Sort: ");
	print(arr,N);
	puts("");

	printf("Sesudah Sort: ");
	bubbleSort(arr, N);
	print(arr, N);
	puts("");

	return 0;
}
