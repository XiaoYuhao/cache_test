#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    clock_t start, end;
    start = clock();
    printf("start time: %ld\n", start);
    //
    int a=0, b=0, total = 2000;
    int k = 600;
    int size = sizeof(int)*k*1024;
    printf("Memory Size: %d\n", size);
    int *nums = (int *)malloc(size);
    while(total--){
        /*for(int i=0;i<k*1024;i++){
            b = rand()%(k*1024);
            a = nums[i];
        }*/
        for(int i=0;i<100000;i++){
            a += nums[rand()%(k*1024)];
            //b = a;
        }
    }
    //
    end = clock();
    printf("end time: %ld\n", end);
    double cost = (double)(end - start)/CLOCKS_PER_SEC;
    printf("cost time: %lf\n",cost);
    return 0;
}