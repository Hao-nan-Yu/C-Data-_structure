#include<iostream>
#include<list>
using namespace std;
typedef list<int> List; 
List Input(List &l,int m);
int main()
{
    int a,b=0,c=0;
    cin>>a;
    List l1,l2;
    l1=Input(l1,a);
    l2=Input(l2,a);
    l1.merge(l2);
    l1.sort();
    List::iterator i;
	for(int j=0;j<a-1;j++)
    {
        
        i = l1.erase(i);
        i=l1.begin();
    }
    cout<<*i;
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