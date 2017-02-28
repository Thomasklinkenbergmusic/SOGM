#include "Waveshaper.h"

// Constructor
Waveshaper::Waveshaper()
{
  std::cout << "Waveshaper constructor\n";
}

// Destructor
Waveshaper::~Waveshaper()
{
  std::cout << "Waveshaper destructor\n";
}

// Process
void Waveshaper::process(int frames, int channels, float **buffer)
{
  for (int chn = 0; chn < channels; chn++) {
    for (int sample = 0; sample < frames; sample++) {
      // do nothing!
    }
  }
}
