#include <iostream>
#include <string>
#include <array>

using namespace std;

template <typename T, size_t N>
void getData(array<T, N> &data){
    for(int i = 0; i < N; i++){
        cout << "Enter Module "<< i+1 << " quize score: ";
        cin >> data[i];
    }
}

template <typename T, size_t N>
void printData(array<T, N> &data){
    for(int i = 0; i < data.size(); i++){
        cout << "Module " << i+1 << " quize score: " << data[i] << endl;
    }
}

template <typename T, size_t N>
T getAverageQuizeScore(array<T, N> &data){
    T sum = 0;
    for(int i = 0; i < data.size(); i++){
        sum += data[i];
    }
    return sum / data.size();
}

template <typename T, size_t N>
pair<int, T> getMaxQuizeScore(array<T, N> &data){
    T max = data[0];
    int index = 1;
    for(int i = 1; i < data.size(); i++){
        if(data[i] > max){
            max = data[i];
            index = i+1;
        }
    }
    return make_pair(index, max);
}

template <typename T, size_t N>
pair<int, T> getMinQuizeScore(array<T, N> &data){
    T min = data[0];
    int index = 1;
    for(int i = 1; i < data.size(); i++){
        if(data[i] < min){
            min = data[i];
            index = i+1;
        }
    }
    return make_pair(index, min);
}


int main(){
    
    array<int, 16> quizes;
    getData(quizes);
    printData(quizes);
    
    pair<int, int> minScore = getMinQuizeScore(quizes);
    pair<int, int> maxScore = getMaxQuizeScore(quizes);
    maxScore = getMaxQuizeScore(quizes);
    cout << "The average quize score is: " << getAverageQuizeScore(quizes) << endl;
    cout << "Your lowest score was in Module "<< minScore.first <<" with "<< minScore.second <<"."<< endl;
    cout << "Your highest score was in Module "<< maxScore.first <<" with "<< maxScore.second <<"."<< endl;
    
    return 0;
}
