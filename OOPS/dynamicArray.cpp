class dynamicArray{
   int *data;
   int capacity;
   int nextIndex;

   public:
   dynamicArray(){
    data = new int[5];
    nextIndex = 0;
    capacity = 5;
   }

   void add(int element){
    if(nextIndex==capacity){
        int *newData = new int[2*capacity];
        for(int i = 0; i< 5; i++){
            newData[i] = data[i];
        }
         delete [] data;
         data = newData;
         capacity*=2;
    }
    data[nextIndex] = element;
    nextIndex++;
   }

   int get(int i){
    if(i < nextIndex){
        return data[i];
    }
    else{
        return -1;
    }
   }

   void add(int i, int element){
    if(i < nextIndex){
        data[i]=element;
    }
    else if(i==nextIndex){
        add(element);
    }
    else{
        return;
    }
   }

   void print(){
    for(int i = 0; i < nextIndex; i++){
        cout << data[i] << " ";
    }
   }
};