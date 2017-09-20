from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
import numpy as np

def plotSurface3d(x,y,z):

    print("starting to plot..")
    fig = plt.figure()
    ax = fig.gca(projection='3d')
    surf = ax.plot_surface(x, y, z, cmap=cm.gist_ncar, linewidth=0,
            antialiased=False,
            rstride=1,
            cstride=1 )
    ax = fig.gca(projection='3d');
    ax.set_xlabel(r"${x_1}$", fontsize=10);
    ax.set_ylabel(r"${x_2}$", fontsize=10);
    ax.set_zlabel(r"${f(x_1,x_2)}$", fontsize=10);
    ax.xaxis.set_major_locator(LinearLocator(7))
    ax.yaxis.set_major_locator(LinearLocator(6))
    ax.set_xlim(-1.5, 1.5)
    ax.set_ylim(-0.5, 2.0)
    plt.tight_layout()
    plt.savefig('/home/jacques/repos/math4171/assignment1/figures/fig1-1.pdf')
    print("Figure saved.")
    #plt.show()
    plt.close()
    return None

def plotContour(x, y, z):
    fig = plt.figure()
    n = [ 1.5, 10, 50, 100, 200 ]
    contour = plt.contour(x, y, z, n, cmap=cm.gist_ncar)
    plt.plot( [ 1 ], [ 1 ], 'ro' )
    plt.clabel(contour, inline=True, fontsize=10)
    ax = fig.gca()
    ax.set_xlabel(r"${x_1}$", fontsize=10);
    ax.set_ylabel(r"${x_2}$", fontsize=10);
    #ax.set_zlabel(r"${f(x_1,x_2)}$", fontsize=10)j
    #ax.xaxis.set_major_locator(LinearLocator(7))
    #ax.yaxis.set_major_locator(LinearLocator(6))
    #ax.set_xlim(-1.5, 1.5)
    #ax.set_ylim(-0.5, 2.0)
    plt.tight_layout()
    plt.savefig('/home/jacques/repos/math4171/assignment1/figures/fig1-2.pdf')
    #plt.show()
    return None

def plotContourWithTriangles( x, y, z, triangles )
    fig = plt.figure()
    n = [ 1.5, 10, 50, 100, 200 ]
    contour = plt.contour(x, y, z, n, cmap=cm.gist_ncar)
    plt.clabel(contour, inline=True, fontsize=10)
    plt.plot( [ 1 ], [ 1 ], 'ro' )
    ax = fig.gca()
    ax.set_xlabel(r"${x_1}$", fontsize=10);
    ax.set_ylabel(r"${x_2}$", fontsize=10);
    for triangle in triangles:
        print triangles

    #ax.set_zlabel(r"${f(x_1,x_2)}$", fontsize=10)j
    #ax.xaxis.set_major_locator(LinearLocator(7))
    #ax.yaxis.set_major_locator(LinearLocator(6))
    #ax.set_xlim(-1.5, 1.5)
    #ax.set_ylim(-0.5, 2.0)
    plt.tight_layout()
    plt.savefig('/home/jacques/repos/math4171/assignment1/figures/fig1-3.pdf')
    #plt.show()
    return None
