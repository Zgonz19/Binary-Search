class BinarySearch
{
    int binarySearch(int arr[], int l, int r, int x)
    {
        if (r>=l)
        {
            int mid = l + (r - l)/2;
            if (arr[mid] == x)
               return mid;
            if (arr[mid] > x)
               return binarySearch(arr, l, mid-1, x);

            return binarySearch(arr, mid+1, r, x);
        }

        return -1;
    }

    public static void main(String args[])
    {

 //128     = 190ms
 //512     = 241ms
 //2048    = 290ms
 //8192    = 348ms
 //32768   = 405ms
 //131072  = 464ms
 //524288  = 550ms
 //2097152 = 625ms
        BinarySearch ob = new BinarySearch();
        //2 lines you need to change per test
        int arr[] = new int[128];
        int arrSize = 128;
        //
        for (int i = 0; i < arrSize; i++) {
          arr[i] = i;
        }
        long startTime = System.currentTimeMillis();
        for (double i = 0; i < 10000000; i++) {
          ob.binarySearch(arr,0,arrSize-1,arrSize);
        }
        long endTime = System.currentTimeMillis();
        System.out.println("That took " + (endTime - startTime) + " milliseconds");
    }
}