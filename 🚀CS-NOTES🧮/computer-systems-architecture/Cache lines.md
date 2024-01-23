when data from memory is called it is stored in the cash

example:
```c
struct Data {
    int x;
    int y;
};

  

double sum1(struct Data* dataArray, int size) {
    int sumX = 0;
    int sumY = 0;
  
    for (int i = 0; i < size; i++) {
        sumX += dataArray[i].x;
        sumY += dataArray[i].y;
    }

    if (sumY == 0) {
        // Avoid division by zero
        return 0.0;
    }

    return (double)sumX / (double)sumY;
}

/**
* sum 2 takes twice as long for large arrays because the Data structs are not 
* in the cache anymore so for the second loop the data has to be called form 
* memmory not the cache
*/
double sum2(struct Data* dataArray, int size) {
    int sumX = 0;
    int sumY = 0;
  
    for (int i = 0; i < size; i++) {
        sumX += dataArray[i].x;
    }

    for (int i = 0; i < size; i++) {
        sumY += dataArray[i].y;
    }

    if (sumY == 0) {
        // Avoid division by zero
        return 0.0;
    }

    return (double)sumX / (double)sumY;
}
```

