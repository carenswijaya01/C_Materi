#include <stdio.h>
#include <stdlib.h>

//variabel global dan lokal
int x = 10;

void cetakX(){
    void cetakY(){
        printf("INI ADALAH VOID cetakY\n");
    }
    printf("HASIL X DARI cetakX = %i\n", x);
    cetakY();
}

int main()
{
    void cetakY(){
        printf("INI ADALAH VOID cetakY dari MAIN\n");
    }
    int a = 1;
    printf("VARIABEL GLOBAL X = %i\n", x);
    x = 2; //global
    printf("VARIABEL GLOBAL X = %i\n", x);
    int x = 5; //lokal
    printf("VARIABEL LOKAL X = %i\n", x);
    cetakX();
    printf("VARIABEL LOKAL A = %i\n", a);
    cetakY();
    return 0;
}
