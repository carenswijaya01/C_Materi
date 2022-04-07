#include <stdio.h>
#include <stdlib.h>

int linearSearch(int angka[],int jumlahData,int val){
    /*

        - Membandingkan setiap index dari awal ke akhir
        - Jika data saat perulangan itu sama, program berhenti, data ditemukan
        - Jika program selesai sampai akhir dan return -1, data tidak ditemukan
        - Tidak optimal bila datanya banyak

    */

    int i;
    for(i = 0; i < jumlahData; i++){
        if(angka[i] == val){
            return i;//Data ketemu
        }
    }

    return -1;//Data ga ketemu
}

int binarySearch(int angka[], int jumlahData, int val){
    // - DATA HARUS URUT DULU!
    // - Bagi panjangnya jadi 2, trus cek apakah datanya ada di sebelum middle, atau setelah middle (lebih besar / kecil)
    // - Kalau sebelum -> cek yang kiri
    // - Kalau sesudah -> cek yang kanan
    // - Bagi lagi jadi 2, terus ulang ulang aja sampe dipersempit dan datanya ketemu
    // - Kalo ga ketemu, return -1

    int awal, tengah, akhir;

    awal = 0;
    akhir = jumlahData - 1;
    tengah = (awal + akhir)/2;

    //awal 0, akhir 3
    //tengah = (0 + 3)/2 = 1
    //1 2 3 4 -> 4

    while(awal <= akhir){
        if(val > angka[tengah]){//kalo data yang dicari lebih besar dari data tengah, masuk kanan
            awal = tengah + 1;
        }
        else if(angka[tengah] == val){//kalo datanya ketemu / datanya ada ditengah
            return tengah;
        }else{//kalo data yang dicari lebih kecil dari data tengah, masuk kiri
            akhir = tengah - 1;
        }
        tengah = (awal + akhir)/2;
    }

    //kalo data ga ketemu
    if(awal > akhir){
        return -1;
    }

}

int main()
{
    int angka[5] = {1, 5, 10, 15, 20};
    int len = 5;
    int cari = 10;

    int linear = linearSearch(angka, len, cari);
    if(linear == -1){
        //Data ga ketemu
        printf("Data %i tidak ditemukan\n", cari);
    }else{
        printf("Data %i berada pada index ke-%i\n", cari, linear);
    }

    int binary = binarySearch(angka, len, cari);
    if(binary == -1){
        //Data ga ketemu
        printf("Data %i tidak ditemukan\n", cari);
    }else{
        printf("Data %i berada pada index ke-%i\n", cari, binary);
    }

    return 0;
}
