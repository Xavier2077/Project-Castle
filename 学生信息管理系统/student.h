#ifndef STUDENT_H
#define STUDENT_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Student
{
	//数据域
	int num;
	char name[20];
	char sex[10];
	int age;
	int score_Chinese;
	int score_Math;
	int score_Computer;
	int score_English;
	double score_average;
	int score_sum; 
	//指针域
	struct Student *next;
	 
}STU;
void Menu(void);
STU* Insert(STU *head,STU tmp);//按照顺序插入 
void Sort_num(STU *head);//排序 
STU* Find_num(STU *head,int num);//按照学号查找,按照姓名查找 
void output_a(STU *head);//遍历所有学生信息 
void Delete_num(STU **head,int num);//按照学号删除,按照学号删除 
void print_data(STU* pf);//遍历单个学生信息 
#endif
