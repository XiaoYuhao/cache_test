#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int nums[1024*1024];

int test(int k){
    clock_t start, end;
    start = clock();
    long sum = 0;
    int size = sizeof(int)*k*1024;
    printf("Memory Size: %d ====> ", size);

    //下面是顺序读取
    for(int i=0;i<100000000;i++){
        rand();
        sum += nums[i%(k*1024)];
    }
    /*
    //下面是随机读取
    for(int i=0;i<100000000;i++){
        sum += nums[rand()%(k*1024)];
    }
    */
    
    end = clock();
    double cost = (double)(end - start)/CLOCKS_PER_SEC;
    printf("cost time: %lf\n",cost);
    return sum;
}

int main(){
    srand(time(NULL));
    memset(nums, -1, sizeof(nums));

    for(int i=16;i<=1024;i+=16){
        test(i);
    }
    
    return 0;
}