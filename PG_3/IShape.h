#pragma once

class IShape {
public:
	IShape();
	virtual ~IShape() = 0;

	//インターフェース
	virtual void Size() = 0;
	virtual void Draw() = 0;
protected:
	int damage_;
};