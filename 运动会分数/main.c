#include<stdio.h>
#include<math.h>
#define MAXSIZE  100
#define N 4
#define M 3
#define W 2
typedef struct
{
    int snum;            //学校编号
    char name[20];       //姓名
    int num;             //项目编号
    int rank;            //名次
    int score;           //名次对应的得分
}elementype;
elementype a[];
typedef struct
{
    elementype s[MAXSIZE];
    int last;
}Seqlist;
Seqlist L;
typedef struct
{
    int ms[M];
    int fs[W];
    int s[N];
}list;
int sum(int m,int w)//统计总人数
{
    int sum = 0;
    for(int i=1;i<=m+w;i++)
    {
        if(i%2==0)//是偶数
            sum=sum+5;
        else//是奇数
            sum=sum+3;
    }
    return sum;
};
void intput(Seqlist *L)
{
    //入口参数Seqlist *L
    //从键盘或文件中输入成绩单（snum；name；num；rank；）
    ///出口参数Seqlist *L
    for(int k=1;k<=M+W;k++)
    {
        if(k%2==0)
        {
            for(int i=0;i<3;i++)
            {
                scanf("%d %c %d %d",&a[i].snum,&a[i].name,&a[i].num,&a[i].rank);
            }
        }else
        {
            for(int j=0;j<5;j++)
            {
                scanf("%d %c %d %d",&a[j].snum,&a[j].name,&a[j].num,&a[j].rank);
            }
        }
    }
};
void change(Seqlist *L,int sum)
{
    //入口参数Seqlist *L
    //将输入名次按照项目编号奇偶计算得到相应的得分
    //出口参数Seqlist *L
    for(int p=0;p<sum;p++)
    {
        if(a[p].num%2==0)
        {
            if(a[p].rank==1)
            {
                a[p].score=7;
            }
            if(a[p].rank==2)
            {
                a[p].score=5;
            } if(a[p].rank==3)
            {
                a[p].score=3;
            } if(a[p].rank==4)
            {
                a[p].score=2;
            } if(a[p].rank==5)
            {
                a[p].score=1;
            }
    }else
    {
        if(a[p].rank==1)
        {
            a[p].score=5;
        }
        if(a[p].rank==2)
        {
            a[p].score=2;
        } if(a[p].rank==3)
        {
            a[p].score=2;
        }
    }
};
void output(Seqlist L,int n,int sum)
{
    //入口参数Seqlist L，学校编号1--n
    //按学校编号输出各项成绩
    //出口参数 无
    printf("打印各学校成绩单");
    printf("项目号 姓名 名次 得分");
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<sum;j++)
        {
            if(a[j].snum==i)
            {
                printf("%d %s %d %d",a[j].num,a[j].name,a[j].rank,a[j].score);
            }
        }
    }
};
void calcu(Seqlist L,int ms[],int fs[],int mf[],int n,int m,int sum)
{
    //入口参数Seqlist L ，学校n，男子项目1--m
    //按学校编号计算各学校团体总分并输出；
    //出口参数ms[i], fs[i], s[i];
    int team_score=0;
    int man_score=0;
    int women_score=0;
    print("打印团体总分报表：")
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<sum;j++)
        {
            if(a[j].snum==i)
            {
                team_score=a[j].score+team_score;//计算学校团体总分
            }
        }
    }
    for(int k=1;k<=m+n;k++)
    {
        if(k<=m)
        {
            man_score=man_score+a[].score;
        }
        else
        {
            women_score=women_score+a[].score;
        }
    }
};
int ListInsert(Seqlist *L,int i,elemtype e)
{
    //线性表L中第i个元素前，插入元素e,插入成功返回OK，失败返回ERROR
}

int main()
{
    
    return 0;
}
