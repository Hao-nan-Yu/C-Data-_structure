#include<iostream>
#include<list>
using namespace std;
typedef list<int> List; 
List Input(List &l);
int main()
{
    List l1,l2;
    l1=Input(l1);
    l2=Input(l2);
    l1.merge(l2);
    if(l1.empty())
    cout<<"NULL";
    else
    {
        List::iterator i;
	for (i=l1.begin();(i)!=--l1.end();i++)
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