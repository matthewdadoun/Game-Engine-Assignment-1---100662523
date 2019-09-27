//
#include "Wrapper.h"
#include "AssignmentClass.h"

AssignmentClass assignmentClass;

PLUGIN_API void saveCoordinates(float x, float y)
{
	return assignmentClass.saveCoordinates(x, y);
}

PLUGIN_API float LoadCoordinateX()
{
	return assignmentClass.LoadCoordinateX();
}

PLUGIN_API float LoadCoordinateZ()
{
	return assignmentClass.LoadCoordinateZ();
}
