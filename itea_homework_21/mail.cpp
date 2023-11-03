#include <iostream>
#include "Vector3D.h"


int main()
{
	system("chcp 1251>nul");
	
	Vector3D::Point3D p(3.0, 4.0, 5.0);
	Vector3D v(3.0, 3.0, -2.0);

	p.print();
	p.moveByVector(v);
	v.print();
	p.print();

	return 0;
}