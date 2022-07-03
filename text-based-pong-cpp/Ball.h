#pragma once
#include <iostream>

class Ball {
public:
	int m_x, m_y, m_size, m_velocityX, m_velocityY;
public:
	Ball();

	~Ball();

	void Init(int x, int y, int size, int velocityX, int velocityY);

	void Update();

	void Draw();

	void FlipVelocityX();

	void FlipVelocityY();
};