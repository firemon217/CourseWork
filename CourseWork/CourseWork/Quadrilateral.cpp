#pragma once
#include<iostream>
#include<vector>
#include"Quadrilateral.h"
#include"Rectangle.h"

using namespace std;

void Quadrilateral::Rotate() //??????????
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

void Quadrilateral::Translate()
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

Quadrilateral& Quadrilateral::SelectShape()
{
	cout << "�������� ��� ����������������:\n1.�������������" << endl;
	int n = 0;
	cin >> n;
	switch (n)
	{
		case 1:
		{
			Rectangle rec;
			return rec;
		}
	}
}