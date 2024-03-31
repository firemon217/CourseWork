#include"Triangle.h"
#include"RightTriangle.h"
#include"RightDegreeTriangle.h"
#include<iostream>
#include<vector>

using namespace std;

Triangle::Triangle() //���������!!!!!!!
{
	
}

void Triangle::Rotate() //??????????
{
	if (this->RotateDegrees == 0)
	{
		this->RotateDegrees = 180;
	}
	if (this->RotateDegrees == 180)
	{
		this->RotateDegrees = 0;
	}
}

void Triangle::Translate() //���������� ����������� �� ������������ ����������
{
	cout << "������� ���������� �������� ����� �� x:" << endl;
	int x; //���������� ����������� �� �
	cin >> x;
	cout << "������� ���������� �������� ����� �� y:" << endl;
	int y; //���������� ����������� �� �
	cin >> y;
	this->positionX += x; //���������� ����������� �� �
	this->positionY += y; //���������� ����������� �� �
}

Triangle& Triangle::SelectShape()
{

	cout << "�������� ��� ������������:\n1.���������� �����������\n2.�������������� �����������" << endl;
	int n = 0;
	cin >> n;
	switch (n)
	{
		case 1:
		{
			RightTriangle rightTri;
			return rightTri;
		}
		case 2:
		{
			RightDegreeTriangle rightDegreeTri;
			return rightDegreeTri;
		}

	}
}
