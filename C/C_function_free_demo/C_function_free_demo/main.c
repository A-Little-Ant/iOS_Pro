//
//  main.c
//  C_function_free_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *p = (int*)malloc(4);
    if (!p)
    {
        printf("内存分配失败\n");
        exit(1);
    }
    *p = 50;
    free(p);
    p = NULL;
    
    return 0;
}
