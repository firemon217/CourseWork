#pragma once
#include<string>

class IShape //Базовый класс фигур
{
	public: 
		virtual void Rotate() = 0; //Поворот фигуры
		virtual void Translate() = 0; //Перемещение по оси фигуры
		virtual void Scale() = 0; //Увеличение размеров фигуры
		virtual std::string GetName() = 0;
		virtual void Rendering() = 0;
	protected:
		int positionX = 0; //Позиция по х
		int positionY = 0; //Позиция по у
		int multiplier = 1; //Показател скейла
		int RotateDegrees = 0; //Угол поворота относительно оси нормали
};