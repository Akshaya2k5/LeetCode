int longestMountain(int* arr, int arrSize) {
    if (arrSize < 3) 
        return 0;  
    int ans = 0;
    int i = 1;
    int upper, lower;

    while (i < arrSize) 
    {    
        upper = 0;
        lower = 0;                  
        while (i < arrSize && arr[i - 1] == arr[i])    
            i++;                            
        while (i < arrSize && arr[i - 1] < arr[i]) {  
            upper++;
            i++;
        }
        while (i < arrSize && arr[i - 1] > arr[i]) {
            lower++;
            i++;    
        } 
        if (upper > 0 && lower > 0) { 
            ans = fmax(ans, lower + upper + 1);
        }
    }
    
    return ans;
}