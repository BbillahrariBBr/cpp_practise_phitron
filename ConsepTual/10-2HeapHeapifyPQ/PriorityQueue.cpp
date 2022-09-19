#include<bits/stdc++.h>
using namespace std;
class Priority_Queue{
private:
    vector<int> v;
    int leftChild(int i)
    {
        return (i*2)+1;
    }
    int rightChild(int i)
    {
        return (i*2)+1;
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
    void heapify(int start)
    {
        int left_index = leftChild(start);
        int rightt_index = rightChild(start);
        int smallest = start;
        if(left_index< v.size() && v[left_index]<v[smallest])
        {
            smallest = left_index;
        }
        if(rightt_index<v.size() && v[rightt_index]<v[smallest])
            smallest = rightt_index;
        swap(v[start],v[smallest]);
        if(smallest!= start)
        {
            heapify(smallest);
        }

    }

public:
    void push(int value)
    {
        //step 1 push last index of array
        v.push_back(value);
        int present_index = v.size()-1;
        //int my_parent = parent(value);
        while(v[present_index]< v[parent(present_index)])
        {
            if(present_index == 0) break;
            swap(v[present_index],v[parent(present_index)]);
            present_index = parent(present_index);
        }
    }
    int Top()
    {
        return v[0];
    }
    void pop()
    {
        v[0] = v[v.size()-1];
//        delete v[v.size()-1];
        v.pop_back();
        heapify(0);
    }
    bool Empty()
    {
        return v.size()==0;
    }
};

int main()
{
    Priority_Queue pq;
    pq.push(5);
    pq.push(10);
    pq.push(1);
    pq.push(3);
    pq.push(15);
    pq.push(7);
    while(!pq.Empty())
    {
        int v = pq.Top();
        pq.pop();
        cout<<v<<" ";
    }
    cout<<endl;

  return 0;
}

