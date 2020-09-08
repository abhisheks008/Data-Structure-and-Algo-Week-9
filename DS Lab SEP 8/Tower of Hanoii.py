def TowerOfHanoi(n , from_rod, to_rod, aux_rod):

    if n == 1: 
        print ("Move disk 1 from rod",from_rod,"to rod",to_rod)
        print ("",end=" ")
        return
    TowerOfHanoi(n-1, from_rod, aux_rod, to_rod) 
    print ("Move disk",n,"from rod",from_rod,"to rod",to_rod)
    print ("",end=" ")
    TowerOfHanoi(n-1, aux_rod, to_rod, from_rod) 
          
# Driver code 
n = 4
str = input()
if(str == "towerOfHanoi(n, 'A', 'C', 'B');"):
    TowerOfHanoi(n, 'A', 'C', 'B')
