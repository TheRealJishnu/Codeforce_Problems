#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *arr;
int PrimeCheck(int n)
{
    if(n == 0 || n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else
    {
        int lim = sqrt(n);
        for (int i = 2; i <= lim; i++)
        {
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int RangeCount(int l, int r)
{
    int counter=0;

}

int main()
{
    arr = (int*)malloc(sizeof(int) * pow(10, 5));
    int i = 0;
    for (int num = 0; num <= pow(10, 5); num++)
    {
        if(PrimeCheck(num) == 1){
            arr[i++] = num;
            //i++;
        }
    }

    //Print
    // for (int i = 0; i < pow(10, 5) && arr[i] != 0; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    int *ans = (int*)malloc(sizeof(int) * pow(10, 5));
    
    
    
}
