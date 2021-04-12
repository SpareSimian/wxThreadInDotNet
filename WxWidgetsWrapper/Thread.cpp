#include "pch.h"
//#include "wx/thread.h"

class NativeThread // : public wxThread
{
 public:
     NativeThread()
     {
#if 0
         Create();
         Run();
#endif
     }
};

namespace WxWidgetsWrapper
{

    public ref class Thread
    {
        NativeThread* nativeThread;
     public:
         Thread() : nativeThread(new NativeThread())
         {
         }
         ~Thread() { this->!Thread(); }
         Thread::!Thread() { delete nativeThread; nativeThread = nullptr; }
    };

}
