
class vehicle:
    def __init__(self, company,color,model):
        self.company = company
        self.color = color
        self.model = model

    def Print_All_Data(self):
        print("company name: ",self.company,"Color: ",self.color, "Model: ",self.model)
class car(vehicle):
    