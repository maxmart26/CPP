
#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const std::string in) : in(in)
{
	std::cout << "constructeur std" << std::endl;
	this->fromall();
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : in(copy.getIn())
{
	std::cout << "constructeur par copy" << std::endl;
	this->type = copy.type;
	this->_char = copy._char;
	this->_double = copy._double;
	this->_float = copy._float;
	this->_int = copy._int;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	std::cout << "operator =" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		this->_char = copy._char;
		this->_double = copy._double;
		this->_float = copy._float;
		this->_int = copy._int;
	}
	return *this;
}

ScalarConverter::~ScalarConverter()
{
}

bool ScalarConverter::isDouble()const
{
	std::string str = this->getIn();

	int i = 0;
	int count = 0;

	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while(str[i] != '\0')
	{
		if(!std::isdigit(str[i]))
		{
			if (str[i] == '.')
			{
				count++;
				if (count > 1 || std::isdigit(str[i + 1]) == 0 || str[i + 1] == '\0')
					return (false);
			}
		else if ((str[i] == 'D' || str[i] =='d') && count == 1 && str[i + 1] == '\0')
			return (true);
		else
			return (false);
		}
		i++;
	}
	if (count == 1)
		return (true);
	return (false);
}

bool ScalarConverter::isChar()const
{
	std::string str = this->getIn();

	if(isalpha(str[0]) && str.length() == 1)
		return (true);
	return (false);
}

bool ScalarConverter::isInt()const
{
	std::string str = this->getIn();

	int i = 0;
	long tmp;

	if(str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i] != '\0')
	{
		if(!std::isdigit(str[i]) || i > 10)
			return (false);
		i++;
	}
	tmp = std::atol(str.c_str());
	if (tmp <= std::numeric_limits<int>::max() && tmp >= std::numeric_limits<int>::min())
		return (true);
	else
		return (false);
}
bool ScalarConverter::isFloat(void) const
{
	std::string str = this->getIn();

    if (str.find('.') == std::string::npos || str[str.length() - 1] != 'f'
    || str.find('.') == 0 || str.find('.') == str.length() - 2)
        return (false);
    int found = 0;
    int j = 0;
    if (str[j] == '-' || str[j] == '+')
        j++;
    for (int i = j; i < (int)str.length() - 1; i++)
    {
        if (str[i] == '.')
            found++;
        if ((!std::isdigit(str[i]) && str[i] != '.') || found > 1)
            return (false);
    }
    return (true);
}

void ScalarConverter::fromall()
{
	if (isChar() == true)
		go_to_char(this->getIn());
	else if (isInt() == true)
		go_to_int(this->getIn());
	else if (isFloat() == true)
		go_to_float(this->getIn());
	else if (isDouble() == true)
		go_to_double(this->getIn());
	else
		std::cout << "probleme avec l argument mis" << std::endl;
}


void ScalarConverter::go_to_char(std::string str)
{
	char c;

	c = str[0];
	if (str.length() == 1)
	{
		std::cout << "char : " << c << std::endl;
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(c) << std::endl;
		std::cout << "double : " << std::fixed << std::setprecision(1) <<static_cast<double>(c) << std::endl;
	}
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}
}

void ScalarConverter::go_to_int(std::string str)
{
	long i = std::atoll(str.c_str());
	std::cout << "char : ";
	if((i < 32 && i >= 0) || (i == 127))
		std::cout << "non printable" << std::endl;
	else if (i < 0 || i > 127)
		std::cout << "chiffre trop haut ou bas" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
	if (i <= std::numeric_limits<long>::max() && i >= std::numeric_limits<long>::min() && str.length() < 10)
		std::cout << "int : " << i << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	if (std::abs(i) <= std::numeric_limits<float>::max())
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	else
		std::cout << "float : impossible" << std::endl;
	if (std::abs(i) <= std::numeric_limits<double>::max())
		std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
	else
		std::cout << "double : impossible" << std::endl;
}

void ScalarConverter::go_to_double(std::string str)
{
	double i = std::atof(str.c_str());
	std::cout << "char : ";
	if((i < 32 && i >= 0) || (i == 127))
		std::cout << "non printable" << std::endl;
	else if (i < 0 || i > 127)
		std::cout << "chiffre trop haut ou bas" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
	if (i <= std::numeric_limits<long>::max() && i >= std::numeric_limits<long>::min() && str.length() < 10)
		std::cout << "int : " << static_cast<int>(i) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	if (std::abs(i) <= std::numeric_limits<float>::max())
	{
		if (static_cast<float>(i) == static_cast<int>(i))
			std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		else
			std::cout << "float : " << static_cast<float>(i) << "f" << std::endl;
	}
	else
		std::cout << "float : impossible" << std::endl;
	if (std::abs(i) <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(i) << std::endl;
	else
		std::cout << "double : impossible" << std::endl;
}

void ScalarConverter::go_to_float(std::string str)
{
	float i = std::strtof(str.c_str(), NULL);
	std::cout << "char : ";
	if((i < 32 && i >= 0) || (i == 127))
		std::cout << "non printable" << std::endl;
	else if (i < 0 || i > 127)
		std::cout << "chiffre trop haut ou bas" << std::endl;
	else
		std::cout << static_cast<char>(i) << std::endl;
	if (i <= std::numeric_limits<long>::max() && i >= std::numeric_limits<long>::min() && str.length() < 10)
		std::cout << "int : " << static_cast<int>(i) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	if (std::fabs(i) <= std::numeric_limits<float>::max())
	{
		if (static_cast<float>(i) == static_cast<int>(i))
			std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		else
			std::cout << "float : " << static_cast<float>(i) << "f" << std::endl;
	}
	else
		std::cout << "float : impossible" << std::endl;
	if (std::fabs(i) <= std::numeric_limits<double>::max())
		std::cout << "double : " << static_cast<double>(i) << std::endl;
	else
		std::cout << "double : impossible" << std::endl;
}

std::string ScalarConverter::getIn()const
{
	return this->in;
}

int ScalarConverter::getType()const
{
	return this->type;
}

char ScalarConverter::getChar()const
{
	return this->_char;
}

int ScalarConverter::getInt()const
{
	return this->_int;
}

float ScalarConverter::getFloat()const
{
	return this->_float;
}

double ScalarConverter::getDouble()const
{
	return this->_double;
}
const char *ScalarConverter::ErrorExeption::what() const throw()
{
	return ("error sur l entree");
}