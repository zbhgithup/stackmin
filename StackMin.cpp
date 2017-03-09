#define _CRT_SECURE_NO_WARNINGS

#include <stack>
#include <iostream>
using namespace std;


template<typename T>
class StackMin
{
public:
	StackMin()
	{}
	~StackMin()
	{}
	void Push(T data)
	{
		s1.push(data);	
        if(s2.empty()||s2.top()>=data)
			s2.push(data);
	}0
	void Pop()
	{
		if(s1.top() == s2.top())
		{
			s2.pop();
		}
		s1.pop();
	}
	void Min()
	{
		if(!s2.empty())
		{
			cout<<"×îÐ¡Öµ"<<s2.top()<<endl;
		}
	}

private:
	stack<T> s1,s2;
};


int main()
{
	StackMin<int> s;
	s.Push(2);
	s.Push(1);
	s.Push(3);
	s.Push(5);
	s.Push(4);
	s.Push(7);
	s.Push(8);
	s.Min();

	return 0;
}