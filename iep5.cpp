#include <iostream>

using namespace std;



class Array { 
 private: 
   int *ptr; 
   int size; 
 public: 
   Array& operator = (const Array &rhs); 
   
   Array(const Array& rhs);

}; 
  

 Array& Array::operator = (const Array &rhs)
{ 

  if(this != &rhs) 
  { 
      int* temp = new int [rhs.size];
    
    delete [] ptr; 
  
    
    ptr = temp; 
  
    
    size = rhs.size; 
    for(int i = 0; i < size; i++) 
      ptr[i] = rhs.ptr[i];     
  }   
  
  return *this;  
} 

Array::Array (const Array &rhs)
{  
      int* temp = new int [rhs.size];
    
    ptr = temp; 
  
    
    size = rhs.size; 
    for(int i = 0; i < size; i++) 
      ptr[i] = rhs.ptr[i];       
} 
int main(){}