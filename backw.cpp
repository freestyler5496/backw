void writeBackward(char *str)
{
    if((*str) != '\0')
        writeBackward(str+1);
    cout << *str;
}
void swapViaPtr(char *a, char*b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void inverse(char *str, int len)
{
    if(len > 1){
        swapViaPtr(str, str+len-1);
        inverse(str+1, len-2);
    }
}

bool binaryRecSearch(int *a, int size, int item)
{//int a[5] = {0, 1 , 4, 5, 6};

   //int mid;
    if(item == a[size/2])
        return true;
    if (size/2==0)
        return false;
    if(item < a[size/2])
        return binaryRecSearch(a,  size/2, item);
    else
        return binaryRecSearch(a+size/2, size - size/2, item);

}

int binarySearch(int *a, int low, int high, int item)
{
    int mid = (low+high)/2;
    if(low <= high)
    {

        if(a[mid] == item)
            return mid;
        else if(a[mid] <= item)
            return binarySearch(a, mid+1, high, item);
        else
            return binarySearch(a, low, mid-1, item);

    }

    else
        return -mid;  // the negative of the position to be inserted
}
