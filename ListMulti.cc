#include<iostream>
#include<list>
using namespace std;
typedef list<int> List; 
List Input(List &l,int m);
int main()
{
    int num,last,result=1,i=0;
    cin>>num;
    cin>>last;
    List l1;
    l1=Input(l1,num);
    l1.reverse();
    if(last==0)
    cout<<0;
    else
    {
    for(auto l:l1)
    {
       result*=l;
       i++;
       if(i>=last)
       break;
    }
    cout<<result;
    }
    system("pause");
    return 0;
}
List Input(List &l,int m)
{
    int n;
   
   for(int i=0;i<m;i++)
    {
      cin>>n;
      l.push_back(n);
    }
    return l;
}