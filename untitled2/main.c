#include <stdio.h>

void soma3coisas(int arrayprasomar[]) {

    int somafinal;

    for(int i = 0; i < 3; ++i) {

        somafinal += arrayprasomar[i];

    }

    printf("a soma dos 3 numeros sao: %d", somafinal);

}

int main(void) {

    int arrayprasomar[3];

    for (int i = 0; i < 3; ++i) {

        printf("digite numero: ");
        scanf("\n%d",&arrayprasomar[i]);

    }

    soma3coisas(arrayprasomar);



    return 0;
}
