#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int T,i;
  cin>>T;
  int *p=new int[T];
  for(i=0;i<T;i++)
  {
    int a,j;
    cin>>a;
    p[i]=0;
    int *q=new int[a];
    for(j=0;j<a;j++)
      cin>>q[j];
    sort(q,q+a);
    for(j=a-1;j>2;j-=2)
    {
     if(q[0]+q[j]+q[0]+q[j-1]>q[0]+q[j]+q[1]+q[1])
          p[i]+=q[0]+q[j]+q[1]+q[1];
     else
          p[i]+=q[0]+q[j-1]+q[0]+q[j];

    }
    if(j==2)
            p[i]+=(q[0]+q[1]+q[2]);
    if(j==1)
            p[i]+=q[1];
    if(j==0)
            p[i]=q[0];
  }
  for(i=0;i<T;i++)
   cout<<p[i]<<endl;
  system("pause");
  return 0;
}

