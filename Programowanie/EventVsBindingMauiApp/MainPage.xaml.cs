namespace EventVsBindingMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
            labelRotation.Rotation = sliderValue.Value;
        }

        private void Slider_ValueChanged(object sender, ValueChangedEventArgs e)
        {
            if(labelRotation is not null)
                labelRotation.Rotation = sliderValue.Value;
        }
    }
}
