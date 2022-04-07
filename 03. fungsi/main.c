#include <stdio.h>
#include <stdlib.h>

/*tipedata namamethod(parameter[opsional]){
    return [hanya untuk fungsi];
}*/

int hitungTambah(int angka1, int angka2){
    return angka1 + angka2;
}

void hitungKurang(int angka1, int angka2){
    printf("Hasil kurang dari %i - %i adalah %i\n", angka1, angka2, angka1-angka2);
}

void pbValue(int angka){
    angka = 1;
}

void pbRef(int *angka){
    *angka = 1;
}

//n * (n-1)
//3 = 3 x 2 x 1 x 1
//5 = 5 x 4 x 3 x 2 x 1
int faktorial(int n){
    if(n!=0){
        return n * faktorial(n-1);
    }else{
        return 1;
    }
}

int main()
{
    //methode
    //1. Fungsi = jenis method yang memiliki tipe data, mengembalikan nilai (return)
    //2. Prosedur (subprogram) = jenis method yang tipe datanya void, tidak mengembalikan nilai

    int angka1, angka2;

    printf("Masukkan angka1: ");
    scanf("%i", &angka1);

    printf("Masukkan angka2: ");
    scanf("%i", &angka2);

    hitungKurang(angka1, angka2);

    printf("Hasil tambah dari %i + %i adalah %i\n", angka1, angka2, hitungTambah(angka1, angka2));

    int angka = 0;

    //pass by value cuma kirim value, kalo ada perubahan value ga mempengaruhi nilai aslinya
    pbValue(angka);

    //pass by reference ngirim alamat memori dan ngubah nilai langsung di alamat memorinya, jadi kalo ada perubahan value bakalan mempengaruhi niali aslinya
    //pbRef(&angka);

    //liat bedanya di print angka ini
    printf("%i", angka);

    //Rekursif = proses fungsi/prosedur memanggil dirinya sendiri
    int angka_faktorial;
    printf("Masukkan angka faktorial: !");
    scanf("%i", &angka_faktorial);

    printf("Hasil faktorial dari !%i adalah %i", angka_faktorial, faktorial(angka_faktorial));

    return 0;
}
