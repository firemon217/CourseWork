#include"Rectangle.h"
#include<iostream>
#include"math.h"

using namespace std;

Rectangle::Rectangle() //�����������, ������ ������� ��������������
{
	cout << "������� ������ ��������������:" << endl;
	cin >> this->height;
	cout << "������� ������ ��������������:" << endl;
	cin >> this->width;
	
}

void Rectangle::Scale() //���������� ������ �������������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->height *= multy;
	this->width *= multy;
}

void Rectangle::Rendering() //��������� ��������������
{
	int height = this->height; //������
	int width = this->width; //�����
	if (this->RotateDegrees == 90) //���������� �������� ��������������
	{
		int height = this->width; 
		int width = this->height;
	}
	for (int i = 0; i < height; i++) //���������
	{
		for (int j = 0; j < width; j++)
		{
			cout << "# ";
		}
		cout << endl;
	}
}

