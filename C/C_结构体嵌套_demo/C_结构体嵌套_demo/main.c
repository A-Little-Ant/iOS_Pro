//
//  main.c
//  C_结构体嵌套_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>

struct student
{
    char name[20];
    int age;
    struct born
    {
        int y;
        int m;
        int d;
    }birth;
};

int main(int argc, const char * argv[]) {
    
    struct student Huiqi = {"惠祺", 22, {1993,8,6}};
    printf("姓名：%s\n",Huiqi.name);
    printf("年龄：%d\n",Huiqi.age);
    printf("%d年%d月%d日\n",Huiqi.birth.y, Huiqi.birth.m, Huiqi.birth.d);
    
    return 0;
}
