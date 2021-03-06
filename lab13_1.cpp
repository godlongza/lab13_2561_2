#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T arr[],int N){
    
    int q;
    for(int i = 1; i < 10; i++)
    {
        for(int k = 0;k < N;k++){
            if(k == i) cout << " ["<<arr[k]<<"]";
            else
            {
                cout << " " << arr[k];
            }   
        }
        cout << " => ";
        for(int a = i-1; a>=0 ; a--)
        {
        if (arr[a] < arr[a+1]) {
            swap(arr ,a,a+1);
            q=a;
        }
        }
        for(int k = 0;k < N;k++){
            if(k == q) cout << " ["<<arr[k]<<"]";
            else
            {
                cout << " " << arr[k];
            }       
        }
        cout << endl;
        
    }
cout<<"\n";
}
int main(){
    int a[10] = {12,25,30,44,2,0,4,7,55,25};
    cout << "Input Array:";
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << "\n\n";
    
    insertionSort(a,10);
    
    cout << "\nSorted Array:";
    for(int i = 0; i < 10; i++) cout << a[i] << " ";    
}

