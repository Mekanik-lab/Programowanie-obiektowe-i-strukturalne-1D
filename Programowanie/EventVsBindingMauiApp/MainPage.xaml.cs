namespace EventVsBindingMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void Slider_ValueChanged(object sender, ValueChangedEventArgs e)
        {
            if(sender is Slider slider && labelRotation is not null) 
                labelRotation.Rotation = slider.Value;
        }
    }
}
