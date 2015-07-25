#ifndef __OUTPUTINFO__H__
#define __OUTPUTINFO__H__
#include <iostream>

template <class T>
void print_info(const T &vec)
{
	std::cout<<"    size:"<<vec.size()<<std::endl;
	std::cout<<"capacity:"<<vec.capacity()<<std::endl;
}

#endif