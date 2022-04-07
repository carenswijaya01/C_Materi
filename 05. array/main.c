#include <stdio.h>
#include <stdlib.h>

void array_1d(){
    int kos[3];
    int len = sizeof(kos)/sizeof(int);
    //ngisi data
    for(int i = 0; i < len; i++){
        scanf("%i", &kos[i]);
    }
    //print data
    for(int i = 0; i < len; i++){
        if(i == len-1){
            printf("%i", kos[i]);
        }else{
            printf("%i - ", kos[i]);
        }
    }
    //1 - 2 - 3
}

void array_2d(){
    int matrixA[2][2], matrixB[2][2], sumAB[2][2];

    printf("INPUT DATA MATRIX A\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Masukkan nilai matrix A ke-[%i][%i]: ", i, j);
            scanf("%i", &matrixA[i][j]);
        }
    }

    printf("INPUT DATA MATRIX B\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Masukkan nilai matrix B ke-[%i][%i]: ", i, j);
            scanf("%i", &matrixB[i][j]);
        }
    }

    printf("HASIL JUMLAH MATRIX A + MATRIX B\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%i\t", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }
}

//input = nilai sbd, prg, asd; output = rata2 nilai

void rata_nilai(){
    char nama[2][17];//String nama[2] -> java, php, dll;
    float sbd, prg, asd, rata[2];

    //input
    printf("No\tNama\tSBD\tPRG\tASD\n");
    for(int i = 0; i < 2; i++){
        printf("%i\t", i + 1);
        scanf("%s\t%f\t%f\t%f", &nama[i], &sbd, &prg, &asd);

        //hitung langsung rata
        rata[i] = (sbd+prg+asd)/3;
    }

    //output
    printf("\n\n");
    printf("No\tNama\tRataNilai\n");
    for(int i = 0; i < 2; i++){
        printf("%i\t%s\t%.2f\n", i + 1, nama[i], rata[i]);
    }

}

int main()
{
    //array = tipe variabel yang dapat menyimpan data yang memiliki tipe yang sama
    //array_1d();
    //array_2d();
    rata_nilai();
    return 0;
}
