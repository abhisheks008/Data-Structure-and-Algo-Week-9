str = input()
my_dict = eval(str)

key_max = max(my_dict.keys(), key=(lambda k: my_dict[k]))
key_min = min(my_dict.keys(), key=(lambda k: my_dict[k]))

print(my_dict[key_max])
print(my_dict[key_min])
