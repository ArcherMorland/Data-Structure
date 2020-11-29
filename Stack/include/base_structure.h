#include <iostream>


class Stack
{
	int *size = new int;
public:
	float *container;
	int length=0,top;
	
    Stack();
    Stack(int);
    ~Stack();

   bool isFull();
   bool isEmpty();
   bool push(int);
   bool pop(float&);
   
};






/*
class Stack0
{
	int *size = new int;
	
public:
    
	float *container;
	int length=0,top;
	
	
	Stack(){
		
		*size=length=10;
		top=-1;
		container=new float[*size];
		for(int inii = 0; inii < *size; inii++) container[inii] = 1010101010;
	};
	Stack(int len){
		
		*size=length=len;
		top=-1;
		container=new float[*size];
		for(int inii = 0; inii < *size; inii++) container[inii] = 1010101010;
		
		};
	~Stack(){
		
		delete container;
		delete size;
		
		};
	bool isFull()
	{
		return top==(length-1);
	};
		
	bool isEmpty()
	{
		return top==-1;
	};
		
	bool push(int item)
	{
		if(isFull())
		    return false;
		else
		{
			container[++top]=item;
			return true;
		}
	};
		
	bool pop(float &element)
	{
		if(isEmpty())
			return false;
		else
		{
			
			element=container[top--];
			return true;
		}
		
	};
		
	
	
};
	*/
