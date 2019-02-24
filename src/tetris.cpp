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


int main() {
	RenderWindow window(VideoMode(320, 480), "The game!");

	while(window.isOpen()) {
		Event e;
		while(window.pollEvent(e)){
			if(e.type == Event::Closed) {
				window.close();
			}
		}

		window.clear(Color::White);
		window.display();

	}

	return 0;
}
