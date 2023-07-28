from re import I


friends = ['Xpan', 'Jay', 'Nife', 'fagay', 'kiwi']
ls = [3,4,5,6,7]

lastingfriends = {
    friends[i]:ls[i]
    for i in range(len(friends))
    if ls[i] > 6
}

print(lastingfriends)