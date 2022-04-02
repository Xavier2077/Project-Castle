#include"student.h"

extern void Help(void)
{
	printf("                        ----------------------------------------------------------                                     \n");
	printf("                        |                 (1)添加信息  insert                    |\n");               
	printf("                        |                 (2)信息排序  sort                      |\n");                 
	printf("                        |                 (3)查找信息  find                      |\n");
	printf("                        |                 (4)删除信息  delete                    |\n");
	printf("                        |                 (5)遍历信息  output                    |\n");
	printf("                        |                 (6)退出程序  quit                      |\n"); 
	printf("                        ----------------------------------------------------------                                      \n");
	return ;
}

STU* Insert(STU *head,STU tmp)
{
	STU *pi=(STU*)calloc(1,sizeof(STU));
	if(pi==NULL)
	{
		perror("calloc");
		exit(-1);//如果申请失败直接结束程序 
	}
	*pi=tmp;
	pi->next=NULL;	
	if(head==NULL)
	{
		head=pi;
	}
	else
	{
		STU *pf=head;
		while(pf->next!=NULL)
		{
			pf=pf->next;
		}
		pf->next=pi;
		pi->score_average=(pi->score_Computer+pi->score_English+pi->score_Math+pi->score_Chinese)/4;
		pi->score_sum=pi->score_Computer+pi->score_English+pi->score_Math+pi->score_Chinese;
	}
	return head;
}
void Sort_num(STU *head)
{
	if(head==NULL)
	{
		printf("                        信息库为空\n");
	}
	else
	{
		STU *pi=head;
		STU *pj=head;
		//选择法排序 
		while(pi->next!=NULL)
		{
			STU *min=pi;
			pj=pi->next;
			while(pj!=NULL)
			{
				if(min->num>pj->num)
				{
					min=pj;
				}
				pj=pi->next; 
				
			}
			if(pi!=pj)
			{
				//交换数据 
				STU tmp=*pi;
				*pi=*min;
				*min=tmp;
				//交换指针
				tmp.next=pi->next;
				pi->next=pj->next;
				pj->next=tmp.next;
				
			}
			pi=pi->next;
		}

	}
	return ;
}
STU* Find_num(STU *head,int num)
{
	STU *pf=head;
	if(head==NULL)
	{
		printf("                        信息库为空\n");
	}
	else
	{
		while(pf!=NULL&&pf->num!=num)
		{
			pf=pf->next;
		}
	}
	return pf;
}
void output_a(STU *head)
{
	STU *pf=head;
	if(head==NULL)
	{
		printf("                        信息库为空\n"); 
	}
	else
	{
		printf("                        学号 姓名 性别 年龄 语文成绩 电脑成绩 数学成绩 英语成绩 平均成绩 总成绩 \n"); 
		while(pf!=NULL)
		{
			printf("                         %d  %s  %s   %d     %d      %d      %d       %d      %.2f     %d\n",pf->num,pf->name,pf->sex,pf->age,pf->score_Chinese,pf->score_Math,pf->score_Computer,pf->score_English,pf->score_average,pf->score_sum);
			pf=pf->next;
		}
	}
	return ;
}
STU* Delete_num(STU *head,int num)
{
	STU *pf=head;
	STU *pi=NULL;
	if(head==NULL)
	{
		printf("                        信息库为空\n");
	}
	else
	{
		while(pf->next!=NULL&&pf->num!=num)
		{
			pi=pf;
			pf=pf->next;
		} 
		if(pf->num==num)
		{
			if(pf==head)//头部删除
			{
				head=head->next;
				//free(pf);
			} 
			else//删除中尾部节点 
			{
				pi->next=pf->next;
				//free(pf);
			}
			free(pf);
			
			printf("                        信息删除成功\n");
		}
		else
		{
			printf("                        未查询到该学生信息\n");
		}
	}
	return head;
}

