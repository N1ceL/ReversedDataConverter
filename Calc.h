#pragma once

#include "Includes.h"

namespace Calc10_ui
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	unsigned __int64 expr();

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

	unsigned __int64 number()
	{
		unsigned __int64 res = 0;
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
	unsigned __int64 skobki()
	{
		char c = Get();
		if (c == '(')
		{
			unsigned __int64 x = expr();
			Get();
			return x;
		}
		else if (c == '|')
		{
			unsigned __int64 x = expr();
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	unsigned __int64 factor()
	{
		unsigned __int64 x = skobki();
		for (;;)
		{
			char c = Get();
			unsigned __int64 i = 0;
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
			case '^':
				x = pow(x, skobki());
				break;
			default:
				Put();
				return x;
			}
		}
	}
	unsigned __int64 expr()
	{
		unsigned __int64 x = factor();
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '+':
				x += factor();
				break;
			case '-':
				x -= factor();
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
	unsigned __int64 Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}

namespace Calc10_si
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	signed __int64 expr();

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

	signed __int64 number()
	{
		signed __int64 res = 0;
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
	signed __int64 skobki()
	{
		char c = Get();
		if (c == '(')
		{
			signed __int64 x = expr();
			Get();
			return x;
		}
		else if (c == '|')
		{
			signed __int64 x = abs(expr());
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	signed __int64 factor()
	{
		signed __int64 x = skobki();
		for (;;)
		{
			char c = Get();
			signed __int64 i = 0;
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
			case '^':
				x = pow(x, skobki());
				break;
			default:
				Put();
				return x;
			}
		}
	}
	signed __int64 expr()
	{
		signed __int64 x = factor();
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '+':
				x += factor();
				break;
			case '-':
				x -= factor();
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
	signed __int64 Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}

namespace Calc10_sf
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	long double expr();

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

	long double number()
	{
		long double res = 0;
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
	long double skobki()
	{
		char c = Get();
		if (c == '(')
		{
			long double x = expr();
			Get();
			return x;
		}
		else if (c == '|')
		{
			long double x = abs(expr());
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	long double factor()
	{
		long double x = skobki();
		for (;;)
		{
			char c = Get();
			long double i = 0;
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
			case '^':
				x = pow(x, skobki());
				break;
			default:
				Put();
				return x;
			}
		}
	}
	long double expr()
	{
		long double x = factor();
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '+':
				x += factor();
				break;
			case '-':
				x -= factor();
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
	long double Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}

namespace Calc16_ui
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	unsigned __int64 expr();

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

	unsigned __int64 number()
	{
		unsigned __int64 res = 0;
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
	unsigned __int64 skobki()
	{
		char c = Get();
		if (c == '(')
		{
			unsigned __int64 x = expr();
			Get();
			return x;
		}
		else if (c == '|')
		{
			unsigned __int64 x = expr();
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	unsigned __int64 factor()
	{
		unsigned __int64 x = skobki();
		for (;;)
		{
			char c = Get();
			unsigned __int64 i = 0;
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
			case '^':
				x = pow(x, skobki());
				break;
			default:
				Put();
				return x;
			}
		}
	}
	unsigned __int64 expr()
	{
		unsigned __int64 x = factor();
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '+':
				x += factor();
				break;
			case '-':
				x -= factor();
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
	unsigned __int64 Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}

namespace Calc16_si
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	signed __int64 expr();

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

	signed __int64 number()
	{
		signed __int64 res = 0;
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
	signed __int64 skobki()
	{
		char c = Get();
		if (c == '(')
		{
			signed __int64 x = expr();
			Get();
			return x;
		}
		else if (c == '|')
		{
			signed __int64 x = abs(expr());
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	signed __int64 factor()
	{
		signed __int64 x = skobki();
		for (;;)
		{
			char c = Get();
			signed __int64 i = 0;
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
			case '^':
				x = pow(x, skobki());
				break;
			default:
				Put();
				return x;
			}
		}
	}
	signed __int64 expr()
	{
		signed __int64 x = factor();
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '+':
				x += factor();
				break;
			case '-':
				x -= factor();
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
	signed __int64 Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}

namespace Calc16_sf
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	long double expr();

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

	long double number()
	{
		long double res = 0;
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
	long double skobki()
	{
		char c = Get();
		if (c == '(')
		{
			long double x = expr();
			Get();
			return x;
		}
		else if (c == '|')
		{
			long double x = abs(expr());
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	long double factor()
	{
		long double x = skobki();
		for (;;)
		{
			char c = Get();
			long double i = 0;
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
			case '^':
				x = pow(x, skobki());
				break;
			default:
				Put();
				return x;
			}
		}
	}
	long double expr()
	{
		long double x = factor();
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '+':
				x += factor();
				break;
			case '-':
				x -= factor();
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
	long double Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}

namespace Calc_bits10
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	unsigned __int64 expr();

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

	unsigned __int64 number()
	{
		unsigned __int64 res = 0;
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
	unsigned __int64 skobki()
	{
		char c = Get();
		if (c == '(')
		{
			unsigned __int64 x = expr();
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	unsigned __int64 factor()
	{
		unsigned __int64 x = skobki();
		for (;;)
		{
			char c = Get();
			unsigned __int64 i = 0;
			switch (c)
			{
			default:
				Put();
				return x;
			}
		}
	}
	unsigned __int64 expr()
	{
		unsigned __int64 x = factor();
		unsigned __int64 iBuf;
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '<':
				x = (x << factor());
				break;
			case '|':
				x = (x | factor());
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

		while ((idx = Str.find("<<")) != -1)
			Str.erase(idx, 1);
		while ((idx = Str.find(">>")) != -1)
			Str.erase(idx, 1);

		return Str2;
	}
	unsigned __int64 Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}
namespace Calc_bits16
{
	std::string StrToCalc = "";
	char CharToBackup = 0;

	unsigned __int64 expr();

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

	unsigned __int64  number()
	{
		signed __int64 res = 0;
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
	unsigned __int64 skobki()
	{
		char c = Get();
		if (c == '(')
		{
			unsigned __int64 x = expr();
			Get();
			return x;
		}
		else
		{
			Put();
			return number();
		}
	}
	unsigned __int64 factor()
	{
		unsigned __int64 x = skobki();
		for (;;)
		{
			char c = Get();
			unsigned __int64 i = 0;
			switch (c)
			{
			default:
				Put();
				return x;
			}
		}
	}
	unsigned __int64 expr()
	{
		unsigned __int64 x = factor();
		unsigned __int64 iBuf;
		for (;;)
		{
			char c = Get();

			switch (c)
			{
			case '<':
				x = (x << factor());
				break;
			case '|':
				x = (x | factor());
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

		while ((idx = Str.find("<<")) != -1)
			Str.erase(idx, 1);
		while ((idx = Str.find(">>")) != -1)
			Str.erase(idx, 1);

		return Str2;
	}
	unsigned __int64 Do(std::string Str)
	{
		StrToCalc = ClearStr(Str);
		return expr();
	}
}
