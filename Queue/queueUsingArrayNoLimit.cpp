template <typename T>
class queueArray{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;


    public:
    queueArray(int s){
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }
        int getSize(){
            return size;
        }

        bool isEmpty(){
            return size==0;
        }

        void enqueue(T element){
            if(size==capacity){
                T *newData = new T[2*capacity];
                int j = 0;
                for(int i = firstIndex; i < capacity; i++){
                    newData[j] = data[i];
                    j++;
                }
                for(int i = 0; i < firstIndex; i++){
                    newData[j] = data[i];
                    j++;
                }
                delete []data;
                data = newData;
                nextIndex = capacity;
                capacity *= 2;
            }
            data[nextIndex] = element;
            nextIndex = (nextIndex + 1) % capacity;
            if(firstIndex == -1){
                firstIndex = 0;
            }
            size++;
        }

        T front(){
            if(isEmpty()){
                cout << "queue is Empty" << endl;
                return 0;
            }
            return data[firstIndex];
        }
    
        T dequeue(){
            if(isEmpty()){
                cout << "Queue is Empty" << endl;
                return 0;
            }
            T ans = data[firstIndex];
            firstIndex = (firstIndex + 1) % capacity;
            size--;
            if(size==0){
                firstIndex = -1;
                nextIndex = 0;
            }
            return ans;
        }
};