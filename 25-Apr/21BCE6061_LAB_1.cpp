// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <climits>
#include<ctime>
using namespace std;
void minmax(){
    int arr[] = { 4, 2, 1, 6, -8, 5 };
    cout<<"Naiive approach Without STL O(n)"<<endl;
    int min = INT_MAX, max = INT_MIN;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }
 
        if (i > max) {
            max = i;
        }
    }
 
    cout << "The min element is " << min << endl;
    cout << "The max element is " << max << endl;
 
}
void minmax2(){
    int arr[] = { 4, 2, 1, 6, -8, 5 };
    cout<<"Get With STL"<<endl;
    int *min2 = min_element(begin(arr), end(arr));
    int *max2 = max_element(begin(arr), end(arr));
 
    std::cout << "The min element is " << *min2 << std::endl;
    std::cout << "The max element is " << *max2 << std::endl;
    
}
int main() {
    // Write C++ code here
    clock_t start,end;
    
    start = clock();
    minmax();
    end = clock();
    double time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<time_taken<<"Without STL"<<endl;

    start = clock();
    minmax2();
    end = clock();
    time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<time_taken<<"With STL";
    return 0;
}