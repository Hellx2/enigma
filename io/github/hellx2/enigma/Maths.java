package io.github.hellx2.enigma;

public final class Maths {
  public static final double E  = 2.7182818284590452;
  public static final double PI = 3.1415926535897932;
  
  private Maths() {
    throw new UnsupportedOperationException();
  }
  
  public static double sqrt(double x) {
    return Math.sqrt(x);
  }
  
  public static double pow(double x, double y) {
    return Math.pow(x, y);
  }
  
  public static double max(double... nums) {
    double max = -1 / 0;
    for(double num : nums)
      if(num > max) max = num;
    return max;
  }
  
  public static double min(double... nums) {
    double min = 1 / 0;
    for(double num : nums)
      if(num < min) min = num;
    return min;
  }
  
  public static double floor(double x) {
    return Double.parseDouble(String.valueOf(x).split(".")[0]);
  }
  
  public static double ceil(double x) {
    return x > floor(x) ? floor(x) + 1 : x;
  }
  
  public static double round(double x) {
    return x < floor(x) + 0.5 ? floor(x) : ceil(x);
  }
  
  public static double trunc(double x) {
    return floor(x);
  }
  
  public static double cos(double x) {
    if(x != x) return x;
    while(x > PI) x -= PI;
    while(x < 0) x += PI;
    return -x / PI * 2 + 1;
  }
  
  public static double cosine(double x) {
    return cos(x);
  }
  
  public static double sin(double x) {
    if(x != x) return x;
    while(x > PI) x -= PI;
    while(x < 0) x += PI;
    if(x > PI / 2) x -= PI;
    return x / PI * 2;
  }
  
  public static double sine(double x) {
    return sin(x);
  }
  
  public static double tan(double x) {
    return sin(x) / cos(x);
  }
  
  public static double tangent(double x) {
    return tan(x);
  }
  
  public static double cot(double x) {
    return 1 / tan(x);
  }
  
  public static double cotan(double x) {
    return cot(x);
  }
  
  public static double cotangent(double x) {
    return cot(x);
  }
  
  public static double sec(double x) {
    return 1 / cos(x);
  }
  
  public static double secant(double x) {
    return sec(x);
  }
  
  public static double csc(double x) {
    return 1 / sin(x);
  }
  
  public static double cosec(double x) {
    return csc(x);
  }
  
  public static double cosecant(double x) {
    return csc(x);
  }
  
  public static double acos(double x) {
    if(x < -1 || x > 1 || x != x) return 0 / 0;
    return -((x + 1) * PI / 2);
  }
  
  public static double arccos(double x) {
    return acos(x);
  }
  
  public static double arccosine(double x) {
    return acos(x);
  }
  
  public static double asin(double x) {
    if(x < -1 || x > 1 || x != x) return 0 / 0;
    double x1 = x * PI / 2;
    if(x1 < 0) x1 += PI;
    return x1;
  }
  
  public static double arcsin(double x) {
    return asin(x);
  }
  
  public static double arcsine(double x) {
    return asin(x);
  }
  
  public static double atan(double x) {
    return acos(1 / sqrt(1 + x * x));
  }
  
  public static double arctan(double x) {
    return atan(x);
  }
  
  public static double arctangent(double x) {
    return atan(x);
  }
  
  public static double atan2(double y, double x) {
    return atan(x / y);
  }
  
  public static double arctan2(double y, double x) {
    return atan(x / y);
  }
  
  public static double arctangent2(double y, double x) {
    return atan(x / y);
  }
  
  public static double acot(double x) {
    return atan(1 / x);
  }
  
  public static double arccot(double x) {
    return acot(x);
  }
  
  public static double arccotan(double x) {
    return acot(x);
  }
  
  public static double arccotangent(double x) {
    return acot(x);
  }
  
  public static double asec(double x) {
    return acos(1 / x);
  }
  
  public static double arcsec(double x) {
    return asec(x);
  }
  
  public static double arcsecant(double x) {
    return asec(x);
  }
  
  public static double acsc(double x) {
    return asin(1 / x);
  }
  
  public static double arccsc(double x) {
    return acsc(x);
  }
  
  public static double asccosec(double x) {
    return acsc(x);
  }
  
  public static double arccosecant(double x) {
    return acsc(x);
  }
}
