#include "stdafx.h"
#include<iostream>

#include <boost/interprocess/managed_shared_memory.hpp>

int main(int argc, char *argv[])
{


//------------------------------------------

	//-------SHARED MEMORY ---------------

   using namespace boost::interprocess;
   managed_shared_memory managed_shm (open_only, "Boost");

   std::pair<double*, std::size_t> p = managed_shm.find<double>("myDouble");

   while (true){

	if (p.first)
    std::cout << *p.first << '\n';

	 //    std::cout<< myChar << std::endl;



   }}

