import numpy as np
import matplotlib.pyplot as plt

r,wr,wphi=np.loadtxt('Valores_Peso.txt',unpack=True)

plt.figure()
plt.plot(r/1e3,wr/1e6)
plt.title("Grafica de Peso vs radio, para un angulo constante ")
plt.xlabel("Radio (r) 1e3")
plt.ylabel("W(r)  1e6")
#plt.plot(r,wphi)
plt.grid()
plt.show()
