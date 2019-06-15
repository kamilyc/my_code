#include <iostream>
#include<string.h>
using namespace std;

template<typename T> 
struct compare
{
	T Max(T t1,T t2)
	{
		return (t1>t2)?t1:t2;
	}
};

  
typedef const char* CCP;

template<> 
struct compare<CCP>
{
	CCP Max(CCP s1,CCP s2)
	{
		return (strcmp(s1,s2)>0)?s1:s2;
	}
};

int main(){

	compare<int> cmpInt;
	int i=cmpInt.Max(10,5);

	compare<const char*> cmpChr;
    const char* p=cmpChr.Max("very","good");

	cout<<"i:"<<compare<int>().Max(10,5)<<endl;
    cout<<"i:"<<i<<endl;
    cout<<"p:"<<p<<endl;
	cout<<__cplusplus<<endl;
}