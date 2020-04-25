/*
 * Deep Neural Network Framework designed by Wangjun
 * The struct of tensor
 */

#ifndef TINY_DNN_CORE_TENSOR_H
#define TINY_DNN_CORE_TENSOR_H

#include<stdint.h>
#include<vector>

#include"core.h"
template <typename T>
class Tensor{
public:
    uint32_t dim;
    std::vector<uint32_t> dims;
    Layout Layout;
    DataType dataType;
    std::share_ptr<void> data;
};


// struct TensorStruct
// {
//     uint32_t dim;
//     std::vector<uint32_t> dims;
//     Layout layout;
//     DataType dataType;
// };

//typedef TensorStruct* TensorDescriptor;

#endif 