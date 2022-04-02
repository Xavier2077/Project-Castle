#include"student.h"
int main()
{
	printf("                                          欢迎使用学生信息管理系统\n"); 
	Help();
	STU *head=NULL;
	while(1)
	{
		printf("                        请输入操作指令：  ");
		char str[32]=" ";
		scanf("%s",str);
		if(strcmp(str,"insert")==0)
		{
			printf("                        请输入学生信息(学号 姓名 性别 年龄 四科成绩)：\n");
			STU tmp;
			printf("                        ");
			scanf("%d %s %s %d %d %d %d %d",&tmp.num,tmp.name,tmp.sex,&tmp.age,&tmp.score_Chinese,&tmp.score_Math,&tmp.score_Computer,&tmp.score_English);
			tmp.score_average=(tmp.score_Chinese+tmp.score_Computer+tmp.score_English+tmp.score_Math)/4.0;
			tmp.score_sum=tmp.score_Chinese+tmp.score_Computer+tmp.score_English+tmp.score_Math;
			head=Insert(head,tmp);

			
		}
		else if(strcmp(str,"sort")==0)
		{
			Sort_num(head);
		}
		else if(strcmp(str,"find")==0)
		{
			STU *pf=NULL;
			int num;
			printf("                        按照学号查找为1，按照姓名查找为2\n");
			int t;
			printf("                        ");
			scanf("%d",&t);
			if(t==1)
			{
				printf("                        请输入查询学生的学号:\n");
				printf("                        ");
				scanf("%d",&num);
				pf=Find_num(head,num);
			}
			else if(t==2)
			{
					printf("                        请输入查询学生的姓名:\n");
					char n_name[32];
					printf("                        ");
					scanf("%s",n_name);
					STU *pi=head;
					
					while(pi!=NULL&&strcmp(pi->name,n_name)!=0)
					{
						pi=pi->next;
					}
					if(pi!=NULL)
					{
						pf=Find_num(head,pi->num);
					}

			}
			pf=Find_num(head,num);
			if(pf!=NULL)
			{
				printf("                        学号 姓名 性别 年龄 语文成绩 电脑成绩 数学成绩 英语成绩 平均成绩 总成绩 \n"); 
				printf("                         %d  %s  %s   %d     %d      %d      %d       %d      %.2f     %d\n",pf->num,pf->name,pf->sex,pf->age,pf->score_Chinese,pf->score_Math,pf->score_Computer,pf->score_English,pf->score_average,pf->score_sum);
			}
			else
			{
				printf("                        未查询到该学生信息\n");
			}
		}
		else if(strcmp(str,"output")==0)
		{
			output_a(head);
		}
		else if(strcmp(str,"delete")==0)
		{
			int num;
			printf("                        请输入删除学生信息的学号：\n");
			printf("                        ");
			scanf("%d",&num);
			head=Delete_num(head,num);
		}
		else if(strcmp(str,"quit")==0)
		{
			printf("                        成功退出程序\n");
			break;
		}
		else 
		{
			printf("                        输出错入指令，请重新输入\n");
		}	
	}
	return 0;
}
