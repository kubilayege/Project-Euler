#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int answer = 0;
    int max;
    
    for(int a=100; a<999 ; a++){
        answer = lPnumber(a*999);
        if(answer>max){
            max = answer;
        }
    }

}

int lPnumber(int sayitut){
    
    int sayi,sayitut,sayac,kontrol=0,basamak=1,x=0,y=0,z;
    sayi = sayitut;

    while(sayi>9){
        sayi = sayi / 10;
        basamak++;
    }

    if(sayi<10)
    {
        sayi=sayitut;
        sayac = basamak/2;
        for(;sayac>0;sayac--){
            x = sayi % 10;
            z = (pow(10,(basamak - 2)));
            y = sayi / (pow(10,(basamak - 1)));
            
            sayi = sayi - x;
            sayi = sayi / 10;
            sayi = sayi - (y*z);

            basamak-=2;

            if(x==y){
                kontrol = -1;
                    if(kontrol == -1 && sayac == 1){
                        return sayitut;
                    }
            }
            else{
                kontrol = -2;
                sayac = 0;
                return 0;
            }
        }
    }
}







