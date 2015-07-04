#include<stdio.h>
void split(int parrentArray[],int a[], int b[], int la, int lb);
void merge(int a[], int b[], int combined[], int la, int lb);
int length;

 main()
{
    int arrayToBeSorted[5]={5,9,26,75,4};
    mergesort(arrayToBeSorted,5);
    print(arrayToBeSorted,5);
}

void merge(int a[], int b[], int combined[], int la, int lb)
{
int i=0, j=0, k=0;
while(i<la && j<lb)
{

    if(a[i]<b[j])
    {
      combined[k]=a[i];
      i++;  
    }
    else
    {
      combined[k]=b[j];
      j++;  
    }
    k++;
}
while(i<la)
{
  combined[k]=a[i];
      i++;
      k++;  
}
while(j<lb)
{
  combined[k]=b[j];
      j++;
      k++;  
}
}

void mergesort(int array[], int length)
{
    if(length<2)
    {
        return;
    }
    int la=length/2;
    int lb=length-la;
    int a[la];
    int b[lb];
    
    split(array,a,b,la,lb);
    mergesort(a,la);
    mergesort(b,lb);
    merge(a,b,array,la,lb);
    
}

void split(int parrentArray[],int a[], int b[], int la, int lb)
{
    int i,k=0;
    for(i=0;i<la;i++)
    {
        a[i]=parrentArray[k];
        k++;
    }
    for(i=0;i<lb;i++)
    {
        b[i]=parrentArray[k];
        k++;
    }
}


void print(int array[],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        printf("%d \n",array[i]);
    }
}


