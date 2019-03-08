#include <stdio.h>
#include <stdlib.h>
//The prime factors of 13195 are 5, 7, 13 and 29.

//What is the largest prime factor of the number 600851475143 ?

int main(){
    long p=600851475143;
    long pfBorder = p/2;
    int flag=0;
    long max =0;
    for(long i=0; i<pfBorder; i++)
    {
        if(p % i == 0)
        {
            for(long j= 0; j< i/2; j++){
                if(i%j==0)
                {
                  flag = 1;
                  break;
                } 
            }
        }

        if(flag == 0 && i>max){
            max = i;
            continue;
        }
        else{
            flag = 0;
        }
    }
    
    printf("%ld",max);
}