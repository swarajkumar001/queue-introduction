#include <iostream>
using namespace std;

#include <queue> // we have to include this header file

int main() {
	queue<int> q;
	q.push(10);   // put the value into queue 
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);

	cout << q.front() << endl; //return the front value
	q.pop();  //delete the front value
	cout << q.front() << endl;
	cout << q.size() << endl; //return  the size 
	cout << q.empty() << endl; //check whether it is empty or not...

	while(!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	
	
	}