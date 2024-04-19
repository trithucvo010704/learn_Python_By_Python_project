import random 

MAX_LINES = 3 
MAX_BET = 100 
MIN_BET = 1 
#HIEN TAI CHUNG TA TAO MOT MAY DANH BAC 3*3 Y TUONG LA 3 HANG LIEN TIEP SE THANG 
ROWS = 3 
COLS = 3 


symbol_count = {
    "A" : 2 ,
    "B" : 4 ,
    "C" : 6 ,
    "D" : 8 
}

symbol_value = {
    "A" : 5 ,
    "B" : 4 ,
    "C" : 3 ,
    "D" : 2 
}

def check_winnings (columns ,lines ,bet,values):
    winnings = 0 
    winning_lines = []
    for line in range(lines):
        symbol = columns[0][line]
        for column in columns:
            symbol_to_check = column[line]
            if symbol != symbol_to_check :
                break 
        else : 
            winnings += values[symbol] * bet  # so tien nay la so tien thang khi thang trong dong line da chon ( vd chon danh 1 line thi so tien thang 1 line)
            winning_lines.append(line+1)
    
    return winnings ,winning_lines



def get_slot_machine_spin(rows,cols, symbols):
    all_symbols =[] 
    for symbol ,symbol_count in symbols.items():
        for i in range(symbol_count): 
            all_symbols.append(symbol)
    
    columns = []
    for col in range(cols): 
        column =[]
        current_symbols = all_symbols [:] # toan tu de sao cho list all symbols sang current 
        for row in range (rows):
            value = random.choice(current_symbols)
            current_symbols.remove(value)
            column.append(value)

        columns.append(column)


    return columns


def print_slot_machine( columns ):
    for row in range(len(columns[0])): 
        for i,column in enumerate (columns) : 
            if i != len(columns) -1 :
                print(column[row],end=" | ")
            else :
                print (column[row],end="")
        print()
            



def deposit() : 
#day la ham de gui tien 
 
    while True: 
        amount =  input("What do you want to deposit ? $")   
        #neu nhap duoi dang chuuoi se ktra va chuyen no ve so nguyen
        if amount.isdigit() :
            amount = int(amount)
            if amount > 0 : 
                break ; 
            else : 
                print("Amount must be greater than 0.")
        else : 
            print("Please enter a number.")
    
    
    return amount     
# DAY LA HAM DE THUC HIEN SO DONG CUOC 
def get_numeber_of_lines() :
    while True: 
        lines =  input("Enter the number of lines to bet on (1- " + str(MAX_LINES)+ ") ? ")   
        #neu nhap duoi dang chuuoi se ktra va chuyen no ve so nguyen
        if lines.isdigit() :
            lines = int(lines)
            if 1 <= lines <= MAX_LINES : 
                break ; 
            else : 
                print("Enter a valid number of lines.")
        else : 
            print("Please enter a number.")
    
    
    return lines  
#DAY LA HAM THE HIEN SO TIEN CUOC MOI DONG    
def get_bet() :
    while True: 
        amount =  input("What do you want to bet on each line  ? $")   
        #neu nhap duoi dang chuuoi se ktra va chuyen no ve so nguyen
        if amount.isdigit() :
            amount = int(amount)
            if MIN_BET<= amount <= MAX_BET  : 
                break ; 
            else : 
                print("Amount must be beetween ${MIN_BET} - ${MAX_BET}")
        else : 
            print("Please enter a number.")
    
    
    return amount  

def spin(balance):
    lines =get_numeber_of_lines()
    while True :
        bet =  get_bet()
        total_bet = bet*lines 
        if total_bet > balance :
            print(f"You do not have enough money to bet , your current balance is ${balance}")
        else :
            break 
   
    print(f"you are betting ${bet} on {lines} lines.Total bet is equal to : ${total_bet} ")
    
    slots = get_slot_machine_spin(ROWS,COLS, symbol_count)
    print_slot_machine(slots)
    winnings,winnings_lines  =  check_winnings(slots,lines,bet,symbol_value)
    print(f"You won ${winnings} . ")
    print(f"You won on ",*winnings_lines)

    return winnings  -total_bet 

def main() : 
    balance =deposit()
    while True :
        print(f"Current balance is  ${balance}")
        anwser   = input("Press enter to play (q to quit): ")
        if( anwser == "q") :
            break
        balance+= spin(balance)
   
    print(f"You left with ${balance}")

main()