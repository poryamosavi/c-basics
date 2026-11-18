//hash (chaining)
#include <iostream> 
#include <stdlib.h>
#include <conio.h>
using namespace std;
#define size 5
/////////////////////////////
struct student
{
      int  id;
      int  grade;
};
//////////////////////////////
struct node
{
      struct student  data;
      struct node    *link;
};
/////////////////////////////
int hashfunc(int key)
{
      return (key % size);
}
///////////////////////////////////////////////
int search(int key, struct node *HT[])
{
	  int h;
      struct node *p;
      h = hashfunc(key); 
      p = HT[h];
      while(p != NULL)
      {
        if(p->data.id == key)
            return h;
        p = p->link;
      }
      return -1;
}
 /////////////////////////////////////////////////////////////////////////// 
void insert(struct student rec, struct node *HT[])
{
      int key, h;
      struct node *n;
      key = rec.id;
      
      if(search(key, HT) != -1)
      {
         cout<<"Duplicate Key\n";
         return;
      }
      
      h = hashfunc(key); 
      n = new(struct node);
      n->data = rec;
      n->link = HT[h];
      HT[h] = n;
}
/////////////////////////////////////////////////////////////////////////// 
void display(struct node *HT[])
{
	  int i;
      struct node *p;
      
	  cout<<"\n-----------------------------\n";
	  cout<<"Hash Table\n";
	  
	  for(i = 0; i < size; i++)
      {
            cout<< "\n[ " << i << " ]" << "   ";
            if(HT[i] != NULL)
            {
                  p = HT[i];
                  while(p != NULL)
                  {
                    cout << p->data.id <<" "<< p->data.grade <<"\t\t";
                    p = p->link;
                  }
            }
      }
	  cout << "\n";
}
/////////////////////////////////////////////////////////////////////////// 
void delete_(int key, struct node *HT[])
{
      int h;
      struct node *t, *p;
      
      h = hashfunc(key); 
      if(HT[h]==NULL)
      {
            cout<<"Not Found\n";
            return;
      }
      
      if(HT[h]->data.id == key)
      {
            t = HT[h];
            HT[h] = HT[h]->link;  
            free(t);
            return;
      }
      
      p = HT[h];
      while(p->link != NULL)
      {
            if(p->link->data.id == key)   
            {
               t = p->link;
               p->link = t->link;
               free(t);
               return;
            }
            p = p->link;
      }
      cout<<"Not Found\n";
}
/////////////////////////////////////////////////////////////////////////// 
int main()
{
      struct node *HT[size]; 
      struct student x;
      
      for(int i = 0; i <= size - 1; i++)
            HT[i] = NULL;
      
      x.id=30;	  x.grade=17; 	  insert(x, HT);
      x.id=18;	  x.grade=19;	  insert(x, HT);
      x.id=24;	  x.grade=12;	  insert(x, HT);
      x.id=11;	  x.grade=10;	  insert(x, HT);
      x.id=15;	  x.grade=18;	  insert(x, HT);
              
      display(HT);

      cout<<"\ndelete\n";              
      delete_(15, HT);
      display(HT);

      cout<<"\n------------------\n";
      int pos = search(24, HT);
      if(pos == -1)
          cout<<"Not Found\n";
      else
          cout<<"Element Found in Chain:"<< pos << endl;

       
      getch();
}

