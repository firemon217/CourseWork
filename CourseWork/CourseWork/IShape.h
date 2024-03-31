#pragma once
#include<string>

class IShape //������� ����� �����
{
	public: 
		virtual void Rotate() = 0; //������� ������
		virtual void Translate() = 0; //����������� �� ��� ������
		virtual void Scale() = 0; //���������� �������� ������
		virtual std::string GetName() = 0;
		virtual void Rendering() = 0;
	protected:
		int positionX = 0; //������� �� �
		int positionY = 0; //������� �� �
		int multiplier = 1; //��������� ������
		int RotateDegrees = 0; //���� �������� ������������ ��� �������
};