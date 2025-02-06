#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define t 100 // количество итераций
#define turn_on_meandr 1
#define turn_on_sine 1

float meandr_(float x, float *arr);
float sine_(float x, float *arr);
int main(){
    if(turn_on_meandr == 1){
        float *meandr_vector = calloc(t,sizeof(float));
        meandr_(t, meandr_vector);
    }
    if(turn_on_sine == 1){
        float *sine_vector = calloc(t,sizeof(float));
        sine_(t, sine_vector);
    }
    return 0;
}
float meandr_(float x, float *arr){
    float y = 0;
    for (float  i = 0; i < x; i++)
    {
        int j = i;
        y = i - ((i*i*i)/(6))+ ((i*i*i*i*i)/(120))-((i*i*i*i*i*i*i)/(5040));
        arr[j] = y;
        y = 0;
    }
    
    
}

float sine_(float x, float *arr){
    float y = 0;

}