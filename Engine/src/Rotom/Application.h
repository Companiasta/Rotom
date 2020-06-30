#pragma once

#include "Core.h"

namespace Rotom {

class ROTOM_API Application
{
public:
	Application();
	virtual ~Application();
	void Run();

	Application* CreateApplication();

private:

};

Application* CreateApplication();

}
