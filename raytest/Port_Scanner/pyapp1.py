
class vehicle:
    def __init__(self, company,color,model):
        self.company = company
        self.color = color
        self.model = model

    def Print_All_Data(self):
        print("company name:",self.company,"\nColor:",self.color, "\nModel:",self.model)
class car(vehicle):
    def Tech_Detels(self,Car_Speed,Engin):
        self.Car_Speed = Car_Speed
        self.Engin = Engin 


first = car("BMW","Blue",8812)

first.Print_All_Data()
