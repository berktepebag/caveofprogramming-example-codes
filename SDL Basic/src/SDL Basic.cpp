
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#include <SDL.h>
#include "Screen.h"
#include "Swarm.h"

using namespace std;
using namespace caveofprogramming;

int main(int argc, char* argv[]) {

	srand(time(NULL));

	Screen screen;

	if(screen.init() == false){
		cout << "Error initializing SDL" << endl;
	}

	int max = 0;

	Swarm swarm;

    while(true){
    	//Update Particles
    	//Draw Particles
    	// Check for messages/events
    	int elapsed = SDL_GetTicks();

    	swarm.update(elapsed);

		//unsigned char will cut out values if it more than max it can accept. So 256 cannot be given to unsigned char.
		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001*2)) * (256/2));
		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0002*2)) * (256/2));
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003*2)) * (256/2));


    	const Particle * const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
			int y = particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;

			screen.setPixel(x, y, red ,green ,blue);
		}

		screen.boxBlur();

    	//Draw the screen
    	screen.update();


    	if(screen.processEvents() == false){
    		break;
    	}


    }

    screen.close();


    return 0;
}
