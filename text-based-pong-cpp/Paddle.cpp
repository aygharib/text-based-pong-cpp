#include "Paddle.h"

Paddle::Paddle() {
	std::cout << "Paddle created\n";
}

Paddle:: ~Paddle() {
	std::cout << "Paddle destroyed\n";
}

void Paddle::Init(int x, int y, int width, int height) {
	m_x = x;
	m_y = y;
	m_width = width;
	m_height = height;
}

void Paddle::Update() {
	
}

void Paddle::Draw() {
	std::cout << "PADDLE POS: (" << m_x << ", " << m_y << ") " << std::endl;
}