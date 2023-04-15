#pragma once
#include <iostream>
#include "gtest/gtest.h"
template<typename T, typename Temp>
void _Add(T& x, Temp y)
{

}
template<typename T>
void _Sqrt(T& x, int n)
{
	T  t, m = x / 2;
	do {
		t = m;
		m = (t + (x / t)) / n;
	} while ((t - m) != 0);
	x = m;
}
template<typename T>
void _Pow(T& a, int b)
{
	T x = a;
	if (b > 1)
	{
		for (int i = 1; i < b; i++)
		{
			a = a * x;
		}
	}
	else if (b == 0)
	{
		a = 1;
	}
}
//template<class T>
//void myExp(T& x)
//{
//
//}
//template<class T>
//void myLn(T& x)
//{
//}
//template<class T>
//void myLog(T& x, T b)
//{
//
//}
//template<class T>
//void mySin(T& x)
//{
//
//}
//template<class T>
//void myCos(T& x)
//{
//
//}
//template<class T>
//void myTan(T& x)
//{
//
//}
//template<class T>
//void myDegrees(T& x)
//{
//
//}
//template<class T>
//void myRadians(T& x)
//{
//}
