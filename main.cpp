
#include<iostream>
#include"pair.h"
using namespace std;

template<typename t2,typename t3>
t2 getmax(t2 x,t3 y)
{
	if(x>y)
		return x;
	else if( y>x)
		return y;
}
template<typename t6,typename t5>
t6 getmin(t6 x,t5 y)
{
	if(x<y)
		return x;
	else if( y<x)
		return y;
}
int main ()
{
	/*char i='Z';
	int  j=6, k;
	long l=10, m=5, n;
	k=getmax(i,m);
	n=getmin(j,l);
	cout << k << endl;
	cout << n << endl;
	return 0;*/

	Pair<double> myobject(1.012, 1.01234);
	cout<<myobject.getmax()<<endl;
	cout<<myobject.getmin()<<endl;
	cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
	return 0;





}
