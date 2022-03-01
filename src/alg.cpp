// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0, j = size - 1, k = 1;
    while (i < j) {
      int mid = i + (j - i) / 2;
        if (arr[mid] == number) {
          int x = mid;
            while (arr[--mid] == number)
              k++;
            while (arr[++x] == number)
              k++;
            return k;
      }
      else if (arr[mid] > number)
        j = mid;
      else
        i = mid + 1;
  }
  return 0;
}
