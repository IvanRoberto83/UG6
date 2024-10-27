#include <stdio.h> //Jangan di rubah, jika di rubah akan langsung 0

//kerjakan atau ubah kodenya hanya pada bagian int Prima dan int BiasaSpesial
void Prima(int ivan){
    int cek = 0;

    if (ivan == 0 || ivan == 1){
        printf("Bukan bilangan prima maupun komposit");
    }

    else{
        for(int i = 2 ; i <= ivan/2; i++){
            if (ivan % i == 0){
                printf("BUKAN PRIMA");
                cek = 1;
                break ;
            }
        }
        if (cek == 0){
            printf("PRIMA");
        }
    }       
}

void BiasaSpesial(int ivan){
    if(ivan % 11 == 0){
        printf("SPESIAL");
    }
    else{
        printf("BUKAN SPESIAL");
    }
}

//bagian ini tidak perlu di rubah.
int main(){
    int bilangan;
    printf("Masukkan bilangan bulat positif\n>> ");
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