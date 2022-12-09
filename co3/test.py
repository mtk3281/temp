from graphics import rectangle as r ,circle as c
from graphics._3Dgraphics import *

print("Calling from graphics package  : \n area and perimeter of circle",c.circle_area(5), c.circle_perimeter(5))
print("area and perimeter of rectangle=",r.r_area(5,6), r.r_perimeter(5,6))
print("Calling from _3Dgraphics subpackage : \n area and volume of sphere", sphere_area(5), sphere_volume(5))
print("area and volume of cuboid:" , total_s_area(5,6,7), cuboid_volume(5,6,7))

