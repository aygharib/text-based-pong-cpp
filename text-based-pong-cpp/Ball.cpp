#include "Ball.h"

Ball::Ball() {
	std::cout << "Ball created\n";
}

Ball::~Ball() {
	std::cout << "Ball destroyed\n";
}

void Ball::Init(int x, int y, int size, int velocityX, int velocityY) {
	m_x = x;
	m_y = y;
	m_size = size;
	m_velocityX = velocityX;
	m_velocityY = velocityY;
}

void Ball::Update() {
	m_x += m_velocityX;
	m_y += m_velocityY;
}

void Ball::Draw() {
	std::cout << "BALL POS: (" << m_x << ", " << m_y << ") " << std::endl;
}

void Ball::FlipVelocityX() {
	m_velocityX = -m_velocityX;
}

void Ball::FlipVelocityY() {
	m_velocityY = -m_velocityY;
}