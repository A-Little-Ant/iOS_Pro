//
//  main.c
//  C_扩展_函数指针_demo
//
//  Created by Suyuping on 15/10/5.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
//回调
void sort(int *a, int n, bool(*func)(int, int));
void sort(int *a, int n, bool(*func)(int, int))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j ++)
        {
            if (func(a[j], a[j+1]))
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
            
        }
    }
}
bool compareup(int a, int b)
{
    return a > b;
}
bool comparedown(int a, int b)
{
    return a < b;
}

bool compareum(int a, int b)
{
    int na = a%10;
    int nb = b%10;
    return na > nb;
}
void show(int *a, int b)
{
    for (int i = 0; i < b; i ++) {
        printf("a[%d]=%d\n",i, a[i]);
    }
}
int main(int argc, const char * argv[]) {
    int arr[5] = {21, 44, 12, 55, 1234};
    sort(arr, 5, comparedown);
    show(arr, 5);
    sort(arr, 5, compareup);
    show(arr, 5);
    return 0;
}
