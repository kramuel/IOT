#include <stdio.h>
#include <math.h>

void distance(float* p1, float* p2){
    float res;
    float xdiff = *p2 - *p1;
    float ydiff = *(p2+1) - *(p1+1);
    float zdiff = *(p2+2) - *(p1+2);
    res = sqrtf(pow(xdiff,2) + pow(ydiff,2) + pow(zdiff,2));
    
    printf("%.2f",res);
}

int main(){
    float a[] = {0,0,0};
    float b[] = {2,2,2};

    distance(a, b);

    return 0;
}