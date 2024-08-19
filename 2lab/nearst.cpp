#include <bits/stdc++.h>
using namespace std;

struct NearestNumber {
public:
    vector<int> numbers;
    int k;

    NearestNumber(int n, vector<int>& nums, int target)
        : numbers(nums), k(target) {}

    int findIndex() {
        int minDistance = abs(k - numbers[0]);
        int index = 0;

        for (int i = 1; i < numbers.size(); i++) {
            int currentDistance = abs(k - numbers[i]);
            if (currentDistance < minDistance) {
                minDistance = currentDistance;
                index = i;
            }
        }

        return index;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> sandar(n);
    for (int i = 0; i < n; i++) {
        cin >> sandar[i];
    }
    int k;
    cin >> k;

    NearestNumber finder(n, sandar, k);

    cout << finder.findIndex();
    
}









/* int n;


    cin>>n;
    vector<int>sandar(n);
    for(int i=0;i<n;i++){
        cin>>sandar[i];
    }
    int k;
    cin>>k;
    
    int mindist=abs(sandar[0]-k);
    int index=0;
    for(int i=1;i<n;i++){
        int currentdist=abs(sandar[i]-k);
        if(mindist>currentdist){
            mindist=currentdist;
            index=i;
        }
    }
    cout<<index;

}
*/
