#pragma once

#include "Entity.h"

class System
{
public:
	System(const std::string &name) : m_strSystemName(name) {}
	virtual ~System() {}

	virtual void Init() = 0;
	virtual void Update(float dt, std::vector<Entity*> &entities) = 0;
	virtual void Shutdown() = 0;

	const std::string& GetName() const { return m_strSystemName; }
	
protected:
	const std::string m_strSystemName;
};
