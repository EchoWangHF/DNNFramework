/*
 * Deep Neural Network Framework designed by Wangjun
 * The struct of tensor
 */

#ifndef DNN_CORE_TENSOR_H
#define DNN_CORE_TENSOR_H

#include <stdint.h>

#include <memory>
#include <vector>

#include "core.h"

namespace DNN {

class Tensor {
 public:
  explicit Tensor();
  explicit Tensor(const Tensor& other);
  Tensor& operator=(const Tensor& other);
  virtual ~Tensor();

  explicit Tensor(const Layout& layout);
  explicit Tensor(const std::vector<int>& shape_vec);

  void setDim(const uint32_t& dim);
  uint32_t getDim() const;

  void setShape(const std::vector<uint32_t>& shape_vec);
  std::vector<uint32_t> getShape() const;

  void setLayout(const Layout& layout);
  Layout getLayout() const;

  void setDataType(const DataType& dtype);
  DataType getDataType() const;

  void setDevice(const Device& device);
  Device getDevice() const;

  void setHostAddress(const void* ptr);
  void* getHostAddress() const;

  void setDeviceAddress(const void* ptr);
  void* getDeviceAddress() const;

 protected:
  /*tensor dim*/
  uint32_t dim;

  /*the dimension in each dim*/
  std::vector<uint32_t> shape;

  /* data layout*/
  Layout layout;

  /* data datatype*/
  DataType dataType;

  /* device kind*/
  Device device;

  /* data ptr in host memory*/
  void* host_addr;

  /* data ptr in device memory*/
  void* device_addr;
};
}  // namespace DNN
#endif