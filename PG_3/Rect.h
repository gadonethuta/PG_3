#pragma once
#include "IShape.h"

class Rect : public IShape {
public:
	Rect();
	~Rect();

	void Size() override;
	void Draw() override;
private:
	float width;
	float height;
};