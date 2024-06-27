// в кратце о задаче нам  у нас есть массив и нам нужно поделить их на к отрезок и найти в этом отрезке самую макс сумму
#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int n;
bool check(vector<int>&v,int middle,int k){
    int cnt=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>middle){
            cnt++;
            if(cnt>k){
                return false;
            }
              sum = v[i];
        }
        


    }
    return true;
}
int main(){
    int k;
    cin>>n>>k;
    int r=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        r+=x;
    }
    int l=*max_element(v.begin(),v.end());
    int otrezok; // находим самый большой отрезок суммы
    while(l<=r){
        int mid=(l+r)/2;
        if(check(v,mid,k)){
            otrezok=mid;// кому не понятно тут делаем так что суммы элементов массива сравниваем с мидлом
            r=mid-1; // соотвестьвеноо пытаемся найти ответ в меньшой половине нашего диапозона
        }
        else{
            l=mid+1;
        }
         cout << "left: " << l << ", right: " << r << ", middle: " << mid << ", answer: " << otrezok<< endl;
         // выше написал о том как выходит наши цифры кому не понятно напишите на тетрадки или листе каждую операцию мне помогло
    }
    cout<<otrezok;
   
}