import sys

mes=0
dia=0

if __name__ == "__main__":
    for mes in range (1,13):
        print(f"Mes: {mes}")
        if mes==2:
            for day in range (1,29):
                print(f"    Día:{day}")
        elif mes==4:
                for day in range (1,31):
                    print(f"    Día:{day}")
        elif mes==6:
                for day in range (1,31):
                    print(f"    Día:{day}")
        elif mes==9:
                for day in range (1,31):
                    print(f"    Día:{day}")
        elif mes==11:
                for day in range (1,31):
                    print(f"    Día:{day}")
        else:
            for day in range (1,32):
                print(f"    Día:{day}")    
        