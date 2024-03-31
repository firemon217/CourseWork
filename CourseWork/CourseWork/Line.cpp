#include"Line.h"
#include<iostream>

using namespace std;

Line::Line() //�����������, � ������� �������� ������� �����
{
	cout << "������� ������ �����:" << endl;
	cin >> this->size;
	this->startCoordinate = this->positionX; //���������� ������ �����
	this->endCoordinate = this->positionX + size; //���������� ����� �����
}

void Line::Rotate() //������� �� 90 ��������:??????????
{
	if (this->RotateDegrees == 0)
	{
		this->RotateDegrees = 90;
	}
	if (this->RotateDegrees == 90)
	{
		this->RotateDegrees = 0;
	}
}

void Line::Translate() //����������� ����� �� ������������ �����������
{
	cout << "������� ���������� �������� ����� �� x:" << endl; 
	int x; //���������� �
	cin >> x;
	cout << "������� ���������� �������� ����� �� y:" << endl;
	int y; //���������� �
	cin >> y;
	this->positionX = x; //����������� �� ���������� �
	this->positionY = y; //����������� �� ���������� �
}

void Line::Scale() //���������� �����
{
	cout << "������� ��������� ������� �����:" << endl;
	int multiplier; //���������
	cin >> multiplier;
	this->multiplier *= multiplier; //���������� ���������
	this->size *= multiplier; //����������� ������
}

void Line::Rendering() //��������� �����
{
	if (this->RotateDegrees == 0) //���� ���� �������� 0
	{
		cout << " ";
		for (int i = 0; i < this->size; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	else //���� ���� �������� 90
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << "     *" << endl;
		}
	}
}

Line& Line::SelectShape()
{
	Line line;
	return line;
}