#include <iostream>
#include <vector>

class Vector
{
private:
	double x;
	double y;
	double z;
public:
	double GetX()
	{
		return x;
	}
	double GetY()
	{
		return y;
	}
	double GetZ()
	{
		return z;
	}
	void SetX(double newX)
	{
		x = newX;
	}
	void SetY(double newY)
	{
		y = newY;
	}
	void SetZ(double newZ)
	{
		z = newZ;
	}
	double GetScale()
	{
		double Scale = x + y + z;
		return Scale;
	}
};

class example
{
private:
	int a = 24;

public:
	int GetA()
	{
		return a;
	}
};

int main()
{
	example temp;
	temp.GetA();
	std::cout << temp.GetA() << "\n";
	Vector massive;
	massive.GetX();
	massive.GetY();
	massive.GetZ();
	massive.SetX(-15);
	massive.SetY(-12);
	massive.SetZ(-21);
	massive.GetScale();
	std::cout << abs(massive.GetScale()) << "\n";
	std::vector<double>array{ massive.GetX(), massive.GetY(), massive.GetZ() };
	std::cout << array.size();

}