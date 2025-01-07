#include "StateManager.h"
#include "Network.h"

State* StateManager::m_state = nullptr;

StateManager::StateManager()
{
	m_state = new Network();
}

StateManager::~StateManager()
{
	delete m_state;
}

void StateManager::Update()
{
	m_state->Update();
}

void StateManager::Display()
{
	m_state->Display();
}

void StateManager::changeState(State* _state)
{
	delete m_state;
	m_state = _state;
}
