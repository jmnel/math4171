from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
import numpy as np

def plotSurface3d(x,y,z):

    X = np.arange(-5, 5, 2)
    Y = np.arange(-5, 5, 1)
    X, Y = np.meshgrid(X, Y)
  
    fig = plt.figure()
    ax = fig.gca(projection='3d')
    surf = ax.plot_surface(x, y, z, cmap=cm.gist_ncar, linewidth=0, antialiased=True)
    ax = fig.gca(projection='3d');
    ax.set_xlabel(r"${x_1}$", fontsize=10);
    ax.set_ylabel(r"${x_2}$", fontsize=10);
    ax.set_zlabel(r"${f(x_1,x_2)}$", fontsize=10);
    ax.xaxis.set_major_locator(LinearLocator(7))
    ax.yaxis.set_major_locator(LinearLocator(6))
    ax.set_xlim(-1.5, 1.5)
    ax.set_ylim(-0.5, 2.0)
    #ax.set_xlim( min(x), max(x))
    #ax.set_ylim(min(y), max(y))

    plt.savefig('/home/jacques/repos/math4171/assignment1/figures/fig1-1.pdf')
    #plt.show()
    return

#ax.zaxis.set_major_formatter(FormatStrFormatter('%.02f'))

## Add a color bar which maps values to colors.
##fig.colorbar(surf, shrink=0.5, aspect=5)
