//
//  main.c
//  C_数组指针_demo
//
//  Created by Suyuping on 15/10/5.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int (*p)[10] = &a;
    printf("a[0]=%d\n",a[0]);
    printf("a[0]=%d\n",(*p)[0]);
    return 0;
}
