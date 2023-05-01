#pragma once
#include <iostream>
#include "gtest/gtest.h"
template<typename T, typename Temp>
void _add(T& x, Temp y)
{
	x += y;
}
template<typename T, typename Temp>
void _sub(T& x, Temp y)
{
	x -= y;
}
template<typename T, typename Temp>
void _mul(T& x, Temp y)
{
	x *= y;
}
template<typename T, typename Temp>
void _div(T& x, Temp y)
{
	x /= y;
}
template<typename T>
void _sqrt(T& x, int n)
{
	float eps = 0.00001;
	float root = x / n;
	float rn = x;
	while (abs(root - rn) >= eps)
	{
		rn = x;
		for (int i = 1; i < n; i++)
		{
			rn /= root;
		}
		root = 0.5 * (rn + root);
	}
	x = root;
}
template<typename T>
void _pow(T& a, float b)
{
	T x = a;
	int re = b;
	int im = 100 / (float(abs(b - re)) * 100);
	if (b == 0)
	{
		a = 1;
	}
	else if (b > 0)
	{
		if (b != 1)
		{
			_sqrt(a, im);
			for (int i = 0; i < re; i++)
			{
				a *= x;
			}
		}
	}
	else if (b < 0)
	{
		if (b != -1)
		{
			_sqrt(a, im);
			for (int i = 0; i < abs(re); i++)
			{
				a *= x;
			}
			a = 1 / a;
		}
		else
		{
			a = 1 / a;
		}
	}
}
template<class T>
void _ln(T& x)
{
	T a = x;
	T powa = x;
	T sum = 0;
	int sig = 1;
	int n = 0;
	while (abs(a) > 0)
	{
		sum += a;
		sig = -sig;
		a = sig * (powa *= x) / ++n;
	}
	x = sum;
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
