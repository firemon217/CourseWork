#include<iostream>
#include"RightDegreeTriangle.h"
#include"math.h"

using namespace std;

RightDegreeTriangle::RightDegreeTriangle() //�����������, ������ �������������� �������� ������� � ���������� �������������� ������������
{
	cout << "������� ������ ������� ������:" << endl;
	cin >> this->sideA; //������ �����
	this->sideA *= 5;
	cout << "������� ������ ������� ������:" << endl;
	cin >> this->sideB; //������ �����
	this->sideB *= 5;
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2)); //���������� ����������
}

void RightDegreeTriangle::Scale() //���������� ������ �������������� ������������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy; //�������� �� ���� ���������
	this->multiplier *= multy; //����������� ��������� ������
	this->sideA *= multy; //����������� ������� ������ �� ���������
	this->sideB *= multy;
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2));
}

void RightDegreeTriangle::Rendering() //����������/��������!!!!!!!!!!!!!!
{
	for (int i = 0; i < this->sideB; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
