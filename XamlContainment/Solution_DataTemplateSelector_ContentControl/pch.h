//
// pch.h
//

#pragma once

#include <collection.h>
#include <ppltasks.h>

#include "App.xaml.h"

namespace Solution_DataTemplateSelector_ContentControl
{
    [Windows::UI::Xaml::Data::Bindable]
    public ref class MyButtonTemplateSelector sealed : Windows::UI::Xaml::Controls::DataTemplateSelector
    {
    public:
        property Windows::UI::Xaml::DataTemplate^ OriginalButtonDataTemplate;
        property Windows::UI::Xaml::DataTemplate^ NewButtonDataTemplate;
    protected:
        virtual Windows::UI::Xaml::DataTemplate^ SelectTemplateCore(Platform::Object^ item, Windows::UI::Xaml::DependencyObject^ container) override
        {
            // Change this to true to show the new button
            auto showNewButton = true;
            if (showNewButton)
            {
                return NewButtonDataTemplate;
            }
            else
            {
                return OriginalButtonDataTemplate;
            }
        }
    };
}
