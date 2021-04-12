#include "pch.h"
#include "wx/thread.h"

// note that NativeThread deletes itself so no need to hold its pointer
// somewhere

class NativeThread : public wxThread
{
 public:
     NativeThread() : wxThread(wxTHREAD_DETACHED)
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
     public:
         Thread() { new NativeThread(); }
    };

}
