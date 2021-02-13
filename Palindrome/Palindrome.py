def rev(temp):
  remainder = 0
  reverse = 0
  while(temp != 0):
    remainder = temp % 10
    reverse = reverse * 10 + remainder
    temp = int(temp / 10)
  return reverse

#main() function
n = int(input("Enter the number: "))
temp = n
res = rev(temp)
if (res == n):
  print(" Number is Palindrome")

else:
  print("Number is not Palindrome")
