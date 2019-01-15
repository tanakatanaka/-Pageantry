#pragma once
#include "../SubGLSL.h"
#include "SceneBase.h"

void ControlObjPos();
void CalcLine();
void Jump();
static float direction = 1.0;//障害物直線移動方向

class Wave : public SceneBase
{
public:
	int Initialize(int argc, char** argv);
	void Update();
	void Finalize();
private:
	SubGLSL subGlsl;



};