#pragma once

class IShape {
public:
	IShape();
	virtual ~IShape();

	//攻撃する関数
	virtual void Size() = 0;
	virtual void Draw() = 0;
protected:
	int damage_;
};