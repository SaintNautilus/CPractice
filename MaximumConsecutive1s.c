#include <stdio.h>

int main (){

int list[6] = {1, 1, 0, 1, 1, 1};

int currentcount = 0;
int maximumcount = 0;

for(int i = 0; i < 6; i++){
    if (list[i] == 1) {
        currentcount += 1;}    
        else  {
        if (currentcount > maximumcount){
        maximumcount = currentcount;}
        currentcount = 0;}
}

if (currentcount > maximumcount){
    maximumcount = currentcount;
}

printf( "%d\n", maximumcount);
return 0;
}