import unittest
from filecount import *

class Test_FileCount(unittest.TestCase):

    
    
    def test_number(self):
        self.assertGreater(number(3), 0)
        self.assertRaises(ValueError,number, 0)
        self.assertRaises(ValueError,number, -20)        
        self.assertRaises(TypeError,number,7.68)
        self.assertRaises(TypeError,number, True)
        self.assertRaises(TypeError,number, "XYZ")
        
        
if __name__=='__main__':
    unittest.main()
