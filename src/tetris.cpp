//============================================================================
// Name        : tetris.cpp
// Author      : J. D. Mondragon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

const int M = 20;
const int N = 10;

struct Point { int x, y; } a[4], b[4];

int figures[7][4] = {
	1,3,5,7, // I
	2,4,5,7, // Z
	3,5,4,6, // S
	3,5,4,7, // T
	2,3,5,7, // L
	3,5,7,6, // J
	2,3,4,5, // O
};

int main() {
	RenderWindow window(VideoMode(320, 480), "The game!");

	Texture t;
	t.loadFromFile("./images/tetris_tiles.png");

	Sprite s(t);
	s.setTextureRect(IntRect(0, 0, 18, 18));

	while(window.isOpen()) {
		Event e;
		while(window.pollEvent(e)){
			if(e.type == Event::Closed) {
				window.close();
			}
		}
		int n = 3;
		for(int i = 0; i < 4; i++) {
			a[i].x = figures[n][i] % 2;
			a[i].y = figures[n][i] / 2;
		}

		window.clear(Color::White);

		for(int i = 0; i < 4; i++) {
			s.setPosition(a[i].x * 18, a[i].y * 18);

			window.draw(s);
		}
		window.display();

	}

	return 0;
}
