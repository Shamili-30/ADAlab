#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionSort(int a[],int n)
{
int i,j;
for(i=0;i<n-1;++i)
{
int minIndex=i;
for(j=i+1;j<n;++j)
{
if(a[j]<a[minIndex])
{
minIndex=j;
}
}
if(minIndex!=i)
{
int temp=a[i];
a[i]=a[minIndex];
a[minIndex]=temp;
}
}
}
int main()
{
int n,i;
printf("Enter the number of elements:");
scanf("%d",&n);
int a[n];
srand(time(NULL));
for(i=0;i<n;++i)
{
a[i]=rand()%10000;
}
clock_t start=clock();
selectionSort(a,n);
clock_t end=clock();
double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("Time taken for sorting:%f seconds\n",time_taken);
return 0;
}
