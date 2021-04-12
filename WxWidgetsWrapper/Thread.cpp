#include "pch.h"
#include "wx/thread.h"

class NativeThread : public wxThread
{
 public:
     NativeThread()
     {
         Create();
         Run();
     }
 private:
     virtual void* Entry() { return nullptr; }
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
