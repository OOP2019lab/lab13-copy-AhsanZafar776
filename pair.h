#pragma once
#include<iostream>
using namespace std;

template <class t>
class Pair
{
	t value[2];
public:
	Pair(t x, t y)
	{
		value[0]=x;
		value[1]=y;
	}
	t getmax()
	{
		if(value[0]>value[1])
			return value[0];
		else if(value[1]>value[0])
			return value[1];
	}
	t getmin();
	friend ostream& operator<<(ostream & out, Pair & vp)
	{
		out<<vp.value[0];
		out<<vp.value[1];
		return out;
	}

};

template <typename t1>
t1 Pair< t1 >::getmin()
{
	if(value[0]<value[1])
		return value[0];
	else if(value[1]<value[0])
		return value[1];
}
