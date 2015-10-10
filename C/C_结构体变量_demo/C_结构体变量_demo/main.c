//
//  main.c
//  C_结构体变量_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
//声明一个结构体
struct student
{
    int No;
    char name[20];
    char gender[20];
};

int main(int argc, const char * argv[]) {
    
    struct student Huiqi = {0};
    //动态输入
    printf("请输入学号：\n");
    scanf("%d",&Huiqi.No);
    printf("请输入姓名\n");
    scanf("%s",Huiqi.name);
    printf("请输入性别：\n");
    scanf("%s",Huiqi.gender);
    printf("学号：%d\n",Huiqi.No);
    printf("姓名：%s\n",Huiqi.name);
    printf("性别：%s\n",Huiqi.gender);
    return 0;
}
