#pragma once
#include <vector>
#include <algorithm>

#include <GLFW/glfw3.h>

#include "../core/System.h"

class SysGLFWWindow : public System
{
public:	
	virtual void Init();
	virtual void Update(float dt, std::vector<Entity*> &entities);
	virtual void Shutdown();

private:
	static bool keys[1024];

	SysGLFWWindow();
	~SysGLFWWindow();
};
