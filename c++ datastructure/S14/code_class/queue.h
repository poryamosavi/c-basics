#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"  
//////////////////////////////////////////////
template< class QT >

class Queue: private List< QT > 
{
	public:
	   void enqueue( const QT &data ) 
	   { 
	      insertAtBack( data );    
	   } 
	   //////////////
	   bool dequeue( QT &data ) 
	   { 
	      return removeFromFront( data );    
	   } 
	   //////////////
	   bool isQueueEmpty() const 
	   {
	     return isEmpty(); 
	   } 
	   //////////////
	   void printqueue() const 
	   { 
	      print(); 
	   } 
}; 

#endif

