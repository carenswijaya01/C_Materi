#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct mahasiswa{
    char nama [30], nim [10], fakultas [30], hobi [30];
    int umur;
    struct mahasiswa *next;
}*head, *tail, *current;
//head => pointer yang menyimpan alamat data pertama
//tail => pointer yang menyimpan alamat data terakhir
//current => pointer yang digunakan sebagai temporary variabel

void LihatData(){
    if(head == NULL){
        printf("Belum ada Data, silahkan input dulu!\n");
    }else{
        current = head;
        int i = 1;
        while(current != NULL){
            printf("Data ke - %i\n", i);
            printf("Nama     : %s\n", current->nama);
            printf("NIM      : %s\n", current->nim);
            printf("Fakultas : %s\n", current->fakultas);
            printf("Hobi     : %s\n", current->hobi);
            printf("Umur     : %i\n", current->umur);
            current = current->next;
            printf("\n");
            i++;
        }
        i = 1;
    }
    printf("\n");
}

void TambahData(){
    char nama [30], nim [10], fakultas [30], hobi [30];
    int umur;
    current = (struct mahasiswa*)malloc(sizeof(struct mahasiswa));

    printf("Nama     : ");fflush(stdin);gets(nama);
    printf("NIM      : ");scanf("%s", &nim);
    printf("Fakultas : ");fflush(stdin);gets(fakultas);
    printf("Hobi     : ");fflush(stdin);gets(hobi);
    printf("Umur     : ");scanf("%i", &umur);

    strcpy(current->nama, nama);
    strcpy(current->nim, nim);
    strcpy(current->fakultas, fakultas);
    strcpy(current->hobi, hobi);
    current->umur = umur;

	if(head == NULL){
		head = tail = current;
	}
	else{
		tail->next = current;
		tail = current;
	}
	tail->next = NULL;

	printf("\nData berhasil diinput");
}

void editData(){
    if(head==NULL){
        printf("Belum ada Data, silahkan input dulu!\n");
    }else{
        current = head;

        char nim [10];
        printf("Cari NIM yang mau diedit : ");scanf("%s", &nim);

        while (current != NULL) {
            if (strcmp(current->nim, nim)==0){
                printf("Nama     : %s\n", current->nama);
                printf("NIM      : %s\n", current->nim);
                printf("Fakultas : %s\n", current->fakultas);
                printf("Hobi     : %s\n", current->hobi);
                printf("Umur     : %i\n\n", current->umur);

                printf("EDIT DATA\n");
                char hobiBaru[30];
                printf("Hobi baru : ");fflush(stdin);gets(hobiBaru);
                strcpy(current->hobi, hobiBaru);

                printf("\nData berhasil diedit");
                break;
            }else if(current == NULL || current->next==NULL){
                printf("\nData tidak ada");
            }
            current = current->next;
        }
    }
}

void deleteData(){
    if (head == NULL){
        printf("Belum ada Data, silahkan input dulu!\n");
    }else{
        struct mahasiswa *temp = head;
        current = head;

        char nim [10];
        printf("Cari NIM yang mau dihapus : ");scanf("%s", &nim);

        int index = 0;
        while (current != NULL) {
            if (strcmp(current->nim, nim)==0){
                break;
            }
            index++;
            current = current->next;
        }
        if (index == 0){
            head = temp->next;
            free(temp);
            printf("\nData berhasil dihapus");
        }else{
            for (int i=0; temp!=NULL && i<index-1; i++){
                temp = temp->next;
            }
            if (temp == NULL || temp->next == NULL){
                printf("\nData tidak ada");
            }else{
                struct mahasiswa *next = temp->next->next;
                free(temp->next);
                temp->next = next;
                printf("\nData berhasil dihapus");
            }
        }
    }
}

int main()
{
    char menu;
    do{
        printf("MENU KAMPUS\n");
        printf("1. Lihat Data\n");
        printf("2. Tambah Data\n");
        printf("3. Edit Data\n");
        printf("4. Hapus Data\n");
        printf("5. Keluar\n");
        printf("Pilihan : ");scanf(" %c", &menu);
        switch(menu){
            case '1' : LihatData();break;
            case '2' : TambahData();break;
            case '3' : editData();break;
            case '4' : deleteData();break;
            case '5' : break;
            default : printf("Inputan Salah\n\n");break;
        }
        getch();
        system("cls");
    }while(menu != '5');

    return 0;
}
