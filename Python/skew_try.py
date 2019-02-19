import cv2
import numpy as np
import matplotlib.pyplot as plt

img = cv2.imread('Figure_2.png')
rows,cols,ch = img.shape

pts1 = np.float32([[40, 275],[570,275],[185, 130],[460, 130]])
pts2 = np.float32([[0, 300],[300,300],[0,0],[300,0]])

M = cv2.getPerspectiveTransform(pts1,pts2)

dst = cv2.warpPerspective(img,M,(300,300))

plt.subplot(121),plt.imshow(img),plt.title('Actual path on a 3D plane')
plt.subplot(122),plt.imshow(dst),plt.title('Plotted path on 2D plane')
plt.show()
