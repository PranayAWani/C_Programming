import numpy
x=[99,86,87,888,111,87,77,85]

mean = numpy.mean(x)
print("Mean=",mean)

meidan =numpy.median(x)
print("Median=",meidan)

from scipy import stats

mode=stats.mode(x)
print("mode=",mode)

standard_deviation=numpy.std(x)
print("STD= ",standard_deviation)

var=standard_deviation**2
varience=numpy.var(x)
print("varience = ",var)
print("varience = ",varience)

percentile=numpy.percentile(x,75)
print("percentile= ",percentile)
