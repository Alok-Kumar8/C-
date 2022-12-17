#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, rem;
        cin >> a >> b;
        int count = 0;
        int sum = a + b;
        while(sum!=0){
          rem = sum % 10;
          switch(rem){
              case 0:
              count+=6;
              break;
              case 1:
              count+=2;
              break;
              case 2:
              count+=5;
              break;
              case 3:
              count+=5;
              break;
              case 4: 
              count+=4;
	          break;
	          case 5:
	          count+=5;
	          break;
	          case 6:
	          count+=6;
	          break;
	          case 7:
	          count+=3;
	          break;
	          case 8:
	          count+=7;
	          break;
	          case 9:
	          count+=6;
	          break;
          }  
          sum = sum/10;
        }
        cout << count << endl;
        
    }
	return 0;
}
