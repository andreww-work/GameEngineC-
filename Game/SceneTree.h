#pragma once
#include "GameObject.h"
struct SceneTree
{
	// Can we do this without global variables?
	static std::shared_ptr<GameObject> SceneRoot;
	static std::vector<GameObject*> GetGameObjects(std::vector<std::string>);



};

