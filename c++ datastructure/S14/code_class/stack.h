// Stack class_template
#ifndef STACK_H
#define STACK_H
#include "list.h"  
/////////////////////////////////////
template< class ST >

class Stack : private List< ST > 
{
	public:
		   void push( const ST &data ) 
		   { 
		      insertAtFront( data );    
		   } 
		
		   bool pop( ST &data ) 
		   { 
		      return removeFromFront( data );    
		   } 
		
		   bool isStackEmpty() const 
		   { 
		      return isEmpty();    
		   }
		 
		   void printStack() const 
		   { 
		      print();    
		   } 
}; 

#endif

