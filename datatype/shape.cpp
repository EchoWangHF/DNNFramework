/*
 * the shape class 
 * by wangjun in 2019-11-03
 */

#include "shape.hpp"

namespace DNN{

Shape::Shape():N(0),C(0),H(0),W(0),dims({0,0,0,0}){}

Shape::Shape(const Shape &other):N(other.getN()),C(other.getC()),H(other.getH()),W(other.getW()),dims(other.getDims){}

Shape::Shape(const Shape &&other):N(other.getN()),C(other.getC()),H(other.getH()),W(other.getW()),dims(other.getDims){}

Shape::Shape(const int n,const int c,const int h,const int w):N(n),C(c),H(h),W(w),dims({n,c,h,w}){}
};
