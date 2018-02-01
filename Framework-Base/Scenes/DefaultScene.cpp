#include "Assets.h"
#include "Graphics.h"
#include "Scenes\DefaultScene.h"

DefaultScene::DefaultScene() {
	// Set current scene name
	this->SetSceneName(SceneName::Scene_Default);
}

void DefaultScene::SceneStart() {
	
}

void DefaultScene::HandleEvent(SDL_Event * Event) {

}

void DefaultScene::Update(Uint32 timeStep) {

}

void DefaultScene::Render() {

}

void DefaultScene::Cleanup() {

}
