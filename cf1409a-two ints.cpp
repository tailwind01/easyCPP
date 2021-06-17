//publisher tailwind, runtime 124ms, memory 0Kb

#include <iostream>
using namespace std;
int diffs(long long int a, long long int b){
    
    long long int ans = 0;
    long long int absDiff = 0;
    
    if(a>b){
        absDiff = a-b;
        if(absDiff % 10 != 0 && absDiff>10){
            ans = absDiff/10 + 1;
        }
        else if(absDiff % 10 == 0 && absDiff>10){
            ans = absDiff/10;
        }
        else{
            ans = 1;
        }
    }
    else if(b>a){
        absDiff = b - a;
        if(absDiff % 10 != 0 && absDiff>10){
            ans = absDiff/10 + 1;
        }
        else if(absDiff % 10 == 0 && absDiff>10){
            ans = absDiff/10;
        }
        else{
            ans = 1;
        }
    }
    return ans;
}

int main(){
    int nc;
    cin >> nc;
    for(int j=0;j<nc;j++){
        long long int a,b;
        cin >> a >> b;
        cout << diffs(a,b) << endl;
    }
    return 0;
}
