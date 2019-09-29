#include<iostream>
#include<vector>
using namespace std;
#define MAX 1000000
class MyQueue {
private:
	int front, rear;
	vector<int> data;
public:
	MyQueue()
		:data (MAX)
	{ front = rear = 0; }
	~MyQueue() {}
	void push(int x);
	int pop();
	int size();
};
void MyQueue::push(int x)
{
	data[rear] = x;
	rear = (rear + 1) % MAX;
	
}
int MyQueue::pop()
{
	int x = 0;
	if (front == rear)
		cout << "Invalid"<<endl;
	else
	{
		x = data[front];
		front = (front + 1) % MAX;
		cout<<x<<endl;
	}
	return 0;
}
int MyQueue::size()
{
	return(rear - front);
}

int main()
{
	MyQueue q;
	int i, n, flag;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> flag;
		if (flag == 1)
		{
			int value;
			cin >> value;
			q.push(value);
		}
		else if (flag == 2)
			q.pop();
		else
			cout << q.size()<<endl;
	}
	system("pause");
		return 0;
}