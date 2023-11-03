#include "Vector3D.h"
#include <iostream>

Vector3D::Vector3D(double x, double y, double z)
    : m_x(x), m_y(y), m_z(z) {

}
Vector3D::~Vector3D() {

}

void Vector3D::print() const {
    std::cout << "Вектор(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}


Vector3D::Point3D::Point3D(double x, double y, double z)
    : m_x(x), m_y(y), m_z(z) {

}

Vector3D::Point3D::~Point3D() {

}

void Vector3D::Point3D::print() const
{
	std::cout << "Точка(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}

void Vector3D::Point3D::moveByVector(const Vector3D& v)
{
    m_x += v.m_x;
    m_y += v.m_y;
    m_z += v.m_z;
}










