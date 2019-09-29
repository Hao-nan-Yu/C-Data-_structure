#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct List
{
  int address;
  int value;
  int next;
  int absolute_value;
};
int main()
{
   int n,firstnode;
   cin>>firstnode;
   cin>>n;  
   List *p=new List[n];
   List *q=new List[n]; 
   int *m=new int[n];
   for(int i=0;i<n;i++)
   {
     cin>>p[i].address;
     cin>>p[i].value;
     cin>>p[i].next;
     p[i].absolute_value=abs(p[i].value);
     if(p[i].address==firstnode)
           {
            q[0]=p[i];
            m[0]=p[i].absolute_value;
           }
   }
   for(int j=1;j<n;j++)
         for(int i=0;i<n;i++)
      {
           if(q[j-1].next==p[i].address)
           {
              q[j]=p[i];
              m[j]=p[i].absolute_value;
           }
      }
      delete []p;
   List *r=new List[n];
   int h=0;
   for(int i=0;i<n-h;i++)
   {
      if(i<n-1-h)
      for(int j=0;j<i;j++)
      {
         if(q[i].absolute_value==m[j])
         {
            q[i-1].next=q[i+1].address;
            r[h]=q[i];
            h++;
            for(int k=i;k<n-h;k++)
            q[k]=q[k+1];
            --i;
            break;

         }
      }
      else
       for(int j=0;j<i;j++)
         {
            if(q[i].absolute_value==m[j])
            {
               q[i-1].next=-1;
               r[h]=q[i];
               h++;
               break;
            }
         }
      
   }
   
   for(int i=0;i<h-1;i++)
      r[i].next=r[i+1].address;
   r[h-1].next=-1;
   int i;
   for( i=0;i<n-h-1;i++)
      {
      cout<<setw(5)<<setfill('0')<<q[i].address<<" "<<q[i].value<<" ";
      cout<<setw(5)<<setfill('0')<<q[i].next<<endl;
      }
   {
   cout<<setw(5)<<setfill('0')<<q[i].address<<" "<<q[i].value<<" ";
   cout<<q[i].next<<endl;
   }
   
   i=0;
   for(;i<h-1;i++)
   {
      cout<<setw(5)<<setfill('0')<<r[i].address<<" "<<r[i].value<<" ";
      cout<<setw(5)<<setfill('0')<<r[i].next<<endl;
      }
   {
   cout<<setw(5)<<setfill('0')<<r[i].address<<" "<<r[i].value<<" ";
   cout<<r[i].next<<endl;
   }
      
   system("pause");
   return 0;
}