#include<iostream>
#include<list>
using namespace std;
int main()
{
    int k,n,s=0;
    list<int>list;
    cin>>k;
    cin>>n;
    while(n>=0)
    {
      list.push_back(n);
      s++;
      cin>>n;
       
    }
    auto its = list.begin();
    auto itt = list.begin();
    for(int i=0;i<s-k;i++)
    its++;
    list.erase(itt,its);
    auto it = list.begin();
    if(list.size()<k)
    cout<<"NULL";
    else
    cout<<*it;
    system("pause");
    return 0;
}