# wxThreadInDotNet
Demonstrate use of wxThread in a .NET WPF application.

How to embed wxWidgets in a .NET WPF application.

Build with Visual Studio 2019. The application displays one big button to launch a short-lived detached thread using the wxWidgets portability library.

Of particular interest is the additional include and library directories in the WxWidgetsWrapper project, and the need to invoke wxInitialize before using any of the wx library.
