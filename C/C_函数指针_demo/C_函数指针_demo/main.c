//
//  main.c
//  C_函数指针_demo
//
//  Created by Suyuping on 15/10/5.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
void foo(void);
void foo(void)
{
    printf("hello world\n");
}
//封装一个新的函数
void print(void(*func)());
void print(void(*func)())
{
    //调用了foo()函数
    func();
}

int main(int argc, const char * argv[]) {
    //函数的调用
    foo();
    //声明一个函数指针
    void(*func)() = foo;
    //通过指针调用
    (*func)();
    //--------调用---------
    print(foo);//把foo这个函数传递给print这个函数做参数
    return 0;
}
