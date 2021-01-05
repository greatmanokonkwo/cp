#include<bits/stdc++.h>

#define CARD_VALUES 13
#define MAX_CARDS 52

using namespace std;

string values[] = {"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
string suits[] = {"Clubs","Diamonds","Hearts","Spades"};

string to_str(int val){
	string value = values[(int)(val-1)%CARD_VALUES];
	string suit = suits[(int)(val-1)/CARD_VALUES];
	return (value+" of "+suit);
}

vector<pair<int,int>> pos_vals; // dynamic array that stores position and value pairs for card values in a position in the deck

void solve(){
	int n; cin >> n;
	int i,j; // counters
	int deck[MAX_CARDS];

	// initialize cards from 1 - 52
	for (i=1;i<=MAX_CARDS;i++) deck[i-1]=i;

	int pos; bool rep;
	for(i=0;i<n;i++){
		for(j=0;j<MAX_CARDS;j++){
			cin >> pos; rep = false;
			if (j+1!=pos){
				for (auto a=pos_vals.begin();a!=pos_vals.end();a++){
					if ((*a).first==pos) {
						deck[j] = (*a).second; 
						rep = true; break;
					}
				}
				if (!rep){
					pos_vals.push_back(pair<int,int> {j+1,deck[j]});
					deck[j] = deck[pos-1];
				}
			}
		}
		pos_vals.clear();
	}

	for (i=0;i<MAX_CARDS;i++) cout << to_str(deck[i]) << "\n";
}

int main(){
	freopen("stack_em.txt","r",stdin);

	int t; cin >> t;
	while (t--) solve();
}
