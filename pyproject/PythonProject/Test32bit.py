#import  sys
import  clr
#from clr import System

clr.FindAssembly("TestDllAPI.dll")
clr.AddReference('TestDllAPI')
from TestDllAPI import  *
test = Class1()
val = test.Test(1)
print(val)