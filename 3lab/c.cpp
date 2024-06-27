// решаем задачу без бин поиск так как тут можно решить просто
// сперва открываем счетчик потом работаем так чтобы он сравнивал если элемент больше чем л1 и меньше то счетчик
//стоновиться лучше 
//ниже будет также код используя бин поиск


#include <bits/stdc++.h> 
using namespace std;
vector<int>v;
int easy(vector<int>&v,int l1,int r1,int l2,int r2,int size){
    int cnt=0;
    for(int i=0;i<size;i++){
        if(v[i]>=l1&&v[i]<=r1||v[i]>=l2&&v[i]<=r2){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n,k;
    cin>>n>>k;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        }
        
    for(int i=0;i<k;i++){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        cout<<easy(v,l1,r1,l2,r2,n)<<endl;

    }
    }


//РЕШЕНИЕ ЗАДАЧИ ИСПОЛЬУЗУЯ БИН ПОИСК ТО ЕСТЬ ФУНКЦУЮ UPPER_BOUND AND LOWER_BOUND

// lower_bound:
/*
Возвращает итератор на первый элемент в отсортированном диапазоне, который не меньше (то есть больше или равен) заданного значения.
Если все элементы меньше заданного значения, возвращается итератор на конец диапазона.
*/


//upper_bound

/*

озвращает итератор на первый элемент в отсортированном диапазоне, который строго больше заданного значения.
Если все элементы меньше или равны заданному значению, возвращается итератор на конец диапазона.

*/
 


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Сортируем массив a
    sort(a.begin(), a.end());

    // Обрабатываем каждый запрос
    while (q--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        // Используем бинарный поиск для нахождения границ диапазонов
        int count1 = upper_bound(a.begin(), a.end(), r1) - lower_bound(a.begin(), a.end(), l1);
        int count2 = upper_bound(a.begin(), a.end(), r2) - lower_bound(a.begin(), a.end(), l2);

        // Нужно избежать двойного учета элементов, которые попадают в оба диапазона
        int count_common = 0;
        if (l1 <= r2 && l2 <= r1) {
            int common_l = max(l1, l2);
            int common_r = min(r1, r2);
            count_common = upper_bound(a.begin(), a.end(), common_r) - lower_bound(a.begin(), a.end(), common_l);
        }

        int result = count1 + count2 - count_common;
        cout << result << endl;
    }

    return 0;
}







*/