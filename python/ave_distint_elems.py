from __future__ import division, print_function


def average(array):
    """
    Compute the average of distinct items in an array.

    Parameters
    ----------
    * `array` [list]
        array of potentially non-unique numbers.

    Returns
    -------
    Mean of the unique elements in the array. [float]
    """
    my_set = set(array)
    return sum(my_set) / len(my_set)


def main():
    n = int(input())
    arr = map(int, input().split())
    result = average(arr)
    print(result)


if __name__ == main():
    main()
