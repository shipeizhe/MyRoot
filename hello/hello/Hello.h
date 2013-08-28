#ifndef HELLO_H
#define HELLO_H

#include<iostream>
#include<string>

using namespace std;

class Hello {
public:
	Hello(): greeting("Hello!") {}
	Hello(const string & s): greeting(s) {}

	void print() const { cout << greeting << endl; }
	string get() const { return greeting; }

	void set(const string & s) { greeting = s; }
private:
	string greeting;
};


#endif