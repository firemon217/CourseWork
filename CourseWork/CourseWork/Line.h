#pragma once
#include<string>
#include"IShape.h"
#include<string>

class Line : public IShape //Класс Линий, наследуемый от класса Фигур
{
	public:
		Line(); //Конструктор
		void Rotate() override; //Поворот фигуры
		void Translate() override; //Перемещение по оси фигуры
		void Scale() override; //Увеличение размеров фигуры
		void Rendering(); //Отрисовка фигуры
		std::string GetName() {
			return this->nameType;
		}
		static Line& SelectShape();
	private:
		int size; //Размер линии
		int startCoordinate; //Координата начала линии
		int endCoordinate; //координата конца линии
		std::string nameType = "Line";
};