#include <CL/sycl.hpp>
#include <iostream>

int main()
{
  // device selection
  cl::sycl::queue queue_host{cl::sycl::host_selector{}};
  cl::sycl::queue queue_gpu{cl::sycl::gpu_selector{}};

  // print device information
  std::cout << "First Try" ;
  
  return 0;
  
}
