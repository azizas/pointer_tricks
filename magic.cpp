#include <iostream>
#include <cstdlib>
using namespace std ;
int main ()
{
	int x = 1024; 
int *p = &x;
char *ch = (char*)p; 
printf("%d\n",*p); 
printf("%d\n",*ch);

}