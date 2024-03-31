#include<iostream>
#include"RightDegreeTriangle.h"
#include"math.h"

using namespace std;

RightDegreeTriangle::RightDegreeTriangle() //Конструктор, задает первоначальные значения катетам и гипотенузе прямоугольного треугольника
{
	cout << "Введите размер первого катета:" << endl;
	cin >> this->sideA; //Первый катет
	this->sideA *= 5;
	cout << "Введите размер второго катета:" << endl;
	cin >> this->sideB; //Второй катет
	this->sideB *= 5;
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2)); //Вычисление гипотенузы
}

void RightDegreeTriangle::Scale() //Увеличение сторон прямоугольного треугольника
{
	cout << "Введите множитель увеличения:" << endl;
	int multy;
	cin >> multy; //Получаем на вход множитель
	this->multiplier *= multy; //Увеличиваем мнодитель фигуры
	this->sideA *= multy; //Увеличиваем стороны фигуры на множитель
	this->sideB *= multy;
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2));
}

void RightDegreeTriangle::Rendering() //Доработать/Додумать!!!!!!!!!!!!!!
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
