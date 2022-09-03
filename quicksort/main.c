#include<stdio.h>
#include<conio.h>
void quickSort(int*, int, int);
int partitionPivot(int*, int, int);
void swapAddress(int*, int, int);
void quickSort(int* a, int first, int last)
{
 int position;
 if(first<last)
 {
 position=partitionPivot(a,first,last+1);
 quickSort(a,first,position-1);
 quickSort(a,position+1,last);
 }
}
int partitionPivot(int*a, int first, int last)
{
 int low=first, high=last;
 int pivot=a[first];

 do
 {
 do
 {
 low++;
 }while(a[low]<pivot);

 do
 {
 high--;
 }while(a[high]>pivot);

 if(low<high)
 {
 swapAddress(a,low,high);
 }

 }while(low<high);
 a[first]=a[high];
 a[high]=pivot;

 return high;

}
void swapAddress(int* a, int x, int y)
{
 int temp;
 temp=a[x];
 a[x]=a[y];
 a[y]=temp;
}
int main()
{
 int* ar;
 int n, i;

 printf("Enter the size of the list: ");
 scanf("%d", &n);
 ar=(int*) malloc((n+1)*sizeof(int));

 for(i=0;i<n;i++)
 {
 printf("Enter Value: ");
 scanf("%d", &ar[i]);
 }
 ar[n]=1000; // any learge value as sentinel
 quickSort(ar,0,n-1);

 printf("\n\t\tThe sorted array: \n");
 for(i=0;i<n;i++)
 {
 printf("%d ", ar[i]);
 }

 getch();
 return 0;
}
