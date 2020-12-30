# ControlHub-fibonacci

## fibonacci.cpp
  - The solution proposed in this file is for a one time fibonacci calculation, what I did was setting up the first two values and start adding them together until the required number was reached by iterating from the second number to the requiered number, since I don't need to keep track of the previous numbers I used two variables to save some space.

## fibonacci-2.cpp
  - The solution proposed in this file is for mulitple petitions of fibonacci calculations, thats why I stored each value that is calculated in a vector such that if it comes up again in the future it can be retrieved immediatly, also to avoid calculating new numbers each time from the beginning, if the number is greater than the last one calculated, the function will start at that point.
