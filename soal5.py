def has_duplicate_dictionary(lst):
    # dictionary ini berisi key:value, dimana key adalah
    # item yang terdapat di list dan value adalah seberapa
    # sering item tersebut muncul di list
    frequency = {}
    CNT = 1
    cek = False
    for item in lst:
        if item in frequency:
            frequency.update({item: CNT+1})
            CNT+=1
            cek = True
        else:
            frequency.update({item: 1})
    if cek:
        print("has duplicate item")
    else:
        print("no duplicate item")
    return frequency


def has_duplicate_set(lst):
    # set ini berisi item yang sudah pernah dilihat dalam lst
    seen = set()
    cek = False
    for item in lst:
        seen.add(item)
    return seen


def main():
    lst = [1, 2, 3, 4, 5, 6, 7, 7]
    print(has_duplicate_dictionary(lst))
    print(has_duplicate_set(lst))


if __name__ == "__main__":
    main()
