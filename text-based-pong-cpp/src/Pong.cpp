#include <iostream>
#include <array>
#include <vector>

#include "Pong.h"

#include "Paddle.h"
#include "Ball.h"
#include "Collisions.h"

namespace Pong {
	static const int RESOLUTION_X = 900;
	static const int RESOLUTION_Y = 600;

	Paddle leftPaddle;
	Paddle rightPaddle;
	Ball ball;

	void Init() {
		leftPaddle.Init(1, RESOLUTION_Y / 2, 1, RESOLUTION_Y / 2);
		rightPaddle.Init(900, RESOLUTION_Y / 2, 1, RESOLUTION_Y / 2);
		ball.Init(RESOLUTION_X / 2, RESOLUTION_Y / 2, 1, 1, 0);
	}

	void Run() {
		bool running = true;
		bool flag = true;

		while (running) {
			//InputHandler::Handle();
			
			if (Collisions::LeftPaddleAndBall(&leftPaddle, &ball) || Collisions::RightPaddleAndBall(&rightPaddle, &ball))
				ball.FlipVelocityX();

			if (Collisions::BallAndWall(&ball))
				ball.FlipVelocityY();

			Update();
			Draw(&flag);
		}
	}

	void Update() {
		leftPaddle.Update();
		rightPaddle.Update();
		ball.Update();
	}

	void Draw(bool* flag) {
		//leftPaddle.Draw();
		//rightPaddle.Draw();
		ball.Draw();
	}
}