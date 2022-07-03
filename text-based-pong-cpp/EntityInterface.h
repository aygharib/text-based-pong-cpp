#pragma once
#include <iostream>

class EntityInterface {
protected:
	int m_x, m_y, m_width, m_height;
public:
	EntityInterface(int x, int y, int width, int height) : m_x(x), m_y(x), m_width(width), m_height(height) {}
	virtual ~EntityInterface() {}
	virtual void Update() = 0;
	virtual void Draw() = 0;
	void Print() {
		std::cout << m_x << ", " << m_y << ", " << m_width << ", " << m_height << std::endl;
	}
};