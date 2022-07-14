#pragma once
#include "Paddle.h"
#include "Ball.h"
#include <iostream>

namespace Collisions {
	bool LeftPaddleAndBall(Paddle* paddle, Ball* ball) {
		if (ball->m_x <= (paddle->m_x + paddle->m_width) && ball->m_y >= paddle->m_y && ball->m_y <= (paddle->m_y + paddle->m_height))
			return true;

		return false;
	}

	bool RightPaddleAndBall(Paddle* paddle, Ball* ball) {
		if (ball->m_x >= paddle->m_x && ball->m_y >= paddle->m_y && ball->m_y <= (paddle->m_y + paddle->m_height))
			return true;

		return false;
	}

	bool BallAndWall(Ball* ball) {
		if (ball->m_y <= 0 || ball->m_y >= 600) // change 600 to use pong's resolution later
			return true;

		return false;
	}
}