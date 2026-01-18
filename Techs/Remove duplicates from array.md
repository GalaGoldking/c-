# Parameters
removeDuplicates(<source_array>, <length_of_source_array>, <destination_array>, <length_without_duplicates>)

```C
void removeDuplicates(int source_arr, size_t length, int destination_arr, size_t *new_length){
  size_t count = 0;
  for(size_t i = 0; i < length; i++){
    int isDuplicate = 0;
    
    for(size_t j = 0; j < count; j++){
      
      if(source_arr[i] == destination_arr[j]){
        isDuplicate = 1;
        break;
      }
    }
    
    if (isDuplicate == 0){
      destination_arr[count] = source_arr[i];
      count++;
    }
  }
  *new_length = count;
}

int main(){
  int source_arr[] = {1, 3, 5, 7, 9, 11, 12, 1, 2, 3, 4, 5, 10, 12};
  size_t length = 14;
  int destination_arr[14];
  size_t new_length;

  removeDuplicates(source_arr, length, destination_arr, &new_length);
  
}
```
