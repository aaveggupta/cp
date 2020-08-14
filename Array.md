# Arrays

### Elements Store in continuous memory location.

------

## Advantages

1. Random Access (We can get the ith element in Big O one time)
2. Cache Friendliness. (It brings the nearby elements in cache and they are quickly accessible)

## Dis-Advantages

1. Wastage of Space 
2. In case of list also there is wastage of space as when the list gets full it makes another copy with double the size.

------

 ## Time Complexities

| OPERATION | COMPLEXITY           |
| --------- | -------------------- |
| INSERT    | At the End - O(1)    |
|           | In the Middle - O(n) |
| DELETE    | At the End - O(1)    |
|           | In the Middle - O(n) |

<hr>

## Reverse An Array

```C++
 int main() 
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int low = 0, high = 5;

    while (low < high) {
        swap(a[low], a[high]);
        low ++;
        high --;
    }

    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
}
```

<hr>

## Rotate an Array

### Anticlockwise  (d = 2)

|    INPUT     |    OUTPUT    |
| :----------: | :----------: |
| 5 8 10 12 15 | 10 12 15 5 8 |

```c++
int main()
{
    int n = 5;
    int a[n] = {5, 8, 10, 12, 15};
    int d = 2;

    reverse(a, a + d);
    reverse(a + d, a + n);
    reverse(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}
```

### Clockwise (d = 2)

|    INPUT     |    OUTPUT    |
| :----------: | :----------: |
| 5 8 10 12 15 | 12 15 5 8 10 |

```C++
int main()
{
    int n = 5;
    int a[n] = {5, 8, 10, 12, 15};
    int d = 2;

    reverse(a + n - d, a + n);
    reverse(a, a + n - d);
    reverse(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
```

<hr>

## Leader in an Array

### Element is called leader if there is no greater element on right side of it.

|      INPUT       |   OUPUT   |
| :--------------: | :-------: |
|  5 3 20 15 8 3   | 20 15 8 3 |
| 5 3 20 15 8 25 3 |   25 3    |

```C++
int main()
{
    int a[] = {5, 3, 20, 15, 8, 3};
    int max = -1;

    for (int i = 5; i >= 0; i--) {
        if (a[i] > max) {
            max = a[i];
            cout << max << " "; // We can use stack to print from start.
        }
    }
}
```

<hr>

## Trapping Rain Water



