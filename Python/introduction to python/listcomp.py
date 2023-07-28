'''
friends = {'Xpan', 'Jay', 'Nife'}
guests = {'Xpan', 'Jay', 'Nife', 'papy', 'demane'}
ninvited = guests.symmetric_difference(friends)

for name in ninvited:
    print(f'chase {name} out of this place this instant')
'''

friends = ['Xpan', 'Jay', 'Nife']
guests = ['Xpan', 'Jay', 'Nife', 'papy', 'demane']

friendl = [f.lower() for f in friends]

afriends = [
    name.title() for name in guests if name.lower() in friendl 
]


print(afriends)