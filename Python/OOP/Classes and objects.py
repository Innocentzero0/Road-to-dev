my_student = {
  'name': 'Rolf Smith',
  'grades': [70, 88, 90, 99],
  'average' : None #look below
}

def avg_student(students):
  return sum(students['grades'])/len(students['grades'])


class Student:
  def __init__(self, new_name, new_grades):
    self.name = new_name
    self.grades = new_grades

  def average(self):
    return sum(self.grades) / len(self.grades)

student_one = Student("jeje", [12,12,4,54,46])

print(student_one.average()) #or it can also be written as print(Student.average(studernt_one))
