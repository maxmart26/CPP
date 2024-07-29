
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <cmath>
#include <limits>
#include <iomanip>
#include <fstream>

class ScalarConverter
{
private:
	const std::string in;
	int type;
	char _char;
	int _int;
	float _float;
	double _double;

	ScalarConverter();

	void fromall();

	std::string getIn()const;
	int getType()const;
	char getChar()const;
	int getInt()const;
	float getFloat()const;
	double getDouble()const;

	bool isChar()const;
	bool isInt()const;
	bool isFloat()const;
	bool isDouble()const;

	void go_to_char(std::string str);
	void go_to_int(std::string str);
	void go_to_float(std::string str);
	void go_to_double(std::string str);

public:
	ScalarConverter(const std::string in);
	ScalarConverter(const ScalarConverter &copy);
	~ScalarConverter();

	ScalarConverter &operator=(const ScalarConverter &copy);

	class ErrorExeption : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};


#endif