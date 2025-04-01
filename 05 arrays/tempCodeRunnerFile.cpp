int start = 0, end = n-1, mid = 0;

    while(mid <= end){
        if(arr[mid] == 0){
            swap(arr[start++], arr[mid]);
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[end--]);
        }
    }