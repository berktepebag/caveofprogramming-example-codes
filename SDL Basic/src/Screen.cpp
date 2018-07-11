/*
 * Screen.cpp
 *
 *  Created on: Jul 10, 2018
 *      Author: Desktop
 */

#include <iostream>
#include "Screen.h"

namespace caveofprogramming {

Screen::Screen():
		mWindow(NULL), mRenderer(NULL), mTexture(NULL), mBuffer1(NULL), mBuffer2(NULL)  {

}

bool Screen::init() {

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		return false;
	}

	SDL_Init(SDL_INIT_EVERYTHING);

	// Create a Window
	mWindow = SDL_CreateWindow("Particle Fire Explosion",
			SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);

	if(mWindow == NULL){
		SDL_Quit();
		return false;
	}

	mRenderer = SDL_CreateRenderer(mWindow,-1,SDL_RENDERER_PRESENTVSYNC);

	mTexture = SDL_CreateTexture(mRenderer,SDL_PIXELFORMAT_RGBA8888,1,SCREEN_WIDTH,SCREEN_HEIGHT);

	if (mRenderer == NULL) {
		SDL_DestroyWindow(mWindow);
		SDL_Quit();
		return false;
	}

	if (mTexture == NULL) {
		SDL_DestroyRenderer(mRenderer);
		SDL_DestroyWindow(mWindow);
		SDL_Quit();
		return false;
	}

	//Creating ram space for pixels
	mBuffer1 = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];
	mBuffer2 = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];
	//Defining color of all pixels
	memset(mBuffer1, 0x00 , SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));

	//0xFFFFFFFF => R(FF)G(FF)B(FF)A(FF) . 0 is min, F is max value. 0xFF0000FF is red etc.

	//Like memset, but setting eaxh pixel individually
	/*
	for (int i = 0; i < SCREEN_HEIGHT*SCREEN_WIDTH; i++) {
		mBuffer[i] = 0x0050FFFF;
	}
	*/

    // Delay so that we can see the window appear
    //SDL_Delay(2000);

	return true;

}

void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue){

	if(x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT){return;}

	Uint32 color = 0;

	color += red;
	//Shifts 8 bits
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;
	color <<= 8;
	//Alpha value, opaque
	color += 0xFF;

	mBuffer1[(y* SCREEN_WIDTH) + x] = color;

}

void Screen::boxBlur(){
	//Swap the buffers, so pixel is in mBuffer2 and we are drawing to mBuffer1
	Uint32 *temp = mBuffer1;

	mBuffer1 = mBuffer2;
	mBuffer2 = temp;

	for(int y=0; y<SCREEN_HEIGHT; y++){
		for(int x=0; x<SCREEN_WIDTH; x++){

			/*
			 * 0 0 0
			 * 0 1 0
			 * 0 0 0
			 * Neighbor pixels
			 */

			int redTotal = 0;
			int greenTotal = 0;
			int blueTotal = 0;

			for (int row = -1; row <= 1; row++) {
				for (int col = -1; col <= 1; col++){
					int currentX = x + col;
					int currentY = y + row;

					if(currentX > 0 && currentX < SCREEN_WIDTH && currentY > 0 && currentY < SCREEN_HEIGHT){
						Uint32 color = mBuffer2[currentY*SCREEN_WIDTH + currentX];

						Uint8 red = color >> 24;
						Uint8 green = color >> 16;
						Uint8 blue = color >> 8;

						redTotal += red;
						greenTotal += green;
						blueTotal += blue;
					}
				}
			}

			Uint8 red = redTotal/9;
			Uint8 green = greenTotal/9;
			Uint8 blue = blueTotal/9;

			setPixel(x, y, red, green, blue);
		}
	}
}

void Screen::update(){

    SDL_UpdateTexture(mTexture, NULL, mBuffer1, SCREEN_WIDTH*sizeof(Uint32));
    SDL_RenderClear(mRenderer);
    SDL_RenderCopy(mRenderer,mTexture,NULL,NULL);
    SDL_RenderPresent(mRenderer);
}

bool Screen::processEvents() {
	SDL_Event event;

	while(SDL_PollEvent(&event)){
	    		if (event.type == SDL_QUIT) {
					return false;
				}
	    	}
	return true;
}


void Screen::close() {

    // Cleanup and Quit
    delete[] mBuffer1;
    delete[] mBuffer2;
    SDL_DestroyRenderer(mRenderer);
    SDL_DestroyTexture(mTexture);
    SDL_DestroyWindow(mWindow);
    SDL_Quit();

}

} /* namespace caveofprogrraming */
