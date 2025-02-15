#include<stdio.h>
#include<stdint.h>
void bubble_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++) // i = 0
	{
		for(j=1;j<n-i;j++) //
		{
			if(a[j-1]>a[j])
			{
				int temp;
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
}
void insertion_sort(int a[],int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		int j=i-1;
		int temp = a[i];
	    while(j>=0 && a[j]>temp)
	    {
	    	a[j+1]=a[j];
	    	j--;
		}
		a[j+1]=temp;
	}
	
}
void selection_sort(int a[],int n)
{
	int b[n];
	int i,j;
	
	for(i=0;i<n;i++) // i =0
	{
		int min=a[0],ind = 0; // 0
		for(j=0;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				ind=j;
			}
		}
		b[i]=min;
		a[ind]=WINT_MAX;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubble_sort(a,n);
	insertion_sort(a,n);
	//selection_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
