void BinaryInsertSort(int arr[], int len)   
{   
    int key, left, right, middle;   
    for (int i=1; i<len; i++)   
    {   
        key = a[i];   
        left = 0;   
        right = i-1;   
        while (left<=right)   
        {   
            middle = (left+right)/2;   
            if (a[middle]>key)   
                right = middle-1;   
            else   
                left = middle+1;   
        }   

        for(int j=i-1; j>=left; j--)   
        {   
            a[j+1] = a[j];   
        }   

        a[left] = key;          
    }   
}
