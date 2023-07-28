operations = {
    "avg": lambda seq: sum(seq) / len(seq),
    "total": lambda seq: sum(seq),
    "top": lambda seq: max(seq)
}


students = [
    {"name": "Rolf", "grades": (67, 90, 95, 100)},
    {"name": "Bob", "grades": (56, 78, 80, 90)},
    {"name": "Jen", "grades": (98, 90, 95, 99)},
    {"name": "Anne", "grades": (100, 100, 95, 100)},
]

for student in students:
    name = student["name"]
    grades = student["grades"]
    
    
    print(f'Student Name: {name}')
    operation = input("select what you wish to know; avg, top or total: ")
    opetation_function = operations[operation]
    print(opetation_function(grades))
