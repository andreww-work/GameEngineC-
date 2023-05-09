#pragma once

#include "ISystem.h"

#include<iostream>

#include"GameObject.h"
#include "SceneTree.h"
#include "CountingSystem.h"
#include "SystemHandler.h"
#include "IComponent.h"
#include "DrawRectangleSystem.h"
#include "RectangleComponent.h"
#include "ReflectableComponent.hpp"
#include "ReflectorComponent.hpp"
#include "VelocityComponent.hpp"
#include <queue>

#define root (*SceneTree::SceneRoot.get()) // this needs to change - don't use macros
#define deref(arg) (*arg.get())