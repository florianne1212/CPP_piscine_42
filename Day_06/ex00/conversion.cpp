/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:02:48 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/10 19:59:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

conversion::conversion()
{
}

conversion::conversion(std::string to_convert)
{
	_to_convert = to_convert.c_str();
	_convert_str = to_convert;
}

conversion::conversion(conversion const & copy)
{
	*this = copy;
    return;
}

conversion & conversion::operator=(conversion const & ope)
{
    if (this != &ope)
    {
        this->_to_convert = ope._to_convert;
		this->_convert = ope._convert;
    }
    return (*this);
}

conversion::~conversion()
{
}

int conversion::try_to_convert()
{

	std::istringstream ss(_convert_str);
	double convert_d;
	ss >> convert_d;
	if(strlen(_to_convert) == 1)
	{
		if(isdigit(_to_convert[0]))
			_convert = convert_d;
		else
			_convert = static_cast<double>(_to_convert[0]);
	}
	else
	{ 
		_convert = atof(_to_convert);
		if(_to_convert[0] >= 58 && _to_convert[0] <= 126 && _to_convert[1] >= 58 && _to_convert[1]<= 126)
		{
			if (std::isnan(_convert) == false && std::isinf(_convert) == false)
				return(0);
		}			
	}
	return(1);
}

void conversion::to_char()
{
	std::cout << "char: ";
	double charactere = 0;
	std::istringstream ss(_convert_str);
	double convert_d;
	ss >> convert_d;
	if(strlen(_to_convert) == 1)
	{
		if(isdigit(_to_convert[0]))
		{
			std::cout << "Non displayable" << std::endl;
			return;
		}
		charactere = static_cast<double>(_to_convert[0]);	
	}
	else 
		charactere = convert_d;
	if (charactere >= 33 && charactere <=  126)
		std::cout << "'" << static_cast<char>(charactere) << "'" << std::endl;
	else if(std::isnan(charactere) || std::isinf(charactere))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

}

void conversion::to_int()
{
	std::cout << "int: ";
	if (std::isnan(_convert) || std::isinf(_convert) || _convert > 2147483647 || _convert < -2147483648)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<int>(_convert) << std::endl;
}

void conversion::to_float()
{
	std::cout << "float: ";
	if(floor(_convert) == _convert)
		std::cout << static_cast<float>(_convert) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(_convert) << "f" << std::endl;
		

}

void conversion::to_double()
{
	std::cout << "double: ";
	if(floor(_convert) == _convert)
		std::cout << (_convert) << ".0" << std::endl;
	else
		std::cout << (_convert) << std::endl;
}
