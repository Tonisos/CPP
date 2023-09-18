#pragma once
#include <iostream>
using std::cout;
using std::endl;

class MyException: public std::exception
{
    const char * what () const throw()
    {
        return ("wrong index");
    }
};

template <typename T>
class Array {

	private :
		size_t	len;
		T*		array;

	public :
		Array(): len(0),array(NULL){};
		Array(size_t n) : len(n), array(new T[n]){};
		~Array()
		{
			if (array)
				delete [](array);
		};

		Array(const Array& toCopy)
		{
			len = toCopy.len;
			array = new T[toCopy.len];
			for (size_t i = 0; i < len; i++)
				array[i] = toCopy.array[i];
		}

	
		Array &operator=(const Array &toCopy)
        {
            len = toCopy.len;
            array = new T[toCopy.len];
            for (size_t i = 0; i < len; i++)
            {
                array[i] = toCopy.array[i];
            }
            return (*this);
        }
		T &operator[](int index)
        {
            if (index < 0 || index >= (int)len)
            {
                throw (MyException());
            }
            return (array[index]);
        }


		unsigned int size() const
        {
            return (len);
        }
		}

;