#include<stdio.h>
#include<conio.h>
typedef struct pro
{
int pno,pri,act;
}pro;
pro p[30];
int tp;
int cod;

   void insert()
   {
     int i,j,n;
     printf("\n Enter no of processes you want to enter:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      printf("\n Enter details for process p%d",tp);

      printf("\n Priority and state(alive -1 dead-0)");
      scanf("%d %d",&p[tp].pri,&p[tp].act);
      p[tp].pno=tp+1;
      tp++;
      }
    }
    void ring()
    {
	int i,j,k,n,m;
	char s1[20],s2[30];
	printf("\n Enter process id which will invoke the election:");
	scanf("%d",&n);
	i=n+1;
	j=p[n].pri;
	k=i;
	itoa(n+1,s1,10);
	while(i!=n)
	{
	     if(i==tp)
	      { i=0; }
	      if(p[i].act==1)
	       {
		 itoa(i+1,s2,10);
		 strcat(s1,s2);
		 printf("\n Message Recieved by p%d is %s",i+1,s1);
		 if(p[i].pri>j)
		  k=i+1;
		 }
		i++;
	     }
	     printf("\n New coordinator is %d",k);
	       cod=k;
	  }


void main()
{
   int i,j,k,n,m,ch;
   char s1[20],s2[30];
   clrscr();
   tp=0;
   do
   {
   printf("\n Select Choice\n1.Enter Process details\n2.Ring Algorithm\n3.Kill Process\n4.Make process Alive\nEnter Choice:");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1: insert();
	      break;
       case 2: ring();

	       break;
    }
    }while(ch!=3);
    getch();
    }