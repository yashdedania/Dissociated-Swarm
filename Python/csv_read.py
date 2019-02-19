import csv
import matplotlib.pyplot as plt

with open('dataset5.csv', 'r') as f:
  reader = csv.reader(f)
  your_list = list(reader)

for i in range(len(your_list)):
    x = your_list[i][0::2]
    print(x)
    y = your_list[i][1::2]
    print(y)
    foo = plt.plot(x, y)

ax=plt.gca()
ax.set_xlim([0,600])
ax.set_ylim([0,600])
ax.set_ylim(ax.get_ylim()[::-1])        
ax.xaxis.tick_top()                           
#ax.yaxis.set_ticks(np.arange(0, 16, 1)) 
ax.yaxis.tick_left() 
plt.show()
