//
//  main.c
//  C_宏_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
#define N 10
#define max_num 10
#define min_num 0
#define NUM 2*2*2
#define RES(x) x*x*x
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
int main(int argc, const char * argv[]) {
    int a[N] = {0};
    for (int i = min_num; i < max_num; i++) {
        printf("a[%d] = %d\n",i,a[i]);
    }
    int b = NUM * NUM;
    printf("b = %d\n",b);
    printf("RES(3) = %d\n",RES(3));
    printf("max = %d\n",MAX(10, 5));
    printf("min = %d\n",MIN(100, 50));
    
    return 0;
}
