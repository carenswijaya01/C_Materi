#include <stdio.h>
#include <stdlib.h>

int angka[5] = {17,1,9,5,20}; //array angka acak
int len = 5; //panjang array
//int len = sizeof(angka) / sizeof(*int);

//SORTING -> Mengurutkan

void bubbleSort(){
    // - Algoritma paling tua
    // - Prosesnya paling simple, paling lama
    // - Menukar posisi (secara berpasangan, dengan kondisi tertentu)
    // - Iterasi / perulangan

    int i, j, temp;
    for(i = 0; i < len - 1; i++){
        for(j = 0; j < (len - 1 - i); j++){
            //proses pengecekan dan penukaran data
            if(angka[j] > angka[j+1]){
                temp = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = temp;
            }
        }
    }
}

void selectionSort(){
    // Cari posisi nilai terendah, taruh secara berurutan dari awal

    int i, j, temp, posisi;
    for(i = 0; i < len - 1; i++){
        posisi = i;

        //cari nilai terendah
        for(j = i + 1; j < len; j++){
            if(angka[posisi] > angka[j]){
                posisi = j;
            }
        }

        //proses naruh secara berurutan
        if(posisi != i){ //kalo posisi nilai terendahnya beda / tidak tetap
            temp = angka[i];
            angka[i] = angka[posisi];
            angka[posisi] = temp;
        }
    }
}

void insertionSort(){

    // - Kayak main kartu, ambil 1 kartu, taruh di tempat yang seharusnya
    // - Bandingkan dengan data sebelum

    int i, j, temp;
    for(i = 1; i < len; i++){
        //ambil 1 kartu (ambil posisi ke i)
        j = i;

        //2 syarat:
        //- j > 0
        //- Angka sebelum > angka posisi kartu yang ambil == tuker
        while(j > 0 && (angka[j-1] > angka[j])){
            temp = angka[j];
            angka[j] = angka[j - 1];
            angka[j - 1] = temp;
            j--;
        }
    }
}

void displayArray(){
    int i;
    for(i = 0; i < len; i++){
        printf("Angka ke - %i adalah %i\n", i+1, angka[i]);
    }
}

int main()
{
    printf("SEBELUM DI SORTING\n");
    displayArray();

    //Sorting
    //bubbleSort();
    //selectionSort();
    insertionSort();

    printf("SESUDAH DI SORTING\n");
    displayArray();

    return 0;
}
