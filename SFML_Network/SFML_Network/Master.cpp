#include "Master.h"
#include "Window.h"
#include "MouseManager.h"
#include "StateManager.h"

Master::Master()
{
	new StateManager();
}

Master::~Master()
{
}

void Master::loop()
{
	while (!Window::IsDone())
	{
		Tools::Update();
		MouseManager::Update();
		Window::Update();

		if (Window::HasFocus())
			StateManager::Update();

		StateManager::Display();
		Window::Display();
	}
}
