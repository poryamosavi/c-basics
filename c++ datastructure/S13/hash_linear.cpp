// hash 
#include <stdlib.h> 
#include <conio.h>
#include <iostream>
using namespace std;
////
#define size 5 
////////////////////////////////////////////////////////////////  
enum s {EMPTY, DELETED, FULL};
////////////////////////////////////////////////////////////////  
struct student
{
      int   id;
      int   grade;
};
//////////////////////////////////////////////////////////////// 
struct Record
{
      struct student  info;
      enum   s        status;
}; 
//////////////////////////////////////////////////////////////// 
int hashfunc(int key)
{
      return (key % size);
}
//////////////////////////////////////////////////////////////// 
int search(int key, struct Record HT[])
{
      int i, t, pos;
      t = hashfunc(key); 
      pos = t;
      
      for(i = 1; i != size - 1; i++)
      {
            if(HT[pos].status == EMPTY) 
                return -1;
                
            if(HT[pos].info.id == key)
                  return pos;
                  
            pos = (t + i) % size; 
      }
      return -1;
}
//////////////////////////////////////////////////////////////// 
void insert(struct student Record, struct Record HT[])
{
      int i, pos, t,key;
      
	  key = Record.id;
      t = hashfunc(key); 
      pos = t; 
      
      for(i = 1; i != size - 1; i++)
      {
            if(HT[pos].status == EMPTY || HT[pos].status == DELETED)
            {
                  HT[pos].info   = Record;
                  HT[pos].status = FULL; 
                  return;
            }
            
            if(HT[pos].info.id == key)
            {
                  cout<<"\nDuplicate Record cannot be Inserted\n";
                  return;
            }
            pos = (t + i) % size; 
      }
      cout<<"\nHash Table Limit Exceeded\n";
}
//////////////////////////////////////////////////////////////// 
void dispaly(struct Record HT[])
{
      int i;
      cout<<"\n----------------------\n";
	  cout<<"Hash Table\n";
      
      for(i = 0; i < size; i++)
      {
            cout<<"["<< i<<"]"<<"\t";
            
            if(HT[i].status == FULL) 
                  cout<<HT[i].info.id<<"  "<< HT[i].info.grade<<endl;
            else 
				if(HT[i].status == DELETED)
                 	 cout<<"Deleted\n";
            	else
                  	cout<<"Empty\n";
      }
}
//////////////////////////////////////////////////////////////// 
void delete_(int key, struct Record HT[])
{
      int pos = search(key, HT);
      if(pos == -1)
            printf("\n Not Found\n");
      else
            HT[pos].status = DELETED;
}
/////////////////////////////////////////////
int main()
{
      struct Record HT[size];
      struct student x;
      
      for(int i = 0; i <= size - 1; i++)
            HT[i].status = EMPTY;
      
	  x.id=30;	  x.grade=17; 	  insert(x, HT);
      x.id=18;	  x.grade=19;	  insert(x, HT);
      x.id=24;	  x.grade=12;	  insert(x, HT);
      x.id=15;	  x.grade=18;	  insert(x, HT);
      x.id=11;	  x.grade=10;	  insert(x, HT);
              
      dispaly(HT);  
      
      delete_(15, HT);
      dispaly(HT);
      
      
      int pos = search(18, HT);
      if(pos != -1)
      		cout<<"\n Position:"<< pos << endl;
      else
            cout<<"\ Not Found\n";

getch();
}

