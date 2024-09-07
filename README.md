# sorting
Common sorting algotithms.

### compile

### make_pair
Here are two arrays, find two values that close to each other from two arrays respectively and make them a pair. Here are commands to compile and run.
```bash
cd make_pair
python3 generate_arrays.py # generate two random arrays
cd ..
mkdir -p build
cd build
cmake ..
make
./make_pair
```

### merge arrays
Here are several sorted arrays. Merge these arrays and keep new arrat sorted. Here are commands to compile and run.
```bash
mkdir -p build
cd build
cmake ..
make
./merge_arrays_sorted # merge sort or 
./merge_arrays_heap # min_heap
```

### bubble sort
|property|description|
|---|---|
|In-Place|it requires only a constant amount of additional memory space (O(1)).|
|Stability|it preserves the relative order of equal elements.|
|Not Adaptive|While it performs well on fully sorted lists, Bubble sort does not adapt to partially sorted data.|
|Slow |on large lists or large data sets|

### insert sort
|property|description|
|---|---|
|In-Place|it requires only a constant amount of additional memory space (O(1)).|
|Stability|it preserves the relative order of equal elements.|
|Adaptive|it can handle fully sorted data or partially sorted data.|
|Online Sorting|insertion sort can be used to sort data as it is received, which is useful for real-time applications.|

### select sort
|property|description|
|---|---|
|Time Complexity|consistently runs in O(n²) time, regardless of the input’s initial order.|
|In-Place|it requires only a constant amount of additional memory space (O(1)).|
|Not Stable|it does not preserve the relative order of equal elements.|

### quick sort
|property|description|
|---|---|
|Time Complexity|best case: O(n log n), average case: O(n log n), worst case: O(n²)|
|Space Complexity|O(log n): it is an in-place sorting algorithm, meaning it requires only a small amount of additional stack space for the recursive calls.
|
|Fast Average Performance|can handle large datasets efficiently|
|Adaptable|using insertion sort for small sub-arrays.|
|Worst-Case Performance|O(n²)|
|Not Stable|it does not preserve the relative order of equal elements.|
|Recursion Overhead|it can lead to stack overflow issues for very large arrays or poor pivot choices.|