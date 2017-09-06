#include <boost/interprocess/windows_shared_memory.hpp>
#include <boost/interprocess/mapped_region.hpp>
#include <boost/interprocess/managed_shared_memory.hpp>
#include <cstring>
#include <cstdlib>
#include <string>
#include<iostream>

int main(int argc, char *argv[])
{
   using namespace boost::interprocess;

   shared_memory_object::remove("Boost");

   //Write a double to region
   managed_shared_memory managed_shm (open_or_create, "Boost", 512);
  double *I = managed_shm.construct<double>("myDouble")(99.999);
   std::cout << *I << '\n';
   
   double  myDouble[] = {1.111,2.2222};


   int i=0;
   int i_old=0;
   while (true){
	   if(i_old==0) i=1;
	   else i=0;
       *I =myDouble[i];
	   std::cout<< myDouble[i]<< std::endl;
	    i_old=i;
   }

   return 0;
}
