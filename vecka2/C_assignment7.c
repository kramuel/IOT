#include <stdio.h>
#include <math.h>

void isPrime(int nr){
    if (nr % 2 == 0) {
        printf("FALSE");
        return;
    }
    for (int i = nr-2; i > 1; i-=2)
    {
        if (nr % i == 0 ){
            printf("FALSE");
            return;
        }
    }

    printf("TRUE");    
}

int main(){
    isPrime(12);

    return 0;
}