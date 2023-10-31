#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP


#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator; // Declare the iterator type

    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }
};

#endif