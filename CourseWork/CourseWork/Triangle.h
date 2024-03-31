#pragma once
#include"IShape.h"
#include<string>

class Triangle : public IShape //Класс треугольников, наследуемый от класса Фигур
{
public:
	Triangle();
	void Rotate() override; //Поворот фигуры
	void Translate() override; //Перемещение по оси фигуры
	virtual void Scale() = 0; //Увеличение размеров фигуры
	virtual void Rendering() = 0; //Отрисовка фигуры
	std::string GetName() {
		return this->nameType;
	}
	virtual std::string GetTriangleName() = 0;
	static Triangle& SelectShape();
private:
	std::string nameType = "Triangle";
};
