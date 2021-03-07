#include <stdio.h>
#include <stdlib.h>

int main()
{

    int input = 1;
    int *numArr = malloc(sizeof(int));
    int arrSize = 0;

    while (1)
    {
        printf("Input number, 0 to stop: ");
        scanf("%d", &input);

        if (input == 0){
            break;
        }
        numArr[arrSize] = input;

        arrSize++;
        numArr = realloc(numArr, (arrSize + 1) * sizeof(int));

    }
    
    //sort
    int didSwap;
    while (1){

        didSwap = 0;

        for (size_t i = 0; i < arrSize-1; i++)
        {
            if (numArr[i]>numArr[i+1])
            {
                //swap
                int temp = numArr[i];
                numArr[i] = numArr[i+1];
                numArr[i+1] = temp;
                didSwap = 1;

            }
            
        }
        
        //checked all nums withouth swapping == sorted
        if (didSwap == 0){
            break;
        }
    }

    for (size_t i = 0; i < arrSize; i++)
    {
        printf("%d\n", numArr[i]);
    }

    return 0;
}