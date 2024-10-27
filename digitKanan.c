#include <stdio.h> //Jangan di rubah, jika di rubah akan langsung 0

//kerjakan atau ubah kodenya hanya pada bagian int iniProses dan void Hasil.
int iniProses(int ivan){
    int hasil;
    hasil = ivan % 10;
    return hasil;
}

void Hasil(int a, int b, int c){
    a = iniProses(a);
    b = iniProses(b);
    c = iniProses(c);

    if(a == b && b==c){
        printf("\n3 bilangan sama");
    }
    else if(a == b || b == c || a == c){
        printf("\n2 bilangan sama");
    }
    else{
        printf("\ntidak ada bilangan yang sama");
    }
}

//int main jangan di rubah 
int main(){
    int bilangan1, bilangan2, bilangan3;

    printf("Masukkan bilangan pertama : ");
    scanf("%d", &bilangan1);

    printf("Masukkan bilangan kedua : ");
    scanf("%d", &bilangan2);

    printf("Masukkan bilangan ketiga : ");
    scanf("%d", &bilangan3);

    Hasil(bilangan1, bilangan2, bilangan3);

}

//testcase: 10 21 32
//output: tidak ada bilangan yang sama.

//testcase: 11 21 3
//output: 2 bilangan sama.

//testcase: 11 21 31
//output: 3 bilangan sama.





