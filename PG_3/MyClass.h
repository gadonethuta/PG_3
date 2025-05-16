#pragma once

class MyClass {
public:
	void TestFunc();
private:
	void (MyClass::* pFunc)();
};