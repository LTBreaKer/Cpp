/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:21:13 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/12 22:17:52 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

template<typename T>
class Array	{
	private:
	
		T				*_array;
		unsigned int	_size;
		
	public:
	
		Array()	{
			_array = NULL;
			_size = 0;
		}
		
		Array(unsigned int n)	{
			_array = new T[n];
			_size = n;
		}
		
		Array(const Array& orig)	{
			this->_size = orig._size;
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++)	{
				this->_array[i] = orig[i]; 
			}
		}
		
		template<typename Type>
		Array(const Array<Type> &orig)	{
			this->_size = orig.size();
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++)	{
				this->_array[i] = orig[i]; 
			}
		}
		
		Array& operator=(const Array orig){
			if (this = &orig)
				return *this;
			this->_size = orig._size;
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++)	{
				this->_array[i] = orig._array[i]; 
			}
			return *this;
		}
		
		T&	operator[](unsigned int i)	{
			if (i >= _size)
				throw OutOfBounds();
			return _array[i];
		}
		
		const T& operator[](unsigned int i) const	{
			if (i >= _size)
				throw OutOfBounds();
			return _array[i];
		}
		
		~Array(){
			if (_array)
				delete [] _array;
		}
		
		unsigned int size() const	{
			return (_size);
		}
		
		class OutOfBounds : public std::exception	{
			virtual const char* what() const throw()	{
				return ("Out of bounds");
			}
		};
};