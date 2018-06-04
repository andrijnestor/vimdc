#include "Newclass.hpp"

Newclass::Newclass(void)
{

}

Newclass::~Newclass(void)
{

}

Newclass::Newclass(Newclass const & src)
{
	*this = src;
}

Newclass				&Newclass::operator=(Newclass const & src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}
