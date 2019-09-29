#include<iostream>
#include<list>
using namespace std;
typedef list<int> List; 
List Input(List &l);
int main()
{
    List l1,l2,l3;
    l1=Input(l1);
    l2=Input(l2);
    while(!(l1.empty()||l2.empty()))
    {
         List::iterator i,j;
         i=l1.begin();
         j=l2.begin();
         if(*j==*i)
         l3.push_back(*i);
         else if(*i<*j)
         i = l1.erase(i);
         else
         j=l2.erase(j);
       
         
    }
    if(l3.empty())
    cout<<"NULL";
    else
    {
        List::iterator i;
	for (i=l3.begin();i!=--l3.end();i++)
	{
		cout << *i <<" ";
	}
	cout << *i; 
    }
    
    system("pause");
    return 0;
}
List Input(List &l)
{
    int n;
    cin>>n;
    while(n>0)
    {
      l.push_back(n);
      cin>>n;
    }
    return l;
}