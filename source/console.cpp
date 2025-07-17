#include <iostream>
#include "console.h"

namespace SCrystalStoneRPG
{
	void Clear(void)
	{
		#ifdef _WIN32
		std::system("cls");
		#else
		std::system("clear");
		#endif
	}
}