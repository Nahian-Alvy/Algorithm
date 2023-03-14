#include<iostream>
using namespace std;

template<typename T>
class QueueUsingArray{
	T* data;
	int frontIndex;
	int rearIndex;
	int maxSize;
	int size;

	public:
	QueueUsingArray(int size){
		maxSize = size;
		data = new T[maxSize];
		frontIndex = -1;
		rearIndex = 0;
		this->size = 0;
	}

	int getSize(){
		return size;
	}

	bool isEmpty(){
		return size == 0;
	}

	T front(){
		if(frontIndex == -1){
            cout<<"Queue is empty "<<endl;
			return 0;
		}
		return data[frontIndex];
	}

	void push(T elem){
			if(size == maxSize){
                cout<<"Queue is full "<<endl;
				return;
			}

			if(frontIndex == -1){
				frontIndex = 0;
			}

			data[rearIndex] = elem;
            rearIndex++;
			size++;
	}


	T pop(){
		if(frontIndex == -1){
            cout<<"Queue is empty "<<endl;
			return 0;
		}
		T temp = data[frontIndex];
        for (int i = 0; i <size; i++) {
                data[i] = data[i + 1];
        }
        rearIndex--;
        size--;
		if(size == 0){
			frontIndex = -1;
			rearIndex = 0;
		}
		return temp;
	}
};

 int main(){
    QueueUsingArray<int> q1(5);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q1.push(7);
    cout<<"Element which is being removed "<<q1.pop()<<endl;
    q1.push(8);

    QueueUsingArray<char> q2(5);
    q2.push('a');
    q2.push('b');
    q2.push('c');
    cout<<"Element which is being removed "<<q2.pop()<<endl;
 }
