#pragma once
#include <string>
using namespace std;

class SimpleList
{
public:
	virtual int size() = 0;
	virtual bool isEmpty() = 0;
	virtual bool add(string value) = 0;
	virtual bool insert(string value, int atIndex) = 0;
	virtual string get(int atIndex) = 0;
	virtual string remove(int atIndex) = 0;
	virtual void clear() = 0;
	virtual string set(int atIndex, string value) = 0;
	virtual bool contains(string value) = 0;
	virtual bool remove(string value) = 0;
	virtual int indexOf(string value) = 0;
	virtual int lastIndexOf(string value) = 0;

};
