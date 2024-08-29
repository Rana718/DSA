#include <iostream>
#include <unordered_map>

using namespace std;

size_t manualhas(int num){
    size_t hash = num;
    hash = (hash ^ (hash >> 4)) * 0x27d4eb2d;
    hash = (hash ^ (hash >> 5)) * 0x85ebca6b;
    hash = hash ^ (hash >> 16);
    return hash;
}

int main(){
    unordered_map<size_t, int> hash_map;
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int value : values){
        size_t hash = manualhas(value);
        hash_map[hash] = value;
        cout<<"Origin: "<<value<<" Hash: "<<hash<<endl;
    }
    size_t search = manualhas(7);
    if(hash_map.find(search) != hash_map.end()){
        cout<<"Found: "<<hash_map[search]<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    
}