class Solution {
public:
    double myPow(double x, int n) {
        long N=n;
        if(N<0){
          x=1/x;
          N=-N;
        }
        return pow(x,N);
    }
    double pow(double x, int p){
      if(p==0){
        return 1;
      }
      double half=pow(x,p/2);
      if(p%2==0){
        return half*half;
      }
      else{
        return half*half*x;
      }
    }
};
