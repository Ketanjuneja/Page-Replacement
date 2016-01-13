#include<stdio.h>
#include<conio.h>

typedef struct pro
{
int at,st,ft,tat,pt,wt,et,flag,pn;
}node;
/*typedef struct Q
{
   node p[10];
   struct Q *next;
}Q;
node p[10];
Q ready;
Q  pr;
void insert(Q *q,node *p)
{
  if(q.rear

struct pro temp[10];*/
node p[10],t1;
node temp[10];
int n,ts;
void rr();
void main()
 {    int i;
      clrscr();
    printf("\n Enter no of processes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter process time and arival time for P%d:",i);
      scanf("%d %d",&p[i].at,&p[i].pt);
      p[i].st=-1;
      p[i].flag=-1;
      p[i].pn=i;
      p[i].et=-1;
    }
    printf("\n Enter time slice:");
    scanf("%d",&ts);
    rr();
    for(i=0;i<n;i++)
    {
      printf("\np%d-> %d  %d %d ",p[i].pn,p[i].st,p[i].at,p[i].ft);
      }
      getch();
 }
 void rr()
 {
    int t=0,i=0,j=0,k,flag=0,flagr=0,finish=0,z;
	 while(flagr==0)
	 {          flagr=1;
		    finish=0;
	      for(i=0;i<n;i++)
	      {
		  if(p[i].at<=t && p[i].flag!=1)
		    {
		    t1=temp[0];
		    if(j==1)
		   {
		     temp[0]=p[i];
		     temp[1]=t1;
		     }
		   else
		   {
		   if(j==0)
		   temp[j]=p[i];
		   else
		   {

		   t1=temp[j-1];
		   temp[j-1]=p[i];
		   temp[j]=t1;
		   }
		   }


		    p[i].flag=1;
		    printf("\n in Q %d ->%d",p[i].pn,t);
		    j++;
		   //  flag=0;
		    }

	       }

			   if(temp[0].st==-1)
			   {
			      temp[0].st=t;

			    }
				if(temp[0].et!=1)
			       {

				if((temp[0].pt-ts)>=0)
				{
				  t+=ts;
				  temp[0].pt-=ts;
				  if(temp[0].pt==0)
				  {
				  temp[0].et=1;
				  temp[0].ft=t;
				   printf("\n Here fin %d",temp[0].pn);
				   finish=1;
				  }
				}
				  else
				  {

				   t+=temp[0].pt;
				   temp[0].pt=0;
				   temp[0].et=1;
				    temp[0].ft=t;
				    printf("\n Here fin %d",temp[0].pn);
				    finish=1;
				  }

			       }
				t1=temp[0];
			       for(k=1;k<j;k++)
				  temp[k-1]=temp[k];
				  if(finish==1)
				  {
				      for(z=0;z<n;z++)
				       {
					 if(t1.pn==p[z].pn)
					{
					  p[z].st=t1.st;
					     p[z].ft=t1.ft;
					     p[z].et=1;
					 }

					}
				     j--;
				  }
				  else
				  {
				  temp[k-1]=t1;
				  }



		     for(z=0;z<n;z++)
		     {
		       if(p[z].et==-1)
			flagr=0;
		      }
		   }
		/*   if(j==n)
		   {
		     for(i=0;i<n;i++)
		     {
		      for(j=0;j<n;j++)
		      {
			if(temp[i].pn==p[j].pn)
			{
			  p[j].st=temp[i].st;
			   p[j].ft=temp[i].ft;
			 }
			}
		       }
		     }  */
	  }
