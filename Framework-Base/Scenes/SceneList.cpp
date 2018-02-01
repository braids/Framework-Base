#include "Scenes\SceneList.h"
#include "Scenes\DefaultScene.h"

Scene::Vec* SceneList::GetSceneList()
{
	Scene::Vec* sceneList = new Scene::Vec;

	sceneList->push_back(new DefaultScene());

	return sceneList;
}
