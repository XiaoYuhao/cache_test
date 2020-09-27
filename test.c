#include<stdio.h>
#include<time.h>

int main(){
    clock_t start, end;
    int total = 200000000;
    start = clock();
    printf("start time: %ld\n", start);
    total = 1000000000;
    long a = 0;
    for(int i=0;i<total;i++){
        a+=i;
    }
    end = clock();
    printf("end time: %ld\n", end);
    double cost = (double)(end - start)/CLOCKS_PER_SEC;
    printf("cost time: %lf\n",cost);
    return 0;
}