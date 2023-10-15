#include <stdio.h>

int main()
{
	int A,B,C,a,b,c,d,i=0;
	scanf("%d %d %d",&A,&B,&C);
	for(a=(A<0?A:1);a<=(A<0?A*-1:A) && i==0;a++){
		if(a!=0 && (A%a==0)){
			c = A/a;
			for(b=(B<0?C*-1:(C<0?C:1));b<=(B<0?-1:(C<0?C * -1:C));b++){
				if(b!=0 && (C%b==0)){
					d = C/b;
					if(B == ((b * c)+(a * d))){
                        printf("%d %d %d %d",a,b,c,d);
						i++;
						break;
					}
				}
			}
		}
	}
	if(i==0){
		printf("No Solution");
	}
	return 0;
}
