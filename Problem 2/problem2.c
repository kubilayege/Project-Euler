#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int c = 0;
    int f0=0;
    int f1=1;
    while(c<=4000000){
        int nextfib;
        nextfib= f0+f1;
        f0=f1;
        f1=nextfib;
        if(nextfib % 2 == 0){
            c+=nextfib;
        }
    }
    printf("%d",c);
}
