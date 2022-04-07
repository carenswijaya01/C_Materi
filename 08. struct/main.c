#include <stdio.h>
#include <stdlib.h>

//STRUCT -> tipe data yang terbentuk dari beberapa tipe data
//Buah -> warna, nama, rasa, berat

//ADT (Abstract Data Type) -> tipe data abstrak
typedef int bilBulat;
typedef char huruf;

struct data{
    int harga;
    char kode[4], kat[20], nama[20];
};

void main()
{
    int menu,urut=0,jum,dat=0;
    struct data *mn = malloc(jum*sizeof(struct data));
    jum = 0;
    do{
        printf("\t\tSWALAYAN\n");
        printf("1. Input Data\n");
        printf("2. Daftar Barang\n");
        printf("3. Keluar\n");
        printf("Pilihan : ");scanf("%i",&menu);
        switch(menu){
            case 1 :
                system("cls");
                printf("Masukkan jumlah barang yang akan diinput: ");scanf("%i", &jum);
                printf("\n");
                dat += jum;
                for(int i = 0; i < jum; i++){
                    printf("BARANG KE - %i\n", i+1);
                    printf("Kode      : ");scanf("%s", &mn[urut].kode);
                    printf("Kategori  : ");fflush(stdin);gets(mn[urut].kat);
                    printf("Nama      : ");fflush(stdin);gets(mn[urut].nama);
                    printf("Harga     : ");scanf("%i", &mn[urut].harga);
                    printf("\n");
                    urut++;
                }
                printf("Barang berhasil di input, tekan apapun untuk kembali ke menu awal...");getch();system("cls");
                break;
            case 2 :
                system("cls");
                    printf("================ DATA BARANG ================\n");
                if(dat == 0){
                    printf("Belum Ada Data yang Diinput");
                }else{
                    /*for(int i = 0; i < dat; i++){
                        printf("Kode      : %i\n", mn[i].kode);
                        printf("Kategori  : %s\n", mn[i].kat);
                        printf("Nama      : %s\n", mn[i].nama);
                        printf("Harga     : %i\n\n", mn[i].harga);
                    }*/
                    printf("=============================================\n");
                    printf("Kode\tKategori  \tNama      \tHarga\n");
                    printf("=============================================\n");
                    for(int i = 0; i < dat; i++){
                        printf("%s\t%s\t%s\t%i\n", mn[i].kode,mn[i].kat,mn[i].nama,mn[i].harga);
                    }
                }
                getch();
                system("cls");
                break;
            case 3 : printf("Terima Kasih :)");getch();break;
            default:
                printf("Maaf, pilihan Anda tidak ada\n");
                getch();
                system("cls");
                break;
        }
    }while(menu!=3);
}
