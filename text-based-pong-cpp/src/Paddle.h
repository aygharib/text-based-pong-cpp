#pragma once
#include <iostream>

class Paddle {
public:
	int m_x, m_y, m_width, m_height;
public:
	Paddle();

	~Paddle();

	void Init(int x, int y, int width, int height);

	void Update();

	void Draw();
};