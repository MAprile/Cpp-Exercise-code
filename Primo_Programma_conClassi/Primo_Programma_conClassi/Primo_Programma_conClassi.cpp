/*
 Il primo programma di esempio:
 HelloWorld!
 */

#include "pch.h"
#include <iostream>

class Greater
{
  public: void sayHello()
  {
	std::cout << "Hello World" << std::endl;
  }

};

int main()
{
	Greater g;
	g.sayHello();
	return 0;
}
