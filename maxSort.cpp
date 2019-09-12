#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v (5);  // vector to be sorted
    // initialize v
    v={6,1,3,2,1};

// print the unsorted v
    cout<<"Unsorted v: ";
    print(v);

    // sort v
    maxSort(v);

    // print the sorted v
    cout<<"Sorted v: ";
    print(v);

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        int currMax=0;
        for(int j=0;j<=i;j++){
            if (list.at(j)>=list.at(currMax)) {
                currMax = j;
            }
                swap(list.at(currMax), list.at(i));
                /*complete the code*/
            }
        }
    }

// swap function
void swap(int& a, int&b){
   int temp;
    temp=a;
    a=b;
    b=temp;
}

// print function
void print(const vector<int>& list){
    for (int i=0;i<list.size();i++) {
        cout << list.at(i) << " ";
    }
    cout<<endl;
}

