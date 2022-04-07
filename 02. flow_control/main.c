#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, angka;

    //CHOICE (Percabangan)
    //1. IF ELSE, 2. SWITCH CASE, 3. NESTED CHOICE

    //IF ELSE STATEMENT
    printf("Masukkan angka: ");
    scanf("%i", &angka);

    if(angka > 5){
        printf("Angka lebih dari 5\n");
    }else if(angka > 3){
        printf("Angka lebih dari 3\n");
    }else if(angka > 2){
        printf("Angka lebih dari 2\n");
    }else{
        printf("Angka tidak lebih dari 5, 3, ataupun 2\n");
    }

    if(angka < 5){
        if(angka > 2){
            printf("Angka ada diantara 2 sampai 5\n");
        }else{
            printf("Angka kurang dari 2\n");
        }
    }else{
        printf("Angka lebih dari sama dengan 5\n");
    }

    //SWITCH CASE STATEMENT
    switch(angka){
        case '1' : printf("Angka 1\n");break;
        case '2' : printf("Angka 2\n");break;
        case '3' : printf("Angka 3\n");break;
        default: printf("Bukan angka 1, 2, ataupun 3\n");break;
    }


    /*=================================================================================================================*/


    //LOOP (Perulangan)
    //1. FOR, 2. WHILE, 3. DO WHILE, 4. NESTED LOOP

    //1. FOR
    printf("INI FOR\n");
    for(i = 0; i < 3; i++){
        printf("Ini perulangan\n");
    }

    //2. WHILE
    printf("INI WHILE\n");
    i = 0;
    while(i < 0){
        printf("Ini perulangan\n");
        i++;
    }

    //3. DO WHILE
    printf("INI DO WHILE\n");
    i = 0;
    do{
        printf("Ini perulangan\n");
        i++;
    }while(i < 0);

    //4. NESTED LOOP
    for(i = 0; i < 5; i++){ //pengatur baris
        for(j = 0; j < 5; j++){ //pengatur kolom
            printf(" * ");
        }
        printf("||");
        for(j = 0; j < 4-i; j++){
            printf(" ");
        }
        for(j = 0; j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
