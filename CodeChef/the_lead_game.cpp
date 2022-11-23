#include <iostream>
using namespace std;

int main() {
    int sc1, sc2, cs1, cs2, win, lead, final_lead, final_winner, n;
    cs1 = 0; cs2 = 0; final_lead = 0; final_winner = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
       cin >> sc1 >> sc2;
       cs1 = cs1 + sc1;
       cs2 = cs2 + sc2;
       win = (cs1 > cs2) ? 1 : 2;
       lead = (cs1 > cs2) ? (cs1 - cs2) : (cs2 - cs1);
       if(lead > final_lead){
           final_lead  = lead;
           final_winner = win;
       }
    }
    cout << final_winner << " " << final_lead << endl;
	// your code goes here
	return 0;
}
