#include "Effect.h"

// Constructor
Effect::Effect()
{
  std::cout << "Effect constructor\n";
}

// Destructor
Effect::~Effect()
{
  std::cout << "Effect destructor\n";
}

// Process
void Effect::process(int frames, int channels, float **buffer)
{
  // Nothing, dry signal
}
