#pragma once
#include "PluginSettings.h"
#include "AssignmentClass.h"

#ifdef __cplusplus
extern "C"
{
#endif

	//Put Functions here
PLUGIN_API	void saveCoordinates(float x, float y);
PLUGIN_API	float LoadCoordinateX();
PLUGIN_API	float LoadCoordinateZ();

#ifdef __cplusplus
}
#endif
