#pragma once

#include "Unmanaged.h"

using namespace System;

namespace UnmanagedWrapper {
	public ref class Class1
	{
	public:
		Unmanaged* pu;	// pointer to the Unmanaged class

		// the constructor will allocate the pointer pu
		Class1()
			: pu(new Unmanaged())
		{
		};

		int Hello()
		{
			return pu->Hello();
		};
	};
}
