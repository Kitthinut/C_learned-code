#include <stdio.h>
#include <stdlib.h>
typedef long long ll;	


int main() {

    double a, b, s, ans;  	    
    scanf("%lf %lf", &a, &b);	
    
    s = a * a + b * b;
    
    ll left = 0, right = s;
    
    while (left < right) {	
        
        ll mid = left + (right - left) / 2;	
        
        if (mid * mid == s) {
            ans = mid;	            
            break;	        
        }	        	      
        
        if (mid * mid < s) {	            
            left = mid + 1;	            
            ans = mid;	        
        }	        
        else {	            
            right = mid - 1;	            
            ans = mid - 1;	        
        }	    
    }
    
    double incres = 0.1;
    
    for (int i = 0; i < 7; i++) {
        
        while (ans * ans <= s) {	            
            ans += incres;	        
        }	        
        ans -= incres;	        
        incres /= 10;	    
    }	
    
    printf("%f", ans);	
}
