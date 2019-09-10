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
    /* your code here */


    // print the sorted v
    cout<<"Sorted v: ";
    print(v);

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        if(list.at(0)>)/*complete the code*/

        for(int j=0;j<=i;j++){
            /*complete the code*/

        }
        /*complete the code*/
    }
}

// swap function
void swap(int& a, int&b){
    /*your code here*/
}

// print function
void print(const vector<int>& list){
    for (int i=0;i<list.size();i++) {
        cout << list.at(i) << " ";
    }
    cout<<endl;
}

