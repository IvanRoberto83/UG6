#include <stdio.h> //Jangan di rubah, jika di rubah akan langsung 0

//kerjakan atau ubah kodenya hanya pada bagian int Prima dan int BiasaSpesial
int Prima(int namaKalian){
    //ganti parameter namaKalian dengan nama kalian. contoh bentuknya:
    //int Prima(int ivan){}
    //outputnya antara PRIMA atau BUKAN PRIMA
}

int BiasaSpesial(int namaKalian){
    //ganti parameter namaKalian dengan nama kalian. contoh bentuknya:
    //int BiasaSpesial(int kenzie){}
    //outputnya SPESIAL atau BUKAN SPESIAL
}

//bagian ini tidak perlu di rubah.
int main(){
    int bilangan;
    printf("Masukkan bilangan bulat positif\n>>");
    scanf("%d", &bilangan);
    
    printf("Bilangan %d: ", bilangan);
    Prima(bilangan);
    printf("\nBilangan %d: ", bilangan);
    BiasaSpesial(bilangan);
}


//testcase: 11, 22, 33, 53, 97
//output 11: PRIMA dan SPESIAL
//output 22: BUKAN PRIMA dan SPESIAL
//output 33: BUKAN PRIMA dan SPESIAL
//output 53: PRIMA dan BUKAN SPESIAL
//output 97: PRIMA dan BUKAN SPESIAL