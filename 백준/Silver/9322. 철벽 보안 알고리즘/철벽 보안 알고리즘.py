testcase = int(input())

for _ in range(testcase):
    word = int(input())
    pk1 = input().split()
    pk2 = input().split()

    indexList = []
    for item in pk1:
        indexList.append(pk2.index(item))

    secret = input().split()

    resultList = []

    for index in indexList:
        resultList.append(secret[index])
    print(*resultList)