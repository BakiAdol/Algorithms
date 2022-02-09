// heap sort algorithm

#include <bits/stdc++.h>

using namespace std;

void heapSort(vector<int> &arr)
{
    int len = arr.size();

    auto leftChild = [](int parent){
        return (parent*2)+1;
    };
    auto rightChild = [](int parent){
        return (parent*2)+2;
    };

    // max heapify
    auto heapify = [&](const auto heapify, int parent=0)->void{
        int lChild = leftChild(parent);
        int rChild = rightChild(parent);
        int maxNode = parent;

        if(lChild < len and arr[maxNode] < arr[lChild]) maxNode = lChild;
        if(rChild < len and arr[maxNode] < arr[rChild]) maxNode = rChild;

        if(parent != maxNode)
        {
            swap(arr[maxNode],arr[parent]);
            heapify(heapify,maxNode);
        }
    };

    // make this array to max heap
    int parentWithChild = len/2 -1;
    for(int i=parentWithChild;i>=0;i--)
    {
        heapify(heapify,i);
    }

    // extract max from max heap and make array sorted
    for(int i=0;i<(int)arr.size();i++)
    {
        swap(arr[0],arr[--len]);
        heapify(heapify);
    }
}

int main(){

    vector<int> arr={1,2,3,4,9,8,7,6,5};

    heapSort(arr);

    for(int i=0;i<(int)arr.size();i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
