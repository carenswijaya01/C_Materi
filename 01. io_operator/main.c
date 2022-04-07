#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    //Array of Char = String
    //String = "Carens";
    //array = kumpulan
    //kumpulan karakter

    //char nama[20];

    //IPO = Input - Proccess - Output

    //input = scanf, gets, fgets
    //scanf("%s", &nama);
    //gets(nama);

    //output
    //printf("Kita ada di kelas %s", nama);


    //==================================================================
    //OPERATOR / Aritmatika operator

    /*
    + = tambah
    - = kurang
    * = kali
    / = bagi
    % = mod = sisa hasil bagi

    int 3/2 = 1
    int 3%2 = 1 -> .5 * 2 = 1

    3/2 = 1 1/2

    5/2 = 2 -> 2x2 = 4
    5%2 = 1
    */

    //int angka1, angka2;
    //printf("Input angka1 : ");scanf("%i", &angka1);
    //printf("Input angka2 : ");scanf("%i", &angka2);
    //printf("Hasil jumlah dari %i + %i = %i", angka1, angka2, angka1+angka2);

    //==================================================================
    //OPERATOR / Relational operator

    /*
    >       = lebih dari
    >=      = lebih dari sama dengan
    <       = kurang dari
    <=      = kurang dari sama dengan
    ==      = membandingkan, apakah data 1 dengan data 2 sama (data1 == data2)
    !=      = tidak sama dengan
    */

    //==================================================================
    //OPERATOR / Logical operator

    /*
    konjungsi = dan = &&
    disjungsi = atau = ||
    negasi = tidak = !

    bool kondisi = true;
    cetak kondisi -> true;
    cetak !kondisi -> false;*/

    //inisialisasi dan deklarasi
    int a = 9, b = 4, c;

    //inisialisasi nilai c
    c = a + b;

    //output
    printf("a + b = %i\n", c);//aritmatika operator (+, -, *, /, %)
    printf("a++ = %i\n", a+=2);//increment decrement
    printf("%i > %i adalah %i\n", a, b, a>b); //relational operator (>, >=, <, <=, !=. ==)

    int hasil;
    hasil = (a==b) && (c > b);
    printf("(a==b) && (c > b) adalah %i\n", hasil);

    //increment -> variabel++                 = nambah 2
    //decrement -> variabel--                 = ngurang 2
    a-=20;
    printf("%i", a);

    //pre increment
    int i = 1;
    int j = ++i;

    printf("PRE INCREMENT: i = %i, j = %i\n", i, j);

    //post increment
    int k = 1;
    int l = k++;

    printf("POST INCREMENT: k = %i, l = %i\n", k, l);

    //kalkulator sederhana
    float angka1, angka2;
    printf("KALKULTOR SEDERHANA\n");
    printf("Input angka 1 : ");scanf("%f", &angka1);
    printf("Input angka 2 : ");scanf("%f", &angka2);
    //aritmatika
    printf("Angka 1 + Angka 2 : %.1f\n", angka1 + angka2);
    printf("Angka 1 - Angka 2 : %.1f\n", angka1 - angka2);
    printf("Angka 1 * Angka 2 : %.1f\n", angka1 * angka2);
    printf("Angka 1 / Angka 2 : %.1f\n", angka1 / angka2);
    printf("Angka 1 mod Angka 2 : %i\n", angka1 % angka2);
}
