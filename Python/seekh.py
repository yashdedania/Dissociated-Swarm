import csv

with open('dataset5.csv', 'r') as f:
  reader = csv.reader(f)
  your_list = list(reader)

x1 = []
y1 = []
xt = []
xtemp = 0
     
for i in range(len(your_list)):
    x = your_list[i][0::2]
    x1.append(x)
    y = your_list[i][1::2]
    y1.append(y)

x1[0] = [ int(i) for i in x1[0] ]

print (x1[0])
print (sum(x1[0]))

for i in range (len(x1)):
    for j in range (len(x1[0])):
        xcurr = 0.5 * float(x1[i][j])
        xtemp =  (xcurr + xtemp) * 0.5 
        xt.append(xtemp)

print(xt)
print(len(xt))
