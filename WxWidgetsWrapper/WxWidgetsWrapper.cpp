#include "pch.h"
#include "WxWidgetsWrapper.h"

#define wxUSE_GUI 0 // don't redefine WinMain
#include <wx/init.h>

namespace WxWidgetsWrapper
{

    public ref class Initializer
    {
        wxInitializer* initializer;
     public:
         Initializer() { initializer = new wxInitializer(); }
         ~Initializer() { this->!Initializer(); }
         !Initializer() {
             if (initializer) { delete initializer; initializer = nullptr; }
         };

    };
}
