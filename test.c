#include<stdio.h>
#include<time.h>

int main(){
    clock_t start, end;
    start = clock();
    printf("start time: %ld\n", start);
    int total = 20000000;
    for(int i=0;i<total;i++){
        //total--;
    }
    end = clock();
    printf("end time: %ld\n", end);
    long cost = end - start;
    printf("cost time: %ld\n",cost);
    return 0;
}