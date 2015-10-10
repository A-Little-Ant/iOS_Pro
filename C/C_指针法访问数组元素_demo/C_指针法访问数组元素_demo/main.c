//
//  main.c
//  C_指针法访问数组元素_demo
//
//  Created by Suyuping on 15/10/5.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[5] = {1000, 10, 2, 3, 4};
    int *p = a; //保存数组的首地址   p---->a[0];
    printf("a[0]=%d\n",a[0]);
    printf("a[0]=%d\n",*p);
    printf("a[1]=%d\n",a[1]);
    printf("a[1]=%d\n",*(p+1));
    printf("a[2]=%d\n",a[2]);
    printf("a[2]=%d\n",*(p+2));
    for (int i = 0; i < 5; i++) {
        printf("a[%d]=%d\n",i,*(p+i));
    }
    
    return 0;
}