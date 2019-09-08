#include <iostream>
#include <map>
#include <functional>
using namespace std;
typedef map<int, int, greater<int>> Multinomial;
void Input(Multinomial& m);
void Output(Multinomial& m);
Multinomial Add(Multinomial& m1, Multinomial& m2);
Multinomial Multi(Multinomial& m1, Multinomial& m2);
Multinomial Clear(Multinomial& m);
int main()
{
	Multinomial m1, m2, m3, m4;
	Input(m1);
	Input(m2);
	m4 = Multi(m1, m2);
	m3 = Add(m1, m2);
	m3 = Clear(m3);
	m4 = Clear(m4);
	if (m4.empty())
		cout << "0 0"<<endl;
	else
		Output(m4);
	if (m3.empty())
		cout << "0 0";
	else
		Output(m3);
	system("pause");
	return 0;
}
void Input(Multinomial& m)
{
	int x = 0;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		int index, coefficient;
		cin >> coefficient;
		cin >> index;
		m[index] += coefficient;
	}
}
void Output(Multinomial& m)
{
	Multinomial::iterator multi;
	for (multi=m.begin();(multi)!=--m.end();multi++)
	{
		cout << multi->second << " " << multi->first;
		cout << " ";
	}
	cout << multi->second << " " << multi->first;
	cout << endl;
}
Multinomial Add(Multinomial& m1, Multinomial& m2)
{
	for (auto multi : m2)
		m1[multi.first] += multi.second;
	return m1;
}
Multinomial Multi(Multinomial& m1, Multinomial& m2)
{
	Multinomial m0;
	for (auto multi1 : m1)
	{
		for (auto multi2 : m2)
			m0[multi1.first + multi2.first] += (multi1.second) * (multi2.second);
	}
	return m0;
}
Multinomial Clear(Multinomial& m)
{
	Multinomial::iterator iter = m.begin();
	while (iter != m.end())
	{
		if (iter->second == 0)
			m.erase(iter++);
		else
			++iter;
	}
	return m;
}