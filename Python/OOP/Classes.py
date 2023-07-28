class Movie:
    def __init__(self, new_name, new_director):
        self.name = new_name
        self.director = new_director
    
    def print_info(self):
        return f"<<{self.name}>> by {self.director}"
    

my_movie = Movie('the matrix', 'wachowski')

print(my_movie.print_info())
