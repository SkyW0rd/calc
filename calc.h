#pragma once
#include <iostream>
#include "gtest/gtest.h"
template<typename T, typename Temp>
void _add(T& x, Temp y)
{

}
template<typename T, typename Temp>
void _sub(T& x, Temp y)
{

}
template<typename T, typename Temp>
void _mul(T& x, Temp y)
{

}
template<typename T, typename Temp>
void _div(T& x, Temp y)
{

}
template<typename T>
void _pow(T& a, int b)
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
template<typename T>
void _sqrt(T& x, int n)
{
	T  t, m = x / 2;
	do {
		t = m;
		m = (t + (x / t)) / n;
	} while ((t - m) != 0);
	x = m;
}
template<class T>
void _ln(T& x)
{
}
template<class T>
void _lg(T& x, T b)
{

}
template<class T>
void _sin(T& x)
{

}
template<class T>
void _cos(T& x)
{

}
template<class T>
void _asin(T& x)
{

}
template<class T>
void _acos(T& x)
{

}
template<class T>
void _tg(T& x)
{

}
template<class T>
void _atg(T& x)
{

}
template<class T>
void _ctg(T& x)
{

}
template<class T>
void myDegrees(T& x)
{

}
template<class T>
void myRadians(T& x)
{
}
