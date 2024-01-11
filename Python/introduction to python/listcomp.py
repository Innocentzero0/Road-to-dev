'''
friends = {'Xpan', 'Jay', 'Nife'}
guests = {'Xpan', 'Jay', 'Nife', 'papy', 'demane'}
ninvited = guests.symmetric_difference(friends)

for name in ninvited:
    print(f'chase {name} out of this place this instant')
'''

friends = input("What is your name: ")

guests = ['Xpan', 'Jay', 'Nife', 'papy', 'demane']

friendsLower = [friend.lower() for friend in friends]

guestFriends = [
    guest.title() for guest in guests if guest in friends
]


print(guestFriends)