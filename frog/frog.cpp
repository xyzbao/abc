// frog.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int fun(int i)
{
	if(i==1)
		return 1;
	else if(i==2)
		return 1;
	else return fun(i-1)+fun(i-2);
}

int fun1(int i)
{
	if(i==1)
		return 1;
	if(i==0)
		return 1;
	return i*fun1(i-1);
}

int main(int argc, char* argv[])
{
	int n=6;
	int s;
//	s=fun(n);
s=fun1(n);
	printf("%d",s);
	return 0;
}

