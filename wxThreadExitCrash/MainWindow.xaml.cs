using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Threading;

namespace wxThreadExitCrash
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        WxWidgetsWrapper.Initializer i = new WxWidgetsWrapper.Initializer();
        
        public MainWindow()
        {
            InitializeComponent();
        }
        
        private void ButtonTest_Click(object sender, RoutedEventArgs e)
        {
            WxWidgetsWrapper.Thread t = new WxWidgetsWrapper.Thread();
            
            // wait for it to exit
            Cursor _previousCursor = Mouse.OverrideCursor;
            Mouse.OverrideCursor = Cursors.Wait;
            Thread.Sleep(2000);
            Mouse.OverrideCursor = _previousCursor;
        }
    }
}
