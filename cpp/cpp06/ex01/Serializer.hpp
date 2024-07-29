
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "data.hpp"

class Serializer
{
private:
	Serializer();
	Serializer(Serializer const &copy);
		
public:
	~Serializer();
	Serializer &operator=(Serializer const &copy);

	static uintptr_t serializer(Data *ptr);
	static Data *deserialize(uintptr_t raw);

};

#endif