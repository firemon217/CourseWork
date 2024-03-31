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
	cout << "Введите координату смещения линии по x:" << endl;
	int x; //Координата перемещения по х
	cin >> x;
	cout << "Введите координату смещения линии по y:" << endl;
	int y; //Координата перемещения по н
	cin >> y;
	this->positionX += x; //Назначение перемещения по х
	this->positionY += y; //Назначение перемещения по у
}

Quadrilateral& Quadrilateral::SelectShape()
{
	cout << "Выберите тип четырехугольника:\n1.Прямоугольник" << endl;
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