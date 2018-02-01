#ifndef _DEFAULTSCENE_H_
#define _DEFAULTSCENE_H_

#include <SDL2\SDL.h>
#include "Scenes\Scene.h"

class DefaultScene : public Scene {
public:
	DefaultScene();

	void SceneStart();
	void HandleEvent(SDL_Event* Event);
	void Update(Uint32 timeStep);
	void Render();
	void Cleanup();
};

#endif
