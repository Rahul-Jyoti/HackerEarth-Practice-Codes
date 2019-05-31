'''
# Sample code to perform I/O:
 
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
 
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
 
# Write your code here
m = [int(x) for x in input().split(" ")]
sum1 = 0
sum2 = 0
j = 0
for i in range(0,len(m),2):
    j = i+1
    sum1 = sum1 + m[i]
    if(j<len(m)):
        sum2 = sum2 + m[j]
print(sum1)
print(sum2)
