#include<stdio.h>
void main()
{
int f[50], i, st, len, j, c, k, flag = 0;
for(i=0;i<50;i++)
f[i]=0;
x: flag=0;
printf("Enter start and length : ");
scanf("%d%d", &st,&len);
for(k=st;k<(st+len);k++)
if(f[k]==0)
flag++;
if(len==flag)
{
for(j=st;j<(st+len);j++)
if(f[j]==0)
{
f[j]=1;
printf("%d\t%d\n",j,f[j]);
}
if(j!=(st+len-1))
printf(" The file is allocated to disk\n");
}
else
printf(" The file is not allocated \n");
printf("Do you want to enter more file(Yes - 1/No - 0)");
scanf("%d", &c);
if(c==1)
goto x;
else

getch();
}

