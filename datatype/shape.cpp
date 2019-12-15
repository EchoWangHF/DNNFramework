/*
 * the shape class
 * by wangjun in 2019-11-03
 */

#include "shape.hpp"

namespace DNN {

Shape::Shape() : N(0), C(0), H(0), W(0), dims({0, 0, 0, 0}) {}

Shape::Shape(const Shape &other)
    : N(other.getN()),
      C(other.getC()),
      H(other.getH()),
      W(other.getW()),
      dims(other.getDims),
      layout(other.getLayout) {}

Shape::Shape(const Shape &&other)
    : N(other.getN()),
      C(other.getC()),
      H(other.getH()),
      W(other.getW()),
      dims(other.getDims),
      layout(other.getLayout) {}

Shape::Shape(Layout layout = NCHW, const int n, const int c, const int h,
             const int w)
    : N(n), C(c), H(h), W(w), dims({0, 0, 0, 0}) {
  if (layout == NCHW) {
    dims.at(0) = n;
    dims.at(1) = c;
    dims.at(2) = h;
    dims.at(3) = w;
  } else if (layout == NHWC) {
    dims.at(0) = n;
    dims.at(1) = h;
    dims.at(2) = w;
    dims.at(3) = c;
  } else {
    std::cout << "DNN Shape not support this Layout now" << std::endl;
  }
}

shape::Shape(const std::vector<int> dims) {}
};  // namespace DNN
