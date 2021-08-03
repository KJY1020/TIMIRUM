#if 0
// C STANDARD
// �������� ���α׷�(������ �۰�����)
#include <stdio.h>
int main(void) //int main(int argc, char** argv)
{
	printf("Hello, World!")
		return (0);
}
#endif

#if 0
// CPP STANDARD
// ��ü���� ���α׷�
#include <iostream>
// using namespace std;
// NAMESPACE::FUNCTION

// ������ ������������ ������ �ִ�

int main()
{
	std::cout << "Hello, World!" << std::endl;
}
#endif

// CLASS
// STRUCT(����ü)
/*
typedef struct _player
{
	char* _name;
	int _hp;
	...
	+�Լ�(SetName, GetName)
}
Player;
SetName();
GetName();
// !! ����ü�� ������ Public(������ �ڷ���)�̴�
// ������� �Լ��� �� ���� ����(�Լ� �����͸� �̿��ؼ� ������δ� ������)
// Class ����
// Class�� '��Ʋ'
// C With Class
// i++; i = i + 1;
// c++;
*/
#if 0
#include <iostream>

// App ��ü ����
class App
{
public:
	void Print()
	{
		std::cout << "Hello, World!" << std::endl;
	}
};

int main()
{
	// App ��ü ����
	App app;
	app.Print();
}
#endif

// �÷��̾��� ��ġ���� �����ϴ� ������ ����� �;���
// float x, float y;
/*
	typedef struct _vector2
	{
		float x;
		float y;
	} Vector2;
	SetVector(Vector2 *v, float x, float y);
	GetVector();

	...
	Vector2 v1;
	SetVector(&v1.x, &v1.y, 1.0f, 1.0f);
*/

#if 0
#include <iostream>

class Vector2
{
private:
	float _x;
	float _y;
public:
	void SetVector(float x, float y)
	{
		_x = x;
		_y = y;
	}
	void PrintVector()
	{
		std::cout << "X: " << _x << "|| Y: " << _y << std::endl;
	}
};

// x, y, z Vector3

int main()
{
	Vector2 v;
	v.SetVector(1.0f, 1.0f);
	v.PrintVector();
}
#endif

#if 0
#include <iostream>
class Vector3
{
private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
public:
	void SetVector(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}
	void PrintVector()
	{
		std::cout << "X: " << x << " || Y: " << y << " || Z: " << z << std::endl;
	}
};

int main()
{
	Vector3 v;
	v.SetVector(1.0f, 1.0f, 1.0f);
	v.PrintVector();
}
#endif

// Vector3
// (1) �����ڿ� �Ҹ��� ����
// (2) Vector3 = Vector3 + Vector3
//		v1 = v2 + v3;

#include <iostream>
class Vector3
{
private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
public:
	Vector3();
	~Vector3();
	Vector3(float x, float y, float z);

	float GetX() const;
	float GetY() const;
	float GetZ() const;
	
	void GetVector()
	{
		std::cin >> x >> y >> z;
	}

	static Vector3 Sum(Vector3 a, Vector3 b, Vector3 c);

};

int main()
{
	Vector3 v;
	v.GetVector();
	Vector3 a(1, 2, 3), b(4, 5, 6), c(v.GetX(), v.GetY(), v.GetZ());
	Vector3 sum = Vector3::Sum(a, b, c);
	std::cout << "X: " << sum.GetX() << " || Y: " << sum.GetY() << " || Z: " << sum.GetZ() << std::endl;
}
Vector3::Vector3() : x(0), y(0), z(0){}
Vector3::~Vector3() { std::cout << "�Ҹ��� ȣ��" << std::endl; }
Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

float Vector3::GetX() const { return x; }
float Vector3::GetY() const { return y; }
float Vector3::GetZ() const { return z; }

Vector3 Vector3::Sum(Vector3 a, Vector3 b, Vector3 c)
{
	return Vector3(a.x + b.x + c.x, a.y + b.y + c.y, a.z + b.z + c.z);
}