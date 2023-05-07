#pragma once
#include <iostream>
#include "gtest/gtest.h"
#include <string>
#include <map>
#include <stack>
#include <sstream>
const double pi = 3.141592653589;
template<typename T>
T _factorial(T x)
{
	T n = 1;
	for (T i = 1; i <= x; i++)
	{
		n *= i;
	}
	return n;
}
template<typename T>
T _fac2n(T x)
{
	T n = 1;
	for (T i = 2; i <= x; i += 2)
	{
		n *= i;
	}
	return n;
}
template<typename T>
T _fac2n_1(T x)
{
	T n = 1;
	for (T i = 1; i < x; i += 2)
	{
		n *= i;
	}
	return n;
}
template<typename T>
void _add(T& x, T y)
{
	x += y;
}
template<typename T>
void _sub(T& x, T y)
{
	x -= y;
}
template<typename T>
void _mul(T& x, T y)
{
	x *= y;
}
template<typename T>
void _div(T& x, T y)
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
T _pow(T a, double b)
{
	int exemple;
	if (float(1 / float(abs(b * 10 - int(b) * 10))) == 1)
	{
		exemple = float(1 / float(abs(b * 10 - int(b) * 10)));
	}
	else
	{
		exemple = float(1 / float(abs(b * 10 - int(b) * 10))) * 10;
	}
	int ex = b * 10;
	if (exemple % 10 != 0 && ex % 10 != 0)
	{
		union {
			double d;
			int x[2];
		} u = { a };
		u.x[1] = int(b * (u.x[1] - 1072632447) + 1072632447);
		u.x[0] = 0;
		return u.d;
	}
	else
	{
		T x = a;
		int re = b;
		int im;
		if (abs(float(b - re) * 100) == 0)
		{
			im = 0;
		}
		else
		{
			im = float(1 / float(abs(b * 10 - re * 10))) * 10;
		}
		if (b == 0)
		{
			a = 1;
		}
		else if (b > 0)
		{
			if (b != 1)
			{
				if (im != 0)
				{
					_sqrt(a, im);
				}
				for (int i = 1; i < re; i++)
				{
					a *= x;
				}
			}
		}
		else if (b < 0)
		{
			if (b != -1)
			{
				if (im != 0)
				{
					_sqrt(a, im);
				}
				for (int i = 1; i < abs(re); i++)
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
		return a;
	}
}
template<typename T>
void _log2(T& x)
{
	T n = 2;
	double eps = 0.1;
	T a = 0;
	if (x != 0)
	{
		while (abs(_pow(n, a) - x) > eps)
		{
			a += 1;
			n = 2;
		}
		x = a;
	}
}
template<typename T>
void _sin(T& x)
{
	double eps = 1e-12;
	int sign = (x < 0) ? -1 : 1;
	x = fmod(fabs(x), 2 * pi);
	if (x > pi)
	{
		x -= pi;
		sign *= -1;
	}
	if (x > pi / 2)
	{
		x = pi - x;
	}
	double t = x, s = x;
	for(int i = 3; fabs(t) > eps; i += 2)
	{
		t = -t * x * x / i / (i - 1);
		s += t;
	}
	x = s * sign;

}
template<typename T>
void _cos(T& x)
{
	double eps = 1e-12;
	int sign = 1;
	x = fmod(fabs(x), 2 * pi);
	if (x > pi)
	{
		x -= pi;
		sign *= -1;
	}
	if (x > pi / 2)
	{
		x = pi - x;
		sign *= -1;
	}
	double t = x, s = 1;
	for (int i = 2; fabs(t) > eps; i += 2)
	{
		//t = -t * x / i / (i - 1);
		t = -t * _pow(x, i - 1) / _factorial(i);
		s += t;
	}
	x = s * sign;

}
template<typename T>
void _asin(T& x)
{
	int sign = (x < 0) ? -1 : 1;
	if (x >= -1 && x <= 1)
	{
		double eps = 1e-12;
		double t = abs(x), s = abs(x);
		for (int i = 3; fabs(t) > eps; i += 2)
		{
			t = t * x * x / i / (i - 1);
			s += t;
		}
		x = s * sign;
	}
}
template<typename T>
void _acos(T& x)
{
	_asin(x);
	x = pi / 2 - x;
}
template<typename T>
void _tg(T& x)
{
	T b = x;
	T a = x;
	_sin(a);
	_cos(b);
	x = a / b;
}
template<typename T>
void _atg(T& x)
{
	int sign = (x < 0) ? -1 : 1;
	double eps = 1e-12;
	double t = abs(x), s = abs(x);
	for (int i = 3; fabs(t) > eps; i += 2)
	{
		t = -t * x * x / i;
		s += t;
	}
	x =(pi/2 - s) * sign;
}
template<typename T>
void _ctg(T& x)
{
	T b = x;
	T a = x;
	_sin(a);
	_cos(b);
	x = b / a;
}
