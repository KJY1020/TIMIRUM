
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

// Vector3
// (1) �����ڿ� �Ҹ��� ����
// (2) Vector3 = Vector3 + Vector3
//		v1 = v2 + v3;