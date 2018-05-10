#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include <glm\vec2.hpp>
class SmallRock;
class MediumRock;
class LargeRock;
class aieProject2D1App : public aie::Application {
public:

	aieProject2D1App();
	virtual ~aieProject2D1App();

	// This is what loads before it starts
	virtual bool startup();
	// This deletes the resources
	virtual void shutdown();

	// Happens every frame
	virtual void update(float deltaTime);
	virtual void draw();

protected:
	// Use (SolutionDir)bin in debugging.  (Right click on aieProject to change)
	// This adds in the objects to appear
	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
	aie::Texture*		m_Tank;
	SmallRock*			m_SRock;
	MediumRock*			m_MRock;
	LargeRock*			m_LRock;
	float				m_TankPosX;
	float				m_TankPosY;
	float				m_TankAngle;
};
