package io.github.hellx2.enigma;

public final class Maths {
  public static final double E  = 2.7182818284590452;
  public static final double PI = 3.1415926535897932;
  
  private Maths() {
    throw new UnsupportedOperationException();
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
}
