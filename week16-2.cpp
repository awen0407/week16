// week16-2.cpp 學習計畫 math 最後一題
// leetcode 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0){
                n = -n;
                x = 1/x;
        }
        if(n%2==0){
                double now = myPow(x, n/2);
                return now * now;
        }else{
                double now = myPow(x, n/2);
                return now * now *x;
        }
        double ans = 1;
        if(n>0){
            for(int i=0;i<n;i++){ //用瘋狂程設寫法,但n<0會失敗
                ans*= x;
            }
        }else if(n<0){
            for(int i=0;i<-n;i++){ //特別針對n<0 用負負得正 ,換成倒過來的形式
                 ans*= 1/x;
             }
        }
        return ans;
    }
};