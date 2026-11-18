#ifndef TREENODE_H
#define TREENODE_H

template< class NT > class Tree;  
template< class NT >

class TreeNode 
{
   friend class Tree< NT >;
   
   private:
       		NT data;
   			TreeNode< NT > *left;  
   			TreeNode< NT > *right;  
   public:
   			TreeNode( const NT &d ) : left( 0 ), data( d ), right( 0 ) 
   			{ 
      			// empty body 
			} 

   			NT getData() const 
   			{ 
      			return data; 
   			} 
}; 

#endif

