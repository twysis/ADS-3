// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0, j = size - 1, k = 1;
    while (i < j) {
      int mid = i + (j - i) / 2;
        if (arr[mid] == value) {
          int x = mid;
            while (arr[--mid] == value)
              k++;
            while (arr[++x] == value)
              k++;
            return k;
      } else if (arr[mid] > value)
          j = mid;
      else
        i = mid + 1;
  }
  return 0;
}
