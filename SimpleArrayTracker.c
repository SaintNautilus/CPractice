#include <stdio.h>

int main (){

    int arraytracker[10];

    for (int i =0; i < 6; i++) {
        arraytracker[i] = (i + 1) + 12;
        printf("arraytracker[%d] = %d\n", i, arraytracker[i]);
    }
    return 0;
}