#include <stdio.h>
#include "base_structure.h"


Stack::Stack()
{
	*size=length=10;
	top=-1;
	container=new float[*size];
	for(int inii = 0; inii < *size; inii++) container[inii] = 0;
};

Stack::Stack(int len)
{
	*size=length=len;
	top=-1;
	container=new float[*size];
	for(int inii = 0; inii < *size; inii++) container[inii] = 0;
};
Stack::~Stack()
{
	delete container;
	delete size;
	std::cout <<"Deletion has been implemented"<< std::endl;
	
};

bool Stack::isFull()
{
    return top==(length-1);
};

bool Stack::isEmpty()
{
    return top==-1;
} ;

bool Stack::push(int item)
{
	if(isFull())
		return false;
	else
	{
		container[++top]=item;
		return true;
	}
};

bool Stack::pop(float &element)
{
	if(isEmpty())
		return false;
	else
	{
		
		element=container[top];
		container[top--]=0;
		return true;
	}
		
};