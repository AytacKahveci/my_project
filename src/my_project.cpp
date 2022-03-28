#include "my_project/my_project.h"
#include <vector>

namespace my_project
{

Device::Device(const std::string& name) : name_(name) {

}

void Device::print() {
  std::cout << "Name: " << name_ << std::endl;
}

}  // namespace my_project


int main(int argc, char** argv) {
  my_project::Device dev1("device1");
  my_project::Device dev2("device1");
  std::vector<my_project::Device*> devices = {&dev1, &dev2};

  for (auto dev : devices) {
    dev->print();
  }

  return 0;
}
