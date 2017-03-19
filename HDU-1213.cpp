//http://acm.hdu.edu.cn/typeclass.php 杭电题目分类
#include<stdio.h>
int num[1100];
int findx(int x)
{
  int r=x;
  while(num[r]!=r)
    r=num[r];
  return r;
}
void cs(int x,int y)
{
 int fx,fy;
 fx=findx(x);
 fy=findx(y);
 if(fx!=fy)
  num[fx]=fy;
}
int main()
{
 int t,n,m,i,x,y,count;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)
   num[i]=i;
  for(i=1;i<=m;i++)
  {
   scanf("%d%d",&x,&y);
   cs(x,y);
  }
  for(count=0,i=1;i<=n;i++)
   if(num[i]==i)
    count++;
  printf("%d\n",count);
 }
 return 0;
}
