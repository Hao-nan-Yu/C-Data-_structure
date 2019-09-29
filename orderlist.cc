#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct List
{
  int address;
  int value;
  int next;
};
int main()
{
   int n,firstnode;
   cin>>firstnode;
   cin>>n;  
   List *p=new List[n];
   List *q=new List[n]; 
   for(int i=0;i<n;i++)
   {
     cin>>p[i].address;
     cin>>p[i].value;
     cin>>p[i].next;
     if(p[i].address==firstnode)
            q[0]=p[i];
   }
   for(int j=1;j<n;j++)
       for(int i=0;i<n;i++)
           if(q[j-1].next==p[i].address)
             q[j]=p[i];
   delete []p;
int i,j;
  if(n%2==1)
  {
   for(i=0,j=n-1;i<j;i++,j--)
      {
      cout<<setw(5)<<setfill('0')<<q[j].address<<" "<<q[j].value<<" ";
      cout<<setw(5)<<setfill('0')<<q[i].address<<endl;
      cout<<setw(5)<<setfill('0')<<q[i].address<<" "<<q[i].value<<" ";
      cout<<setw(5)<<setfill('0')<<q[j-1].address<<endl;
      
      }
    cout<<setw(5)<<setfill('0')<<q[j].address<<" "<<q[j].value<<" ";
    cout<<"-1"<<endl;
  }
 else
   {
   for(i=0,j=n-1;i<j-2;i++,j--)
      {
      cout<<setw(5)<<setfill('0')<<q[j].address<<" "<<q[j].value<<" ";
      cout<<setw(5)<<setfill('0')<<q[i].address<<endl;
      cout<<setw(5)<<setfill('0')<<q[i].address<<" "<<q[i].value<<" ";
      cout<<setw(5)<<setfill('0')<<q[j-1].address<<endl;
      
      }
      cout<<setw(5)<<setfill('0')<<q[j].address<<" "<<q[j].value<<" ";
      cout<<setw(5)<<setfill('0')<<q[i].address<<endl;
      cout<<setw(5)<<setfill('0')<<q[i].address<<" "<<q[i].value<<" ";
      cout<<"-1"<<endl;
   
  }
system("pause");
return 0;
}