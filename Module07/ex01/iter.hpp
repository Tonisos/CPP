#pragma once
#include <iostream>

template <typename T, typename Fonction>
void iter(T *array, size_t length, Fonction fonction)
{
	for (size_t i = 0; i < length; i++)
	{
		fonction(array[i]);
	}

}