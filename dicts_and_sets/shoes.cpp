#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    const int APPROPIRATE_SIZE = 3;
   
    int size = 0, shoesAmount = 0;
    int countCoincidence = 0;
     
    cin >> size;
    cin >> shoesAmount;
   
    if(size <= 0 || shoesAmount <= 0 || size >= 100 || shoesAmount >= 1000)
    {
        cout << 0;
        return 0;
    }
   
    vector <int> sizesVec(shoesAmount);
   
    for(int i = 0; i < shoesAmount; ++i)
    {
        cin >> sizesVec[i];
    }
   
    sort(sizesVec.begin(), sizesVec.end());
   
    int index = 0;

    for(int i = 0; i < shoesAmount; ++i)
    {
        if(sizesVec[i] >= size)
        {
            index = i;
            countCoincidence++;
            break;
        }
    }

    if(!countCoincidence)
    {
        cout << 0;
        return 0;
    }

    for(int i = index + 1; i < shoesAmount; ++i)
    {
        if(sizesVec[i] - sizesVec[index] >= APPROPIRATE_SIZE)
        {
            index = i;
            countCoincidence++;
        }
    }
    cout << countCoincidence;
   
  return 0;
}