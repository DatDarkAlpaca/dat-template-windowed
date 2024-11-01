#pragma once
#include "Core/Event/Event.hpp"

namespace dat
{
	struct WindowFramebufferEvent : public Event
	{
		DEFINE_EVENT(EventType::WINDOW_FRAMEBUFFER_RESIZE);

	public:
		WindowFramebufferEvent(uint32_t width, uint32_t height)
			: width(width)
			, height(height)
		{

		}

	public:
		uint32_t width = 0, height = 0;
	};
}