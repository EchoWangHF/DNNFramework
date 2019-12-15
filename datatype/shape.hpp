/*
 * the shape class
 * by wangjun in 2019-11-03
 */

#ifndef _DNN_SHAPE_
#define _DNN_SHAPE_

#include <iostream>
#include <vector>

namespace DNN {

enum Layout { NCHW， NHWC };

class Shape {
 public:
  Shape();
  Shape(const Shape &other);
  Shape(const Shape &&other);
  Shape(const int n, const int c, const int h, const int w);
  Shape(const std::vector<int> dims);
  virtual ~Shape() = default;

  int getN() const;
  int getC() const;
  int getH() const;
  int getW() const;
  int getDims() const;
  int getLayout() const;

  int setN(const int &n);
  int setC(const int &c);
  int setH(const int &h);
  int setW(const int &w);
  int setDims(const std::vector<int> &dims);

 private:
  int N;
  int C;
  int H;
  int W;
  std::vector<int> dims;

  Layout layout;
};

}  // namespace DNN

#endif
