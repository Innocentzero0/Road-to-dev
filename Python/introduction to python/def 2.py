cars = [
 {"make": "Ford",  "model": "Fiester", "milage": 23000, "fuel_consumed": 460},
 {"make": "Ford", "model": "Focus", "milage": 17000, "fuel_consumed": 350},
 {"make":"Mazda", "model": "MX-5", "milage": 4900, "fuel_consumed": 235}
]
'''
def calculate_mpg(ctc):
    mpg = ctc ["milage"] / ctc["fuel_consumed"]
    name = f"{ctc['make']} {ctc['model']}"
    print(f"{name} consumes {mpg} miles per galon")
'''


def calculate_mpg_2(ctc):
    mpg = ctc ["milage"] / ctc["fuel_consumed"]
    return mpg

def car_name(ctc):
    name = f"{ctc['make']} {ctc['model']}"
    return name 

def car_info(ctc):
    calculate_mpg_2(ctc)
    car_name(ctc)

    print(f"{car_name(ctc)} does {calculate_mpg_2(ctc)} mpg per gallom")
    



for car in cars:
    car_info(car)
