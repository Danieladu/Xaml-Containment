//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Solution_ControlTemplate;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();

	// Change the showNewButton value to show different button
	auto showNewButton = false;
	auto button = ref new Button();
	button->Visibility = Windows::UI::Xaml::Visibility::Visible;

	if (showNewButton)
	{
		button->Template = dynamic_cast<ControlTemplate^>(Resources->Lookup(StringReference(L"NewButton")));
		button->Content = L"Button 2 - New";
	}
	else {
		// Add a new one
		// Create a new button instance
		button->Template = dynamic_cast<ControlTemplate^>(Resources->Lookup(StringReference(L"OriginalButton")));
		button->Content = L"Button 1 - Origin";
	}

	StackPanel->Children->Append(button);
}
