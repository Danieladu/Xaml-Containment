﻿//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace Solution_StateTrigger_XAML
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
		property bool ShowOriginalButton { bool get(); }
		property bool ShowNewButton { bool get(); }
	};
}
