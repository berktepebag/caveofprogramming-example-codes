/*
 * Screen.h
 *
 *  Created on: Jul 10, 2018
 *      Author: Desktop
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>
#include <string.h>

namespace caveofprogramming {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
private:
	SDL_Window *mWindow;
	SDL_Renderer *mRenderer;
	SDL_Texture *mTexture;
	Uint32 *mBuffer1;
	Uint32 *mBuffer2;

public:
	Screen();
	bool init();
	void update();
	void boxBlur();

	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();

};

} /* namespace caveofprogrraming */

#endif /* SCREEN_H_ */
