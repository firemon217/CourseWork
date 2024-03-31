#pragma once
#include"IShape.h"
#include<string>

class Quadrilateral : public IShape //Класс четырехугольников, наследуемый от класса Фигур
{
public:
	void Rotate() override; //Поворот фигуры
	void Translate() override; //Перемещение по оси фигуры
	virtual void Scale() = 0; //Увеличение размеров фигуры
	virtual void Rendering() = 0; //Отрисовка фигуры
	std::string GetName() {
		return this->nameType;
	}
	virtual std::string GetQuadrilateralName() = 0;
	static Quadrilateral& SelectShape();
private:
	std::string nameType = "Quadrilateral";
};

