#include <bits/stdc++.h>
using namespace std;


int main(){
    float y,x,c,m;
    float sse = 0;
    for(int j = 0; j < 4; j++){
        scanf("%f\n%f",&m,&c);
    for(int i = 0; i < 4; i++){
        scanf("%f\n%f",&x,&y);
        sse = sse + pow(y - m*x - c,2);
        printf("%f\n",sse);
        sse = 0;
    }

    }
    return 0;
}
