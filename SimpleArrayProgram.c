#include <stdio.h>

int main(){

    int arraytest[10];

    for (int i = 0; i < 10; i++) {
        arraytest[i] = (i + 1) * 2;
        printf("arraytest[%d] = %d\n", i, arraytest[i]);
    }

    return 0;
}
