#include"RightTriangle.h"
#include<iostream>
#include"math.h"

using namespace std;

RightTriangle::RightTriangle() //�����������, ������ ������� ������������
{
	cout << "������� ������ ������ ����������� ������������:" << endl;
	int size;
	cin >> size;
	this->sizeSides = size;
}

void RightTriangle::Scale() //���������� ������ ������������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->sizeSides *= multy;
}

void RenderingDeg90(int height, int size) //��������� ������������ � ��������� � 90 ��������
{
	for (int i = height; i > 1; i--) //������ �� ������� ������������
	{
		for (int j = 0; j < size; j++) //������ �� ����� ������
		{
			if ((j == (size - (2 * i - 1)) / 2 + 1)) //���� ��������� �� ����� ����������, �� ������������ ������� ������������
			{
				for (int h = 0; h < i; h++)
				{
					cout << "*";
					if (h != i - 1)
					{
						cout << " ";
					}
				}
				break;
			}
			cout << " ";
		}
		cout << endl;
	}
}

void RenderingDeg0(int height, int size) //��������� ������������ ��� ��������
{
	for (int i = 1; i < height; i++) //������ �� ������� ������������
	{
		for (int j = 0; j < size; j++) //������ �� ����� ������
		{
			if ((j == (size - (2 * i - 1)) / 2 + 1)) //���� ��������� �� ����� ����������, �� ������������ ������� ������������
			{
				for (int h = 0; h < i; h++)
				{
					cout << "*";
					if (h != i - 1)
					{
						cout << " ";
					}
				}
				break;
			}
			cout << " ";
		}
		cout << endl;
	}
}

void RightTriangle::Rendering() //��������� ������
{
	int height = this->sizeSides + 1; //������� ������������
	int size = this->sizeSides * 2 - 1; //���������� ������ ��� ���������
	if(this->RotateDegrees == 0)
	{
		RenderingDeg0(height, size);
	}
	if (this->RotateDegrees == 90)
	{
		RenderingDeg90(height, size);
	}
	
}


