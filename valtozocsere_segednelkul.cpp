#include "std_lib_facilities.h"

main()
{
	int a = 2018;
	int b = 42;

	cout<<"Eredeti a = "<<a<<'\n';
	cout<<"Eredeti b = "<<b<<'\n';

	b = a - b;
	a = a - b;
	b = b + a;
	
	cout<<"Új a = "<<a<<'\n';
	cout<<"Új b = "<<b<<'\n';

	return 0;
}
