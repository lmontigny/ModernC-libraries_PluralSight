#include "stdafx.h"
//#include "cassert"
//#include "crtdbg.h"

int main()
{
	//assert(4 == 5);
	//_ASSERTE(4 == 5);
	static_assert(sizeof(float) == 4, "issue");
	return 0;
}
