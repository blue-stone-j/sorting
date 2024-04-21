# sorting
Sorting algotithm

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