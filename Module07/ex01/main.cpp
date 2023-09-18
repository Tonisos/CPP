#include "iter.hpp"

template <typename T>
void print(T element) {
  std::cout << element << " ";
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
  size_t length = sizeof(array) / sizeof(array[0]);

  iter(array, length, print<int>);

  std::cout << std::endl;

  return 0;
}