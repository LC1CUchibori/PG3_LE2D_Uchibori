#pragma once
#include "IShape.h"

class rectangle : public IShape {
public:
	void Size()override;
	void Draw()override;
private:
	int answer = 0;
};