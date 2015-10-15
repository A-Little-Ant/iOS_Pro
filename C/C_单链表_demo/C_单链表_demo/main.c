//
//  main.c
//  C_单链表_demo
//
//  Created by Suyuping on 15/10/11.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//声明一个结构体
typedef struct Student
{
    //数据域
    int No;//学号
    char name[20];//姓名
    //指针域
    struct Student *next;//指向下一个节点
}Stu;
//声明函数    尾插法来创建链表
Stu *myMalloc(void);//创建节点
Stu *createList(Stu *head);//创建链表
void showList(Stu *head);//遍历
//-----------------------------------------//
Stu *destroyList(Stu *head);//销毁
void searchList(Stu *head);//搜索
Stu *insertList(Stu *head);//插入
Stu *insertNode(Stu *head, Stu *node);//插入节点
Stu *deleteList(Stu *head);//删除
Stu *backList(Stu *head);//逆序
Stu *sortList(Stu *head);//链表排序
void menu(void);//菜单

Stu *insertList(Stu *head)
{
    Stu *pnew = NULL;
    if(!head)
    {
        printf("sorry, doesn't exist\n");
        return NULL;
    }
    //创建一个新的节点
    pnew = myMalloc();
    //判断是否创建成功
    if(!pnew)
    {
        printf("fail to create\n");
        return head;//链表没有被修改
    }
    head = insertNode(head, pnew);
    //再判断
    if(!head)
    {
        printf("fail to insert node\n");
        return NULL;
    }
    //否则 返回插入成功以后的新链表
    return head;
}

Stu *insertNode(Stu *head, Stu *node)
{
    Stu *ptemp = head;
    Stu *prev = NULL;
    
    if(!head)
    {
        printf("链表不存在\n");
        return NULL;
    }
    
    while (ptemp) {
        if((ptemp->No > node->No) && ptemp == head)
        {
            printf("插入的节点在头结点\n");
            head = node;
            node -> next = ptemp;
            return head;
        }
        else if((ptemp -> No < node -> No) && ptemp -> next == NULL)
        {
            printf("插入的新节点在为节点\n");
            ptemp -> next = node;
            node -> next = NULL;
            return head;
        }
        else
        {
            if(ptemp -> No > node -> No)
            {
                printf("插入的位置在中间节点\n");
                prev -> next = node;
                node -> next = ptemp;
                return head;
            }
            else
            {
                prev = ptemp;
                ptemp = ptemp -> next;
            }
        }
    }
    return head;
}

void searchList(Stu *head)
{
    int num = 0;
    Stu *ptemp = head;
    if(!head)
    {
        printf("对不起，链表为空\n");
        exit(1);
    }
    printf("请输入要查找的学员的ID\n");
    scanf("%d",&num);
    while (ptemp) {
        if (num == ptemp -> No) {
            printf("找到了要查找的学员\n");
            printf("学号：%d\n",ptemp -> No);
            printf("姓名：%s\n",ptemp -> name);
            return;
        }
        ptemp = ptemp -> next;
    }
    printf("对不起，查无此人\n");
}
Stu *destroyList(Stu *head)
{
    Stu *ptemp = head;
    if(!head)
    {
        printf("对不起，链表为空\n");
        return NULL;
    }
    while(ptemp)
    {
        head = ptemp -> next;
        free(ptemp);
        
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
