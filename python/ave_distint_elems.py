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
