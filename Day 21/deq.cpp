
#include <deque>
#include <iostream>

using namespace std;

void showdq(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << endl;
}

int main()
{
	deque<int> dq;
	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(15);
	cout << "The deque is : ";
	showdq(dqz);

	cout << "\ndq.size() : " << dq.size();
	cout << "\ndq.max_size() : " << dq.max_size();

	cout << "\ndq.at(2) : " << dq.at(2);
	cout << "\ndq.front() : " << dq.front();
	cout << "\ndq.back() : " << dq.back();

	cout << "\ndq.pop_front() : ";
	dq.pop_front();
	showdq(dq);

	cout << "\ndq.pop_back() : ";
	dq.pop_back();
	showdq(dq);

	return 0;
}
