# Description 

# You are given a number stored in a variable with the namenum

# Check if the number is a prime number or not 

# If the value stored innum, is a prime number printYes, else printNo
 
# Note : A prime number is a number, that is divisible by only 1 and the number itself

# Input
# The first and the only line of the input contains the value stored innum 

# Output 
# If the value stored innum, is a prime number printYes, else printNo 

# Sample Input 1 
 
# 13
# Sample Output 1 
 
# Yes   
# Hint

# In the sample test case, the value stored innum = 13. Since,13is a prime number, the output isYes



def identifyPrime(n):
  result="Yes"
  if n<2:
      print("No")
      return
  for i in range(2,int(n/2+1)):
      if(n%i==0):
          result="No"
          break
      
  print(result)
      
  

