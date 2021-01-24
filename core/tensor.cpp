/*
 * Deep Neural Network Framework designed by Wangjun
 * The struct of tensor
 */

#include "tensor.h"

namespace DNN {

Tensor::Tensor()
    : dim(0),
      shape(),
      layout(DNN::DNN_LAYOUT_ARRAY),
      dataType(DNN::DNN_DATATYPE_FLOAT32),
      device(DNN::CPU),
      host_addr(nullptr),
      device_addr(nullptr) {}

Tensor::Tensor(const Tensor& other):dim(other.getDim()),shape(other.getShape()),
        layout(other.getLayout()),dataType(other.getDataType()),device(other.getDevice()),
        host_addr(nullptr),device_addr(nullptr){
          if(other.getHostAddress()!=nullptr){
          }

}

}  // namespace DNN
