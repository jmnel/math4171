from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
import numpy as np
import colorsys
from math import pi
import time

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

def plotContour2( x, y, z, trigsX, trigsY ):
    fig = plt.figure()
    n = [ 1.5, 10, 50, 100, 200 ]
    contour = plt.contour(x, y, z, n, colors='k' )
    plt.clabel(contour, inline=True, fontsize=10)
    plt.plot( [ 1 ], [ 1 ], 'ro' )
    ax = fig.gca()
    ax.set_xlabel(r"${x_1}$", fontsize=10);
    ax.set_ylabel(r"${x_2}$", fontsize=10);
    k = int(len( trigsX ) / 3)
    i = 0

    print(len(trigsY))
    while i < k:
        xVals = [ ]
        yVals = [ ]
        xVals.append( trigsX[i*3])
        xVals.append( trigsX[i*3+1])
        xVals.append( trigsX[i*3+2])
        xVals.append( trigsX[i*3])

        yVals.append( trigsY[i*3])
        yVals.append( trigsY[i*3+1])
        yVals.append( trigsY[i*3+2])
        yVals.append( trigsY[i*3])

        # Calculate color from hsv
        h = ( i / k );
        c = colorsys.hls_to_rgb( h, 0.8, 1.0 )

        polytop = plt.plot( xVals, yVals, color=c )
        i += 1
    
    ax.xaxis.set_major_locator(LinearLocator(7))
    ax.yaxis.set_major_locator(LinearLocator(6))
    ax.set_xlim(-1.5, 1.5)
    ax.set_ylim(-0.5, 2.0)
    plt.tight_layout()
    plt.savefig('/home/jacques/repos/math4171/assignment1/figures/fig1-2.pdf')
    #plt.show()
    return None

def plotContour3( x, y, z, trigsX, trigsY ):
    fig = plt.figure()
    n = [ 1.5, 10, 50, 100, 200 ]
    contour = plt.contour(x, y, z, n, colors='k' )
    plt.clabel(contour, inline=True, fontsize=10)
    plt.plot( [ 1 ], [ 1 ], 'ro' )
    ax = fig.gca()
    ax.set_xlabel(r"${x_1}$", fontsize=10);
    ax.set_ylabel(r"${x_2}$", fontsize=10);
    plt.plot( trigsX, trigsY )
    ax.xaxis.set_major_locator(LinearLocator(7))
    ax.yaxis.set_major_locator(LinearLocator(6))
    ax.set_xlim(-1.5, 1.5)
    ax.set_ylim(-0.5, 2.0)
    plt.tight_layout()
    plt.savefig('/home/jacques/repos/math4171/assignment1/figures/fig1-3.pdf')
    #plt.show()
    return None

def createFigure():
    return plt.figure()

def showFigure( figure ):
    figure.show()
    return None

def saveFigure( figure, path ):
    plt.savefig( path )
    return None

def getCurrentAxes( figure ):
    return figure.gca()

def listPlot( x, y ):
    return plt.plot(x,y)

def contourPlot( x, y, z, n=None ):
    if n is None:
        return plt.contour( x, y, z )
    else:
        return plt.contour( x, y, z, n )

def surfacePlot( ax, x, y, z ):
    return ax.plot_surface( x, y, z )
