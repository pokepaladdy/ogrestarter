#pragma once
#include <Rocket\Core.h>
#include <Rocket\Core\SystemInterface.h>
#include <Rocket\Core\RenderInterface.h>
class GUI
{
public:
	GUI(void);

	virtual float GetElapsedTime();

	// Translate the input string into the translated string.
	virtual int TranslateString(Rocket::Core::String& translated, const Rocket::Core::String& input);

	// Log the specified message.
	virtual bool LogMessage(Rocket::Core::Log::Type type, const Rocket::Core::String& message);

	// Called by Rocket when it wants to render geometry that the application does not wish to optimise.
	virtual void RenderGeometry(Rocket::Core::Vertex* vertices, int num_vertices, int* indices, int num_indices, Rocket::Core::TextureHandle texture, const Rocket::Core::Vector2f& translation) = 0;
	~GUI(void);
};

