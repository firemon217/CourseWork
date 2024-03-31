#include"Line.h"
#include<iostream>

using namespace std;

Line::Line() //Конструктор, в котором задаются размеры линии
{
	cout << "Введите размер линии:" << endl;
	cin >> this->size;
	this->startCoordinate = this->positionX; //Координата начала линии
	this->endCoordinate = this->positionX + size; //координата конца линии
}

void Line::Rotate() //Поворот на 90 градусов:??????????
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

void Line::Translate() //Перемещение линии по определенным координатам
{
	cout << "Введите координату смещения линии по x:" << endl; 
	int x; //Расстояние х
	cin >> x;
	cout << "Введите координату смещения линии по y:" << endl;
	int y; //Расстояние у
	cin >> y;
	this->positionX = x; //Перемещение на расстояние х
	this->positionY = y; //Перемещение на расстояние у
}

void Line::Scale() //Увеличение линии
{
	cout << "Введите множитель размера линии:" << endl;
	int multiplier; //Множитель
	cin >> multiplier;
	this->multiplier *= multiplier; //Запоминаем множитель
	this->size *= multiplier; //Увеличиваем размер
}

void Line::Rendering() //Отрисовка линии
{
	if (this->RotateDegrees == 0) //Если угол поворота 0
	{
		cout << " ";
		for (int i = 0; i < this->size; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	else //Если угол поворота 90
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