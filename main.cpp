#include <iostream>

using namespace std;

int BinarySearch(int A[],int k,int low,int High){
    if(low <= High){
        int mid = (low+High)/2;
            if(k == A[mid]){
                return mid;
            }
            if(k < A[mid]){
                return BinarySearch(A,k,low,mid-1);
            }
            if(k > A[mid]){
                return BinarySearch(A,k,mid+1,High);
            }
            else return -1;

    }
}

int main(void)
{
    int iaArr[20],iNum,iKey;
    int i,iPos;
    cout << "\nEnter size of the array\n" <<endl;
    cin >>iNum;
    cout << "\nEnter elements of the array\n"<<endl;
    for(i=0;i<iNum;i++){
           cin >> iaArr[i];
    }
    cout << "\nEnter key element\n" <<endl;
    cin >> iKey;
    iPos = BinarySearch(iaArr,iKey,0,iNum-1);
    if(iPos == -1){
      cout << "\nElement not found\n" << endl;
    }
    else{
      cout << "\nElement found at position " <<iPos+1<< endl;
   }
    return 0;
}
