#include<stdio.h>
#define n 6
typedef struct s
{
 int ID;
 int proft;
 int ddln;
}Job;
void sortProfit(Job *a)
{
 int i,j;
 Job temp;
 for(i=1;i<n;i++)
 {
 temp=a[i];
 for(j=i-1;(j>=0)&&((a[j].proft)<(temp.proft));j--)
 {
 a[j+1]=a[j];
 }
 a[j+1]=temp;
 }
 return;
}
void disp(Job *a, int m)
{
 int i;
 printf("\n ID:\t");
 for(i=0;i<m;i++)
 {
 printf("%d\t", a[i].ID);
 }

 printf("\n Profit:\t");
 for(i=0;i<m;i++)
 {
 printf("%d\t", a[i].proft);
 }
 printf("\n Deadline:\t");
 for(i=0;i<m;i++)
 {
 printf("%d\t", a[i].ddln);
 }
}
int main()
{
 Job pool[n];
 int i,j,r,sz=0;
 int profit=0;
 Job soln[n+1];
 for(i=0;i<n;i++)
 {
 pool[i].ID=(i+1);
 printf("Enter Proffit value for %dth job: ",i+1);
 scanf("%d",&pool[i].proft);
 printf("Enter deadline for %dth job: ",i+1);
 scanf("%d",&pool[i].ddln);
 }
 //disp(pool,n);


 sortProfit(pool);

 disp(pool,n);

 soln[0].ID=0;
 soln[0].proft=0;
 soln[0].ddln=0;

 soln[1]=pool[0];
 sz=1;

 for(i=1;i<n;i++)
 {
 r=sz;
 while(((soln[r].ddln)>(pool[i].ddln))&&(soln[r].ddln !=r))
 {
 r--;
 }
 if(((soln[r].ddln)<=(pool[i].ddln))&&((pool[i].ddln)>r))
 {
 for(j=sz;j>=r+1;j--)
 {
 soln[j+1]=soln[j];
 }
 soln[j+1]=pool[i];
 sz++;
 }
 }

 disp(soln,sz+1);

 getch();


 return 0;
}
