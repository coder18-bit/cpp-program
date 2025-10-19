#include<bits/stdc++.h>
using namespace std;
template<typename T>
void bubbleSort(vector<T>&arr, int n){
	for (int i = 0 ; i < n ; i++){
		for (int j = i ; j < n ; j++){
			if (arr[i] >= arr[j]){
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	vector<string>arr(n);
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	bubbleSort(arr,n);
	for (int i = 0 ; i < n ; i++){
		cout << arr[i] << " ";
	}
}
