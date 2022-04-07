#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pendahuluanPointer(){
	int angka1 = 5, *angka2 = &angka1, angka3 = angka1;

	printf("Nilai dari angka1 = %d\n", angka1);
	printf("Alamat dari angka1 = %d\n\n", &angka1);

	printf("Nilai dari angka2 = %d\n", *angka2);
	printf("Alamat dari angka2 = %d\n\n", angka2);

	printf("Nilai dari angka3 = %d\n", angka3);
	printf("Alamat dari angka3 = %d\n\n", &angka3);

	*angka2 = 10;
	printf("Nilai dari angka1 = %d\n", angka1);
	printf("Nilai dari angka2 = %d\n", *angka2);
	printf("Nilai dari angka3 = %d\n", angka3);
}

void fungsiPointer(){
	int nil = 60;

	printf("Alamat dari nil = %d\n", &nil);

	//passByValue(nil);//hanya mengirimkan nilai
	//printf("Nilai Nil = %d\n", nil);

	//passByReference(&nil);//dikirimkan alamatnya
	//printf("Nilai Nil Terbaru = %d\n", nil);
}

void arrayPointer(){
	int nilai[5] = {76, 78, 55, 45, 100};
	int size = sizeof(nilai) / sizeof(nilai[0]);
	int *nilaiBaru = &nilai, i;

	printf("Nilai Kedua = %d \n", nilai[1]);
	printf("nilaiBaru Kedua = %d\n\n", *(nilaiBaru + 1));

	// Pointer dengan For Loop
	for(i = 0; i< size; i++){
		printf("nilaiBaru - %d = %d\n", i, *(nilaiBaru + i));//nilai[i]
	}
}

void passByValue(int val){
	val = 100;
	printf("Alamat dari Val = %d\n",&val);
}

void passByReference(int *val){
	*val = 90;
	printf("Alamat dari Val = %d\n",val);
}

void pointerFunction(){
    //malloc, calloc, realloc, free, memset
    int *angka;

    //Alokasi memori
    //Malloc = mengalokasikan memori tanpa set nilai awal
    //Calloc = mengalokasikan memori dan inisialisasi tiap index 0, '\0'

    printf("Saat di calloc\n");
    //angka = (int *) calloc(3, sizeof(int));

    //calloc = malloc + memset

    angka = (int *) malloc(3);//Garbage Value

    //angka => [][][]

    memset(angka, 0, 3*sizeof(int));//nge set nilai sebanyak n dari awal
    /*
        angka[0] = 10;
        angka[1] = 20;
        angka[2] = 30;
    */

    for(int i = 0; i < 3; i++){
        printf("Angka ke-%i adalah %i\n", i+1, angka[i]);
    }

    printf("\nSetelah di realloc\n");
    angka = (int *) realloc(angka, 5);

    //angka => [][][][][]

    angka[3] = 40;
    angka[4] = 50;

    for(int i = 0; i < 5; i++){
        printf("Angka ke-%i adalah %i\n", i+1, angka[i]);
    }

    free(angka);//bikin default lagi
}

int main(){
	// Pointer
	// Reference -> * -> Untuk menyimpan sebuah alamat dari sebuah variabel
	// Deference -> & -> Untuk melihat sebuah alamat dari sebuah variabel

	//Pendahuluan Pointer
//	pendahuluanPointer();

	//Fungsi dalam Pointer
//	fungsiPointer();

	//Array dalam Pointer
//	arrayPointer();

    //Fungsi Bawaan untuk Pointer
//  pointerFunction();

	return 0;
}
