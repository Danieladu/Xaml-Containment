//
// pch.h
//

#pragma once

#include <collection.h>
#include <ppltasks.h>

#include "App.xaml.h"

namespace Solution_VisibilityControl
{
    public ref class NegatedBooleanToVisibilityConverter sealed : public Windows::UI::Xaml::Data::IValueConverter
    {
    public:

        virtual Platform::Object^ NegatedBooleanToVisibilityConverter::Convert(Platform::Object^ value, Windows::UI::Xaml::Interop::TypeName targetType, Platform::Object^ parameter, Platform::String^ language)
        {
            auto boxedBool = dynamic_cast<Platform::Box<bool>^>(value);
            auto boolValue = (boxedBool != nullptr && boxedBool->Value);

            return (!boolValue ? Windows::UI::Xaml::Visibility::Visible : Windows::UI::Xaml::Visibility::Collapsed);
        }

        virtual Platform::Object^ NegatedBooleanToVisibilityConverter::ConvertBack(Platform::Object^ value, Windows::UI::Xaml::Interop::TypeName targetType, Platform::Object^ parameter, Platform::String^ language)
        {
            auto visibility = dynamic_cast<Platform::Box<Windows::UI::Xaml::Visibility>^>(value);
            return (visibility != nullptr && visibility->Value != Windows::UI::Xaml::Visibility::Visible);
        }
    };

    public ref class BooleanToVisibilityConverter sealed : public Windows::UI::Xaml::Data::IValueConverter
    {
    public:

        virtual Platform::Object^ BooleanToVisibilityConverter::Convert(Platform::Object^ value, Windows::UI::Xaml::Interop::TypeName targetType, Platform::Object^ parameter, Platform::String^ language)
        {
            auto boxedBool = dynamic_cast<Platform::Box<bool>^>(value);
            auto boolValue = (boxedBool != nullptr && boxedBool->Value);

            return (boolValue ? Windows::UI::Xaml::Visibility::Visible : Windows::UI::Xaml::Visibility::Collapsed);
        }

        virtual Platform::Object^ BooleanToVisibilityConverter::ConvertBack(Platform::Object^ value, Windows::UI::Xaml::Interop::TypeName targetType, Platform::Object^ parameter, Platform::String^ language)
        {
            auto visibility = dynamic_cast<Platform::Box<Windows::UI::Xaml::Visibility>^>(value);
            return (visibility != nullptr && visibility->Value == Windows::UI::Xaml::Visibility::Visible);
        }
    };

}