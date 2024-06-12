//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Solution_PureCode;

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
	auto showNewButton = true;
	if (showNewButton)
	{
		OriginalButton->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

		// Add a new one
		// Create a new button instance
		auto newButton = ref new Button();
		newButton->Content = L"Button 2 - New";
		newButton->Visibility = Windows::UI::Xaml::Visibility::Visible;
		newButton->Click += ref new RoutedEventHandler(this, &MainPage::OnNewButtonClick);
		StackPanel->Children->Append(newButton);
	}
}


void MainPage::OnNewButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Windows::UI::Xaml::Controls::Button^ currentButton = (Windows::UI::Xaml::Controls::Button^)sender;
}
