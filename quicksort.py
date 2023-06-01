import sys

sys.setrecursionlimit(1000000)


def file2vet(filename):
    vet = []
    with open(sys.argv[1], mode='r') as of:
        for value in of:
            vet.append(int(value))
    return vet


def partition(array, low, high):
 
    # Choose the rightmost element as pivot
    pivot = array[high]
 
    # Pointer for greater element
    i = low - 1
 
    # Traverse through all elements
    # compare each element with pivot
    for j in range(low, high):
        if array[j] <= pivot:
 
            # If element smaller than pivot is found
            # swap it with the greater element pointed by i
            i = i + 1
 
            # Swapping element at i with element at j
            (array[i], array[j]) = (array[j], array[i])
 
    # Swap the pivot element with
    # the greater element specified by i
    (array[i + 1], array[high]) = (array[high], array[i + 1])
 
    # Return the position from where partition is done
    return i + 1


def quicksort(vet, low, high):
    if low < high:
        pivot = partition(vet, low, high)
        quicksort(vet, low, pivot-1)
        print(vet[low:pivot-1])
        quicksort(vet, pivot+1, high)

if __name__ == '__main__':
    vet = file2vet(sys.argv[1])

    print(vet)
    quicksort(vet, 0, len(vet)-1)
    print(vet)