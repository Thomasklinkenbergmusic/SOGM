// filePlayer
// main.cpp
//
// created by Thomas Klinkenberg
// copyright (c) 2017 Thomas Klinkenberg. All rights reserverd.

#include <iostream>
#include <string>
#include <unistd.h>
#include <bear/Audio/File.hpp>
#include <bear/Audio/Output.hpp>

int main () {
  std::cout << "Starting program..." << std::endl;

  //ask user to give input
  std::string fileName;
  std::cout << "Please enter file name" << std::endl;
  std::cin >> fileName;

  //get location of program
  char *answer = getcwd(NULL, 0);
  std::string s_cwd;
  if (answer) {
    s_cwd = answer;
    delete answer;
  }

  // Fill in path and uses audio file
  std::string filePath = s_cwd + "/" + fileName;
  bear::audio::File file(filePath);

  // Get some file information
  std::cout << "Number of channels: " << file.getChannelCount() << std::endl;
  std::cout << "Sampling rate: " << file.getSampleRate() << std::endl;
  std::cout << "Number of frames: " << file.getFrameCount() << std::endl;
  std::cout << "Format: " << file.getFormat() << " (" << file.getSubFormat() << ")" << std::endl;
  std::cout << "Duration: " << file.getFrameCount() / (double)file.getSampleRate() << std::endl;

  auto& output = bear::audio::Output::getDefaultOutput();

  // exit program
  std::cout << "Shutting down program..." << std::endl;
  return 0;
}
