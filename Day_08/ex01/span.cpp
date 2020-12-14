/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:54:36 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/11 15:37:06 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _n(0)
{
}

Span::Span(unsigned int N): _n(N)
{
	
}

Span::Span(Span const & copy)
{
	this->operator= (copy);
}
	
Span::~Span()
{
}

Span & Span::operator=(Span const & ope)
{
	if (this != &ope)
	{
		this->_n = ope._n;
		this->_vector = ope._vector;
	}
	return (*this);
}

void Span::addNumber(int x)
{
	
	if(_vector.size() < _n)
		_vector.push_back(x);
	else 
		throw Span::NoSpaceLeft();
}

void Span::addNumber(const std::vector<int> &num)
{
	if (num.empty())
		return;
	if ((_vector.size() + num.size()) > _n )
		throw NoSpaceLeft();
	_vector.insert(_vector.end(), num.begin(), num.end());
}

void Span::addNumber(int begin, int end)
{
	if (begin > end)
		throw ErrorArgument();
	if ((_vector.size() +(end - begin)) > _n )
		throw NoSpaceLeft();
	for (int i = begin; i < end; i++)
		this->_vector.push_back(i);
	
}

int Span::shortestSpan()
{
	if(_vector.size() <= 1)
		throw Span::TooFewElements();
	int mini = std::abs(_vector[0] - _vector[1]) ;
	int diff;
	std::sort(_vector.begin(), _vector.end());
	for (size_t i = 1; i < _vector.size(); i++)
	{
		diff = std::abs(_vector[i - 1] - _vector[i]);
		if (mini > diff)
			mini = diff;
	}
	return(mini);
	
}

int Span::longestSpan()
{
	if(_vector.size() <= 1)
		throw Span::TooFewElements();
	int min = *std::min_element(_vector.begin(), _vector.end());
	int max = *std::max_element(_vector.begin(), _vector.end());

	return(max-min);	
}


Span::NoSpaceLeft::NoSpaceLeft() throw () {}
Span::NoSpaceLeft::~NoSpaceLeft() throw () {}
Span::NoSpaceLeft::NoSpaceLeft(NoSpaceLeft const & copy) 
{
	*this = copy;
}

Span::NoSpaceLeft & Span::NoSpaceLeft::operator=(NoSpaceLeft const & ope) 
{
	(void) ope; return *this;
}

const char* Span::NoSpaceLeft::what() const throw() 
{ 
	return "Error : no space left !";
}


Span::TooFewElements::TooFewElements() throw () {}
Span::TooFewElements::~TooFewElements() throw () {}
Span::TooFewElements::TooFewElements(TooFewElements const & copy)
{
	*this = copy;
};

Span::TooFewElements & Span::TooFewElements::operator=(TooFewElements const & ope)
{
	(void) ope; return *this;
}

const char* Span::TooFewElements::what() const throw() 
{
	return "Error :too few elements !";
};


Span::ErrorArgument::ErrorArgument() throw () {}
Span::ErrorArgument::~ErrorArgument() throw () {}
Span::ErrorArgument::ErrorArgument(ErrorArgument const & copy) 
{
	*this = copy;
}

Span::ErrorArgument & Span::ErrorArgument::operator=(ErrorArgument const & ope) 
{
	(void) ope; 
	return *this;
}

const char* Span::ErrorArgument::what() const throw() 
{ 
	return "Error : check the argument again !";
};