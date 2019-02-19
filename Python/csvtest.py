import csv

myData = [1, 2, 3, 4, 5, 6]  
myFile = open('csvexample1.csv', 'a', newline='')  
with myFile:  
   writer = csv.writer(myFile)
   writer.writerow(myData)
