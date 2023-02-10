#pragma once

#include "Includes.h"

template<class T, bool is_hex = false, bool is_bits = false>
struct calc_t
{
public:
	T Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr2();
	}

public:
	char Get()
	{
		CharToBackup = StrToCalc[0];
		StrToCalc.erase(0, 1);
		return CharToBackup;
	}
	void Put()
	{
		StrToCalc = CharToBackup + StrToCalc;
	}

	T number10()
	{
		T res = 0;
		for (;;)
		{
			char c = Get();
			static int Dots = 0;
			if (c >= '0' && c <= '9')
			{
				if (Dots)
				{
					res = res + (c - '0') / pow(10, Dots);
					Dots++;
				}
				else
				{
					res = (res * 10 + c - '0');
				}
			}
			else if (c == '.' || c == ',')
			{
				Dots = 1;
			}
			else
			{
				Dots = 0;
				Put();
				return res;
			}
		}
	}

	T number16()
	{
		T res = 0;
		for (;;)
		{
			char c = Get();

			if (c >= '0' && c <= '9')
				res = res * 16 + c - '0';
			else if (c >= 'a' && c <= 'f')
				res = res * 16 + c - 'a' + 10;
			else if (c >= 'A' && c <= 'F')
				res = res * 16 + c - 'A' + 10;
			else
			{
				Put();
				return res;
			}
		}
	}

	T skobki()
	{
		char c = Get();
		if (c == '(')
		{
			T x = expr();
			Get();
			return x;
		}
		//else if (c == '|')
		//{
		//	T x = abs(expr());
		//	Get();
		//	return x;
		//}
		else
		{
			Put();
			return is_hex ? number16() : number10();
		}
	}
	T factor()
	{
		T x = skobki();
		for (;;)
		{
			char c = Get();
			T i = 0;
			if (is_bits)
			{
				switch (c)
				{
				default:
					Put();
					return x;
				}
			}
			else
			{
				switch (c)
				{
				case '*':
					x *= skobki();
					break;
				case '/':
					i = skobki();
					if (i)
						x /= i;
					break;
					//case '^':
					//	x = pow(x, skobki());
					//	break;
				default:
					Put();
					return x;
				}
			}
		}
	}
	T expr()
	{
		T x = factor();
		for (;;)
		{
			char c = Get();

			if (is_bits)
			{
				T iBuf;
				switch (c)
				{
				case '<':
					x = ((unsigned __int64)x << (unsigned __int64)factor());
					break;
				case '|':
					x = ((unsigned __int64)x | (unsigned __int64)factor());
					break;
				case '~':
					iBuf = factor();
					if (iBuf > 0xffffffff)
						x = ~(unsigned __int64)iBuf;
					else
						x = ~(unsigned __int32)iBuf;
					break;
				default:
					Put();
					return x;
				}
			}
			else
			{
				switch (c)
				{
				case '+':
					x += factor();
					break;
				case '-':
					x -= factor();
					break;
				//case '^':
				//	x = (unsigned __int64)x ^ (unsigned __int64)factor();
				//	break;
				default:
					Put();
					return x;
				}
			}
		}
	}
	T expr2()
	{
		T x = expr();
		for (;;)
		{
			char c = Get();
			switch (c)
			{
			case '^':
				x = (unsigned __int64)x ^ (unsigned __int64)expr();
				break;
			default:
				Put();
				return x;
			}
		}
	}

	std::string ClearStr(std::string Str)
	{
		int idx;

		std::string Str2;
		for (int i = 0; i < Str.size(); i++)
		{
			if (Str[i] == '<' || Str[i] == '~' || Str[i] == '|' || Str[i] == '&' || Str[i] == '\\' ||
				Str[i] == '(' || Str[i] == ')' || Str[i] == '.' || Str[i] == ',' ||
				Str[i] == '+' || Str[i] == '-' || Str[i] == '*' || Str[i] == '/' || Str[i] == '^' ||
				(Str[i] >= 'a' && Str[i] <= 'f') || (Str[i] >= 'A' && Str[i] <= 'F') || (Str[i] >= '0' && Str[i] <= '9')
				)
				Str2 += Str[i];
		}

		//while ((idx = Str.find(" ")) != -1)
		//	Str.erase(idx, 1);
		//while ((idx = Str.find("h")) != -1)
		//	Str.erase(idx, 1);
		//while ((idx = Str.find("0x")) != -1)
		//	Str.erase(idx, 2);

		return Str2;
	}

private:
	std::string StrToCalc = "";
	char CharToBackup = 0;
};

typedef calc_t<signed long long, false, false> calc_si_dec_t;
typedef calc_t<signed long long, true, false> calc_si_hex_t;

typedef calc_t<unsigned long long, false, false> calc_ui_dec_t;
typedef calc_t<unsigned long long, true, false> calc_ui_hex_t;

typedef calc_t<long double, false, false> calc_sf_dec_t;
typedef calc_t<long double, true, false> calc_sf_hex_t;

typedef calc_t<unsigned long long, false, true> calc_ui_dec_bits_t;
typedef calc_t<unsigned long long, true, true> calc_ui_hex_bits_t;