n= int(input())

phoneBook={}

for i in range(n):
    values= str(input())
    name= values.split()[0]
    phone= values.split()[1]
    phoneBook[name]=phone

try:
    while True:
        query = input().strip()
        query_result = "Not found" if query not in phoneBook else query + "=" + str(phoneBook[query])
        print(query_result)
except EOFError:
    pass
