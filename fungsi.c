#include <stdio.h>
#include <math.h>

float hitung_rumus(int x, int m)
{
    float y=0;
    y = sqrt((5*pow(x,3)) - pow(x,m-1) + 12 );
    return y;
}

int main(){
int x=2; int m=3; float y = 0;
y = hitung_rumus(x,m);
printf("Hasilnya y= %f", y);
}
