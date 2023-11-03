#pragma once
class Vector3D
{
private:
    double m_x, m_y, m_z;

public:
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0);
	~Vector3D();

    void print() const;   

	class Point3D
	{
	private:
		double m_x, m_y, m_z;

	public:
		Point3D(double x = 0.0, double y = 0.0, double z = 0.0);
		~Point3D();
		void print() const;		
		void moveByVector(const Vector3D& v);
	};

};