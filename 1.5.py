def binarySearch (arr, l, r, x):

    if r >= l:
 
        mid = l + (r - l)/2

        if arr[int(mid)] == x:
            return mid

        elif arr[int(mid)] > x:
            return binarySearch(arr, l, mid-1, x)

        else:
            return binarySearch(arr, mid+1, r, x)
 
    else:
        return -1

#128     =  48 seconds
#512     =  64 seconds
#2048    =  76 seconds
#8192    =  92 seconds
#32768   = 111 seconds
#131072  = 136 seconds
#524288  = 151 seconds
#2097152 = 169 seconds

import time
sizes = [128,512,2048,8192,32768,131072,524288,2097152]
for i in sizes:
    arr = [x for x in range(i)]
    start_time = time.time()
    for x in range(0, 10000000-1):
        result = binarySearch(arr, 0, i-1, i)
    print("--- %s seconds ---" % (time.time() - start_time))


