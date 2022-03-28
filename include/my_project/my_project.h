#pragma once
#include <iostream>
#include <string>

namespace my_project {

/**
 * @brief Device class
 * 
 */
class Device {
 public:
  /**
   * @brief Construct a new Device object
   * 
   * @param name Name of the device
   */
  explicit Device(const std::string& name);

  /**
   * @brief Print the object name
   * 
   */
  void print();

 private:
  // Name of the device
  std::string name_;
};

}  // namespace my_project
