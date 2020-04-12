#include<stdio.h>
#include<stdlib.h>
int a[10],i,n,j,p,s,q,temp,b[10],c[20];
void create();
void display();
void traverse();
void insert();
void deletion();
void sort();
void merge();
void search();
void main()
{
int c;
do
{
printf("\n****menu****\n");
printf("1. create\n");
printf("2. diaplay\n");
printf("3. traverse\n");
printf("4. insert\n");
printf("5. delete\n");
printf("6. sort\n");
printf("7. merge\n");
printf("8. searching\n");
printf("9. exit\n");
printf("*******\n");
printf("enter your choice=\n");
scanf("%d",&c);
switch(c)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
traverse();
break;
case 4:
insert();
break;
case 5:
deletion();
break;
case 6:
sort();
break;
case 7:
merge();
break;
case 8:
search();
break;
case 9:
exit(0);
default:
printf("wrong choice");
}
}
while(1);
return 0;
}
void create()
{
printf("enter the size of the array=\n");
scanf("%d",&n);
printf("enter the elements of the array=");
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
printf("the create was successful");
}
void display()
{
printf("the array is=\n");
for(i=0;i<=n-1;i++)
printf(" %d",a[i]);
printf("the display was successful");
}
void traverse()
{
printf("the array is=\n");
for(i=0;i<=n-1;i++)
printf(" %d",a[i]);
printf("the traverse was successful");
}
void insert()
{
printf("enter the element you want to insert=\n");
scanf("%d",&s);
printf("enter the position of element=\n");
scanf("%d",&p);
for(i=n-1;i>=p-1;i--)
a[i+1]=a[i];
a[p-1]=s;
n=n+1;
printf("the insert was successful");
}
void deletion()
{
printf("enter the position of the element=\n");
scanf("%d",&p);
for(i=p;i<=n-1;i++)
a[i-1]=a[i];
n=n-1;
printf("the delete was successful");
}
void sort()
{
for(i=0;i<=n-1;i++)
{
for(j=0;j<=n-2-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("the sort was successful");
}
void merge()
{
printf("enter the size of the array that you want to merge=\n");
scanf("%d",&s);
printf("enter the elements `of the array =\n");
for(i=0;i<=s-1;i++)
scanf("%d",&b[i]);

for(i=0,j=0;i<=n-1;i++,j++)
c[j]=a[i];
for(i=0,j=n;i<=s-1;i++,j++)
c[j]=b[i];
printf("mergered array is =\n");
for(j=0;j<=n+s-1;j++)
printf(" %d",c[j]);
printf("the merge was successful");
}
void search()
{
printf("enter the element you want to search=\n");
scanf("%d",&s);
for(i=0;i<=n-1;i++)
{
if(a[i]==s)
{
printf(" %d element found at a[%d]",s,i);
printf("the search was successful");
break;
}
}
if(i==n)
{
printf("element not found");
printf("the search was unsuccessful");
}
}
